/*
 * XREFs of sub_1407DD250 @ 0x1407DD250
 * Callers:
 *     sub_1407DCCD8 @ 0x1407DCCD8 (sub_1407DCCD8.c)
 *     sub_1407DCF7C @ 0x1407DCF7C (sub_1407DCF7C.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1407DD250(__int64 a1, int a2, __int16 a3, char a4, char a5, char a6, __int64 a7)
{
  __int64 v7; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // [rsp+30h] [rbp-91h] BYREF
  char v14; // [rsp+31h] [rbp-90h] BYREF
  __int16 v15; // [rsp+34h] [rbp-8Dh] BYREF
  __int16 v16; // [rsp+38h] [rbp-89h] BYREF
  int v17; // [rsp+3Ch] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-81h] BYREF
  __int64 v19; // [rsp+50h] [rbp-71h]
  int v20; // [rsp+58h] [rbp-69h]
  int v21; // [rsp+5Ch] [rbp-65h]
  __int64 v22; // [rsp+60h] [rbp-61h]
  __int64 v23; // [rsp+68h] [rbp-59h]
  int *v24; // [rsp+70h] [rbp-51h]
  __int64 v25; // [rsp+78h] [rbp-49h]
  __int16 *v26; // [rsp+80h] [rbp-41h]
  __int64 v27; // [rsp+88h] [rbp-39h]
  char *v28; // [rsp+90h] [rbp-31h]
  __int64 v29; // [rsp+98h] [rbp-29h]
  char *v30; // [rsp+A0h] [rbp-21h]
  __int64 v31; // [rsp+A8h] [rbp-19h]
  char *v32; // [rsp+B0h] [rbp-11h]
  __int64 v33; // [rsp+B8h] [rbp-9h]
  int *v34; // [rsp+C0h] [rbp-1h]
  __int64 v35; // [rsp+C8h] [rbp+7h]
  int v36; // [rsp+118h] [rbp+57h] BYREF

  v36 = a2;
  v7 = a7;
  if ( qword_140C54788 && EtwEventEnabled(qword_140C54788, &stru_140010F28) )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(a1 + 2 * v11) );
    v15 = v11;
    UserData.Ptr = (ULONGLONG)&v15;
    v20 = 2 * (unsigned __int16)v11;
    v22 = a1 + 60;
    v24 = &v36;
    v26 = &v16;
    v28 = &v13;
    v14 = a5;
    v30 = &v14;
    v32 = &a6;
    *(_QWORD *)&UserData.Size = 2LL;
    v19 = a1;
    v21 = 0;
    v23 = 4LL;
    v25 = 4LL;
    v16 = a3;
    v27 = 2LL;
    v13 = a4;
    v29 = 1LL;
    v31 = 1LL;
    v33 = 4LL;
    if ( v7 >= 0 )
      v12 = v7 / 0x989680uLL;
    else
      LODWORD(v12) = -(v7 != -1) - 1;
    v34 = &v17;
    v17 = v12;
    v35 = 4LL;
    EtwWrite(qword_140C54788, &stru_140010F28, 0LL, 9u, &UserData);
  }
}
