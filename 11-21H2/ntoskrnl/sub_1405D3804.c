/*
 * XREFs of sub_1405D3804 @ 0x1405D3804
 * Callers:
 *     sub_1405D07C8 @ 0x1405D07C8 (sub_1405D07C8.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405D3804(__int64 a1, unsigned __int16 *a2, char a3, int a4, char a5, char a6, char a7, char a8)
{
  _UNKNOWN **v8; // rax
  void *v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  __int16 v17; // [rsp+48h] [rbp-99h] BYREF
  __int16 v18; // [rsp+4Ch] [rbp-95h] BYREF
  __int16 v19; // [rsp+50h] [rbp-91h] BYREF
  __int16 v20; // [rsp+54h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-89h] BYREF
  __int64 v22; // [rsp+68h] [rbp-79h]
  int v23; // [rsp+70h] [rbp-71h]
  int v24; // [rsp+74h] [rbp-6Dh]
  __int16 *v25; // [rsp+78h] [rbp-69h]
  __int64 v26; // [rsp+80h] [rbp-61h]
  int *v27; // [rsp+88h] [rbp-59h]
  __int64 v28; // [rsp+90h] [rbp-51h]
  __int16 *v29; // [rsp+98h] [rbp-49h]
  __int64 v30; // [rsp+A0h] [rbp-41h]
  char *v31; // [rsp+A8h] [rbp-39h]
  __int64 v32; // [rsp+B0h] [rbp-31h]
  char *v33; // [rsp+B8h] [rbp-29h]
  __int64 v34; // [rsp+C0h] [rbp-21h]
  char *v35; // [rsp+C8h] [rbp-19h]
  __int64 v36; // [rsp+D0h] [rbp-11h]
  __int16 *v37; // [rsp+D8h] [rbp-9h]
  __int64 v38; // [rsp+E0h] [rbp-1h]
  __int64 v39; // [rsp+E8h] [rbp+7h]
  int v40; // [rsp+F0h] [rbp+Fh]
  int v41; // [rsp+F4h] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+3Fh] BYREF
  int v43; // [rsp+140h] [rbp+5Fh] BYREF

  v8 = &retaddr;
  v43 = a4;
  v18 = 0;
  v20 = 0;
  v17 = 0;
  v19 = 0;
  if ( byte_140C5AE14 )
  {
    LOBYTE(v8) = EtwEventEnabled(RegHandle, &stru_140038D10);
    if ( (_BYTE)v8 )
    {
      v8 = (_UNKNOWN **)sub_14036B86C(a1, 0x67446F50u);
      v12 = v8;
      if ( v8 )
      {
        v13 = *((_QWORD *)v8[39] + 5);
        if ( v13 )
        {
          v14 = *(_WORD *)(v13 + 128) >> 1;
          UserData.Ptr = (ULONGLONG)&v17;
          v15 = *a2;
          v17 = v14;
          *(_QWORD *)&UserData.Size = 2LL;
          v22 = *(_QWORD *)(v13 + 136);
          v23 = 2 * v14;
          v18 = a3 != 0;
          v25 = &v18;
          v27 = &v43;
          v40 = v15;
          v19 = a5 != 0;
          v24 = 0;
          v29 = &v19;
          v26 = 2LL;
          v31 = &a6;
          v33 = &a7;
          v35 = &a8;
          v20 = (unsigned __int16)v15 >> 1;
          v37 = &v20;
          v39 = *((_QWORD *)a2 + 1);
          v28 = 4LL;
          v30 = 2LL;
          v32 = 4LL;
          v34 = 4LL;
          v36 = 4LL;
          v38 = 2LL;
          v41 = 0;
          EtwWriteEx(RegHandle, &stru_140038D10, 0LL, 0, 0LL, 0LL, 0xAu, &UserData);
        }
        LOBYTE(v8) = ObfDereferenceObjectWithTag(v12, 0x67446F50u);
      }
    }
  }
  return (char)v8;
}
