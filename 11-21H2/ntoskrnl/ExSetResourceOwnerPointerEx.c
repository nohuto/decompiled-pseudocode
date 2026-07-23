/*
 * XREFs of ExSetResourceOwnerPointerEx @ 0x14021A7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021A7D0 @ 0x14021A7D0 (sub_14021A7D0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall ExSetResourceOwnerPointerEx(PERESOURCE Resource, PVOID OwnerPointer, ULONG Flags)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  sub_14021A7D0((ULONG_PTR)Resource, (ULONG_PTR)OwnerPointer);
}
