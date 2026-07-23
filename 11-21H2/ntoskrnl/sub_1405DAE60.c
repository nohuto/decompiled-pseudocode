/*
 * XREFs of sub_1405DAE60 @ 0x1405DAE60
 * Callers:
 *     sub_1405D7BF0 @ 0x1405D7BF0 (sub_1405D7BF0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_1405DAE60(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  unsigned __int64 v3; // rbx
  unsigned int v7; // r8d
  char v8; // al
  _QWORD *v9; // rcx
  __int64 v10; // r9
  char v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+41h] [rbp-BFh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  char *v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  _QWORD *v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+98h] [rbp-68h]
  int v23; // [rsp+9Ch] [rbp-64h]
  va_list v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  va_list v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  __int64 v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  va_list v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v36; // [rsp+158h] [rbp+58h] BYREF
  va_list va; // [rsp+158h] [rbp+58h]
  __int64 v38; // [rsp+160h] [rbp+60h] BYREF
  va_list va1; // [rsp+160h] [rbp+60h]
  va_list va2; // [rsp+168h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v36 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v38 = va_arg(va2, _QWORD);
  v3 = v36;
  if ( byte_140C5AE30 && EtwEventEnabled(qword_140C1F580, &stru_140038B68) )
  {
    v7 = *(unsigned __int8 *)(a1 + 6);
    v8 = *(_BYTE *)(a1 + 148);
    v11 = *(_BYTE *)(a1 + 6);
    v12 = v8;
    if ( v3 > 1 && (_BYTE)v7 )
    {
      v9 = a3;
      v10 = v7;
      do
      {
        *v9++ /= v3;
        --v10;
      }
      while ( v10 );
    }
    UserData.Ptr = a1 + 4;
    *(_QWORD *)&UserData.Size = 2LL;
    v14 = a1 + 8;
    v15 = 8LL;
    v16 = &v11;
    v19 = 4 * v7;
    v22 = 8 * v7;
    v17 = 1LL;
    va_copy(v24, va);
    v26 = a1 + 147;
    v28 = &v12;
    va_copy(v30, va1);
    v32 = a1 + 139;
    va_copy(v34, va2);
    v18 = a2;
    v20 = 0;
    v21 = a3;
    v23 = 0;
    v25 = 8LL;
    v27 = 1LL;
    v29 = 1LL;
    v31 = 1LL;
    v33 = 1LL;
    v35 = 4LL;
    EtwWriteEx(qword_140C1F580, &stru_140038B68, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
  }
}
