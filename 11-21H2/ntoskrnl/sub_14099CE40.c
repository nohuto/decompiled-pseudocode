/*
 * XREFs of sub_14099CE40 @ 0x14099CE40
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall sub_14099CE40(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  if ( dword_140D06CF8 )
    KeBugCheckEx(0x1A2u, a3, a4, BugCheckParameter3, BugCheckParameter4);
  return DbgkWerCaptureLiveKernelDump(
           L"PoW32kWatchdog",
           a2,
           a3,
           a4,
           BugCheckParameter3,
           BugCheckParameter4,
           0LL,
           0LL,
           1);
}
