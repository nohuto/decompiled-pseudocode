/*
 * XREFs of sub_1409098C0 @ 0x1409098C0
 * Callers:
 *     sub_1403B91D4 @ 0x1403B91D4 (sub_1403B91D4.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_140909EB0 @ 0x140909EB0 (sub_140909EB0.c)
 *     sub_14090A064 @ 0x14090A064 (sub_14090A064.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1409098C0()
{
  unsigned int v0; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  char v2; // cl
  bool v3; // zf
  unsigned int v4; // ecx
  int v5; // ebx

  stru_140C4B020.Owner = 0LL;
  stru_140C4B020.Contention = 0;
  v0 = 1;
  stru_140C4B020.Count = 1;
  KeInitializeEvent(&stru_140C4B020.Event, SynchronizationEvent, 0);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  dword_140C4AFE0 = 0;
  dword_140C4B010 = 1;
  if ( *((_BYTE *)CurrentPrcb + 141) == 1 )
  {
    v2 = 15;
    v0 = 32;
    dword_140C4AFE0 = 15;
    dword_140C4B010 = 32;
  }
  v3 = (v2 & 4) == 0;
  v4 = 512;
  dword_140C4B004 = dword_140C4B058 / v0;
  if ( v3 )
    v4 = dword_140C4B058;
  dword_140C4B008 = v4;
  dword_140C4ADD0 = dword_140C4B058 / v0 / v4;
  dword_140C4B000 = dword_140C4B058 / v4;
  v5 = sub_140909EB0(0LL, dword_140C4B058 % v4);
  if ( v5 < 0 || (RtlSetBits(&stru_140C4ADE0, 0, 8u), (dword_140C4AFE0 & 4) != 0) && (v5 = sub_14090A064(), v5 < 0) )
  {
    if ( stru_140C4ADE0.Buffer )
    {
      ExFreePoolWithTag(stru_140C4ADE0.Buffer, 0);
      stru_140C4ADE0.Buffer = 0LL;
    }
  }
  return (unsigned int)v5;
}
