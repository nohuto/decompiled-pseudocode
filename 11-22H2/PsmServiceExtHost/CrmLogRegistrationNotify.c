/*
 * XREFs of CrmLogRegistrationNotify @ 0x180027588
 * Callers:
 *     CrmRegistrationNotify @ 0x1800274BC (CrmRegistrationNotify.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

void __fastcall CrmLogRegistrationNotify(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // r8
  int v5; // r9d
  int v6; // r10d
  __int64 v7; // r11
  const int *v8; // rdx
  int v9; // edx
  bool v10; // r8
  int v11; // r10d
  __int64 v12; // r11
  ULONG v13; // [rsp+20h] [rbp-69h]
  bool v14; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v15[3]; // [rsp+31h] [rbp-58h] BYREF
  int v16; // [rsp+34h] [rbp-55h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  __int64 v18; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-39h] BYREF
  UUID *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  __int64 *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  bool *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  bool *v29; // [rsp+A0h] [rbp+17h]
  int v30; // [rsp+A8h] [rbp+1Fh]
  int v31; // [rsp+ACh] [rbp+23h]
  int *v32; // [rsp+B0h] [rbp+27h]
  int v33; // [rsp+B8h] [rbp+2Fh]
  int v34; // [rsp+BCh] [rbp+33h]
  __int64 *v35; // [rsp+C0h] [rbp+37h]
  int v36; // [rsp+C8h] [rbp+3Fh]
  int v37; // [rsp+CCh] [rbp+43h]

  if ( a4 >= 0 )
  {
    if ( (unsigned int)dword_1800DB250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB250, 2LL) )
    {
      v22 = 0;
      v25 = 0;
      v20 = &Uuid;
      v17 = *(_QWORD *)(v12 + 16);
      v15[0] = v11 != 0;
      v24 = v9 + 6;
      v23 = &v17;
      v14 = v10;
      v26 = v15;
      v27 = v9 - 1;
      v8 = &dword_1800BEB6D;
      v30 = v27;
      v32 = &v16;
      v13 = 7;
      v29 = &v14;
      goto LABEL_8;
    }
  }
  else if ( (unsigned int)dword_1800DB250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB250, 0x400000000002LL) )
  {
    v22 = 0;
    v25 = 0;
    v20 = &Uuid;
    v18 = *(_QWORD *)(v7 + 16);
    v23 = &v18;
    v14 = v6 != 0;
    v37 = 0;
    v26 = &v14;
    v27 = 1;
    v30 = 1;
    v32 = &v16;
    v35 = &v17;
    v29 = v15;
    v8 = (const int *)&unk_1800BEC5F;
    v13 = 8;
    v24 = 8;
    v15[0] = v4;
    v17 = 0x2000000LL;
    v36 = 8;
LABEL_8:
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v16 = v5;
    v21 = 16;
    v33 = 4;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)v8, 0, 0, v13, &v19);
  }
}
