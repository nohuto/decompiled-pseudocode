/*
 * XREFs of SdbpCheckDll @ 0x140B134F0
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403E47B0 (KiSwInterruptDispatch.c)
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFA010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B121A0 @ 0x140B121A0 (sub_140B121A0.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckDll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  return a6(a1);
}
