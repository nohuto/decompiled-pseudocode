/*
 * XREFs of ExSetResourceOwnerPointer @ 0x14031A3B0
 * Callers:
 *     CcSetBcbOwnerPointer @ 0x140936DB0 (CcSetBcbOwnerPointer.c)
 * Callees:
 *     ExpSetResourceOwnerPointerEx @ 0x14031A400 (ExpSetResourceOwnerPointerEx.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __stdcall ExSetResourceOwnerPointer(PERESOURCE Resource, PVOID OwnerPointer)
{
  USHORT Flag; // ax

  Flag = Resource->Flag;
  if ( !FeatureFastResource2 )
  {
    if ( (Flag & 1) == 0 )
      goto LABEL_3;
LABEL_5:
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( (Flag & 1) != 0 )
    goto LABEL_5;
LABEL_3:
  ExpSetResourceOwnerPointerEx((ULONG_PTR)Resource, (ULONG_PTR)OwnerPointer);
}
