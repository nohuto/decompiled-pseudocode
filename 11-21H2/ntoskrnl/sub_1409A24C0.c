/*
 * XREFs of sub_1409A24C0 @ 0x1409A24C0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     sub_1409A7248 @ 0x1409A7248 (sub_1409A7248.c)
 */

__int64 __fastcall sub_1409A24C0(
        __int64 a1,
        ULONG a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  int v9; // ecx
  int v11; // [rsp+50h] [rbp-18h] BYREF
  __int128 v12; // [rsp+58h] [rbp-10h] BYREF

  v11 = 0;
  *(_QWORD *)&v12 = 37LL;
  if ( (int)sub_14074F950(0x57u, &v12, 8, (LUID)&v11, 4) < 0 )
  {
    v9 = -1;
  }
  else
  {
    v9 = v11;
    if ( byte_140D048E8 && !v11 )
      KeBugCheckEx(a2, a3, a4, BugCheckParameter3, BugCheckParameter4);
  }
  sub_1409A7248(v9, a2, a3, a4, BugCheckParameter3, BugCheckParameter4);
  DbgkWerCaptureLiveKernelDump(
    L"TTMDCallout",
    a2,
    a3,
    a4,
    BugCheckParameter3,
    BugCheckParameter4,
    0LL,
    (__int64)FsRtlSyncVolumes,
    0);
  return 0LL;
}
