/*
 * XREFs of sub_1406F7C44 @ 0x1406F7C44
 * Callers:
 *     sub_140280D70 @ 0x140280D70 (sub_140280D70.c)
 *     sub_1406F7A68 @ 0x1406F7A68 (sub_1406F7A68.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1406F7C44(unsigned __int16 *a1, ULONGLONG a2, __int16 a3, int a4)
{
  const EVENT_DESCRIPTOR *v5; // rdx
  NTSTATUS result; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  ULONGLONG v8; // [rsp+50h] [rbp-29h]
  int v9; // [rsp+58h] [rbp-21h]
  int v10; // [rsp+5Ch] [rbp-1Dh]
  ULONGLONG v11; // [rsp+60h] [rbp-19h]
  int v12; // [rsp+68h] [rbp-11h]
  int v13; // [rsp+6Ch] [rbp-Dh]
  ULONGLONG v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  ULONGLONG v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  ULONGLONG v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  __int64 v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]
  __int64 *v26; // [rsp+B0h] [rbp+37h]
  int v27; // [rsp+B8h] [rbp+3Fh]
  int v28; // [rsp+BCh] [rbp+43h]

  if ( a3 == 5121 )
  {
    v5 = &stru_14000EF80;
LABEL_3:
    UserData.Reserved = 0;
    v10 = 0;
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v8 = a2 + 8;
    v12 = 4;
    v11 = a2 + 16;
    v15 = 4;
    v14 = a2 + 20;
    v17 = a2 + 24;
    v20 = a2 + 32;
    v23 = *((_QWORD *)a1 + 1);
    v24 = *a1;
    v26 = &qword_14000EF90;
    v18 = 4;
    UserData.Ptr = a2;
    UserData.Size = 8;
    v9 = 8;
    v21 = 8;
    v27 = 2;
    return EtwWriteEx(qword_140C15FF8, v5, 0LL, a4 != 0, 0LL, 0LL, 8u, &UserData);
  }
  if ( a3 == 5122 )
  {
    v5 = (const EVENT_DESCRIPTOR *)qword_14000EF70;
    goto LABEL_3;
  }
  return result;
}
