/*
 * XREFs of sub_140B2A8FC @ 0x140B2A8FC
 * Callers:
 *     sub_140A5B640 @ 0x140A5B640 (sub_140A5B640.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140B2A8FC(__int64 a1)
{
  int v2; // edi
  __int128 v4; // xmm0
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax

  off_140C01E90[0] = (__int64 (__fastcall *)())sub_1405246D0;
  off_140C01E98[0] = sub_1405247B0;
  off_140C01F90[0] = (__int64 (__fastcall *)())sub_1403DE850;
  off_140C01FD0[0] = (__int64 (__fastcall *)())sub_140508990;
  if ( (*(_DWORD *)(a1 + 264) & 1) == 0 )
  {
    byte_140C4BFC8 = 0;
    return 0;
  }
  v4 = *(_OWORD *)(a1 + 264);
  byte_140C4BFC8 = 1;
  xmmword_140C4BF80 = v4;
  xmmword_140C4BF90 = *(_OWORD *)(a1 + 280);
  xmmword_140C4BFA0 = *(_OWORD *)(a1 + 296);
  xmmword_140C4BFB0 = *(_OWORD *)(a1 + 312);
  dword_140C4C188 = 0;
  dword_140C4C19C = 0;
  dword_140C4C1A0 = 0;
  dword_140C4C18C = 0;
  v5 = *(_DWORD *)(a1 + 292);
  v2 = *(_DWORD *)(a1 + 288);
  dword_140C4BFC4 = v2;
  dword_140C4BFC0 = v5;
  if ( v5 || !*(_QWORD *)(a1 + 280) )
  {
    v2 = -1073741823;
LABEL_10:
    KeBugCheckEx(0x5Cu, 0x5000uLL, v2, 0LL, 0LL);
  }
  if ( v2 < 0 )
    goto LABEL_10;
  v6 = *(__int64 **)(a1 + 280);
  qword_140E01870[0] = *v6;
  qword_140E01878 = v6[1];
  qword_140E01880 = v6[10];
  qword_140E01888 = v6[6];
  qword_140E01890 = v6[7];
  qword_140E01898 = v6[8];
  qword_140E018A0 = v6[11];
  qword_140E018A8 = v6[12];
  v7 = v6[13];
  stru_140D01748.State = 0;
  qword_140E018B0 = v7;
  KeRegisterBugCheckReasonCallback(
    &stru_140D01748,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)sub_1405104F0,
    KbCallbackAddPages,
    (PUCHAR)"HalEfiRuntime");
  if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    off_140E00010 = (__int64 *)off_140E01A80;
  return (unsigned int)v2;
}
