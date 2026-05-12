/*
 * XREFs of sub_1C0020598 @ 0x1C0020598
 * Callers:
 *     sub_1C00A353C @ 0x1C00A353C (sub_1C00A353C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C002069C @ 0x1C002069C (sub_1C002069C.c)
 *     sub_1C00206E4 @ 0x1C00206E4 (sub_1C00206E4.c)
 *     sub_1C00207BC @ 0x1C00207BC (sub_1C00207BC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00A25D0 @ 0x1C00A25D0 (sub_1C00A25D0.c)
 *     sub_1C00A3774 @ 0x1C00A3774 (sub_1C00A3774.c)
 */

__int64 __fastcall sub_1C0020598(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  const char *v8; // r9
  char v9; // cl
  const wchar_t *v10; // r8
  char v11; // al
  __int128 v12; // xmm0
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+38h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  char v16; // [rsp+50h] [rbp-28h]

  v4 = 0;
  v5 = sub_1C0007CF4(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( !v5 )
  {
    v4 = -1073741801;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x20) != 0 )
  {
    v8 = "ZNSDisk";
    v9 = *(_BYTE *)(a1 + 168);
    v10 = L"NVME\\%hs&Prod_%hs";
    v11 = *(_BYTE *)(a1 + 185);
    v13 = *(_QWORD *)(a1 + 160);
    v12 = *(_OWORD *)(a1 + 169);
    v14 = v9;
    v16 = v11;
    v15 = v12;
LABEL_9:
    sub_1C00207BC(v5, 64LL, v10, v8, &v15);
    goto LABEL_5;
  }
  sub_1C002069C(a1 + 104, &v13);
  sub_1C00206E4(a1 + 104, &v15);
  if ( (*(_DWORD *)(a1 + 1872) & 1) != 0 )
  {
    v8 = (const char *)&v13;
    v10 = L"SCSI\\VMLUN&Ven_%hs&Prod_%hs";
    goto LABEL_9;
  }
  v6 = (_QWORD *)sub_1C00A25D0(**(_BYTE **)(a1 + 104) & 0x1F);
  sub_1C00207BC(v5, 64LL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *v6, &v13, &v15);
LABEL_5:
  sub_1C00A3774(v5, 0LL, 64LL);
LABEL_6:
  *a2 = v5;
  return v4;
}
