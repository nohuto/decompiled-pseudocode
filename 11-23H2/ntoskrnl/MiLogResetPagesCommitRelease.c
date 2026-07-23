/*
 * XREFs of MiLogResetPagesCommitRelease @ 0x1406189CC
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x140619638 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x1403C44FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void MiLogResetPagesCommitRelease()
{
  __int64 v0; // r9
  __int64 v1; // r9
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // r10
  int v7; // [rsp+20h] [rbp-59h]
  int v8; // [rsp+28h] [rbp-51h]
  int v9; // [rsp+40h] [rbp-39h] BYREF
  __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  __int64 v11; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v13[16]; // [rsp+80h] [rbp+7h] BYREF
  int *v14; // [rsp+90h] [rbp+17h]
  int v15; // [rsp+98h] [rbp+1Fh]
  int v16; // [rsp+9Ch] [rbp+23h]
  __int64 *v17; // [rsp+A0h] [rbp+27h]
  int v18; // [rsp+A8h] [rbp+2Fh]
  int v19; // [rsp+ACh] [rbp+33h]
  __int64 *v20; // [rsp+B0h] [rbp+37h]
  int v21; // [rsp+B8h] [rbp+3Fh]
  int v22; // [rsp+BCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140C698E8 && **(_DWORD **)&qword_140C698E8 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C698E8, 4LL) )
    {
      tlgCreate1Sz_char((__int64)v13, (const CHAR *)(v0 + 1448));
      v2 = *(_DWORD *)(v1 + 1088);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = &v9;
      v17 = &v10;
      v3 = *(_QWORD *)(v1 + 1864);
      v9 = v2;
      v11 = v3;
      v20 = &v11;
      v18 = 8;
      v21 = 8;
      v15 = 4;
      v10 = v4;
      tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&dword_140038374, v5, 1u, v7, v8, 6u, &v12);
    }
  }
}
