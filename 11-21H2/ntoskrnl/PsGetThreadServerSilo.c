/*
 * XREFs of PsGetThreadServerSilo @ 0x140347690
 * Callers:
 *     sub_14021A3A0 @ 0x14021A3A0 (sub_14021A3A0.c)
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     RtlGetSystemGlobalData @ 0x140236E00 (RtlGetSystemGlobalData.c)
 *     RtlGetNtProductType @ 0x140245CC0 (RtlGetNtProductType.c)
 *     RtlSetSystemGlobalData @ 0x14025D830 (RtlSetSystemGlobalData.c)
 *     RtlGetCurrentServiceSessionId @ 0x14025D8B0 (RtlGetCurrentServiceSessionId.c)
 *     sub_14025DEF0 @ 0x14025DEF0 (sub_14025DEF0.c)
 *     sub_140280F60 @ 0x140280F60 (sub_140280F60.c)
 *     sub_1402A1788 @ 0x1402A1788 (sub_1402A1788.c)
 *     RtlGetActiveConsoleId @ 0x1402DEB60 (RtlGetActiveConsoleId.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     sub_1403ABA40 @ 0x1403ABA40 (sub_1403ABA40.c)
 *     sub_1403CD84C @ 0x1403CD84C (sub_1403CD84C.c)
 *     sub_1403DB94C @ 0x1403DB94C (sub_1403DB94C.c)
 *     sub_14045EDD4 @ 0x14045EDD4 (sub_14045EDD4.c)
 *     sub_14045F8C2 @ 0x14045F8C2 (sub_14045F8C2.c)
 *     sub_140557F6C @ 0x140557F6C (sub_140557F6C.c)
 *     sub_1405E4598 @ 0x1405E4598 (sub_1405E4598.c)
 *     sub_14062FB50 @ 0x14062FB50 (sub_14062FB50.c)
 *     sub_140630050 @ 0x140630050 (sub_140630050.c)
 *     sub_140630340 @ 0x140630340 (sub_140630340.c)
 *     sub_1406303E0 @ 0x1406303E0 (sub_1406303E0.c)
 *     sub_14069C820 @ 0x14069C820 (sub_14069C820.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     sub_140936BD8 @ 0x140936BD8 (sub_140936BD8.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1624) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1624));
}
