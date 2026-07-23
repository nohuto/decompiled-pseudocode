/*
 * XREFs of MiLogCreateImageFileMapFailure @ 0x140A2F7D4
 * Callers:
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x1403C44FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall MiLogCreateImageFileMapFailure(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r11
  int v5; // r9d
  __int64 v6; // r8
  __int64 v7; // r10
  int v8; // [rsp+20h] [rbp-69h]
  int v9; // [rsp+28h] [rbp-61h]
  int v10; // [rsp+40h] [rbp-49h] BYREF
  int v11; // [rsp+44h] [rbp-45h] BYREF
  __int64 v12; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp-19h] BYREF
  _DWORD *v15; // [rsp+80h] [rbp-9h]
  int v16; // [rsp+88h] [rbp-1h]
  int v17; // [rsp+8Ch] [rbp+3h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  _DWORD v19[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  int *v23; // [rsp+B0h] [rbp+27h]
  int v24; // [rsp+B8h] [rbp+2Fh]
  int v25; // [rsp+BCh] [rbp+33h]
  __int64 *v26; // [rsp+C0h] [rbp+37h]
  int v27; // [rsp+C8h] [rbp+3Fh]
  int v28; // [rsp+CCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140C698E8 && **(_DWORD **)&qword_140C698E8 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C698E8, 0x400000000000LL) )
    {
      tlgCreate1Sz_char((__int64)v14, "SectionAlignmentIssue");
      v17 = 0;
      v19[1] = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v15 = v19;
      v18 = *(_QWORD *)(v4 + 96);
      v19[0] = *(unsigned __int16 *)(v4 + 88);
      v20 = &v10;
      v23 = &v11;
      v21 = 4;
      v24 = 4;
      v26 = &v12;
      v11 = v5;
      v27 = 8;
      v16 = 2;
      v10 = a3;
      v12 = 0x1000000LL;
      tlgWriteEx_EtwWriteEx(v7, (unsigned __int8 *)&byte_140038648, v6, 1u, v8, v9, 8u, &v13);
    }
  }
}
