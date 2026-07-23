/*
 * XREFs of ntoskrnl_31 @ 0x140939090
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall ntoskrnl_31(SIZE_T Length, _DWORD *Address)
{
  if ( (unsigned int)Length < 0x14 )
    return 3221225507LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
    ProbeForWrite(Address, (unsigned int)Length, 1u);
  *Address = 2;
  Address[1] = 5;
  Address[2] = 2;
  Address[3] = 0x10000;
  Address[4] = 0x20000;
  return 0LL;
}
