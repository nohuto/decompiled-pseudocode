/*
 * XREFs of sub_14055B654 @ 0x14055B654
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_14093A908 @ 0x14093A908 (sub_14093A908.c)
 *     sub_14093A954 @ 0x14093A954 (sub_14093A954.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 */

char sub_14055B654(__int64 a1, __int64 a2, int a3, ...)
{
  char result; // al
  int v4; // edx
  int *v5; // rcx
  int v6; // r8d
  const GUID *ActivityId; // r9
  const EVENT_DESCRIPTOR *v8; // rdx
  int v9; // [rsp+40h] [rbp-69h] BYREF
  int v10; // [rsp+44h] [rbp-65h] BYREF
  __int64 v11; // [rsp+48h] [rbp-61h] BYREF
  __int64 v12; // [rsp+50h] [rbp-59h] BYREF
  __int64 v13; // [rsp+58h] [rbp-51h] BYREF
  __int64 v14; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  int *v16; // [rsp+80h] [rbp-29h]
  __int64 v17; // [rsp+88h] [rbp-21h]
  __int64 *v18; // [rsp+90h] [rbp-19h]
  __int64 v19; // [rsp+98h] [rbp-11h]
  __int64 *v20; // [rsp+A0h] [rbp-9h]
  __int64 v21; // [rsp+A8h] [rbp-1h]
  __int64 *v22; // [rsp+B0h] [rbp+7h]
  __int64 v23; // [rsp+B8h] [rbp+Fh]
  __int64 *v24; // [rsp+C0h] [rbp+17h]
  __int64 v25; // [rsp+C8h] [rbp+1Fh]
  int *v26; // [rsp+D0h] [rbp+27h]
  __int64 v27; // [rsp+D8h] [rbp+2Fh]
  va_list v28; // [rsp+E0h] [rbp+37h]
  __int64 v29; // [rsp+E8h] [rbp+3Fh]
  int v30; // [rsp+120h] [rbp+77h] BYREF
  __int64 v31; // [rsp+128h] [rbp+7Fh] BYREF
  va_list va; // [rsp+128h] [rbp+7Fh]
  va_list va1; // [rsp+130h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  v30 = a3;
  v10 = 0;
  v9 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  result = sub_14055A67C();
  if ( result )
  {
    if ( v4 )
    {
      v8 = (const EVENT_DESCRIPTOR *)nullsub_4;
      if ( v6 != 1 )
        v8 = &stru_140039980;
    }
    else
    {
      v8 = (const EVENT_DESCRIPTOR *)qword_140037AC8;
    }
    if ( v5 )
    {
      v9 = *v5;
      v11 = *((_QWORD *)v5 + 1);
      v12 = *((_QWORD *)v5 + 2);
      v13 = *((_QWORD *)v5 + 3);
      v14 = *((_QWORD *)v5 + 4);
      v10 = ((unsigned int)v5[10] >> 4) & 1;
    }
    *(_QWORD *)&UserData.Size = 4LL;
    v19 = 8LL;
    UserData.Ptr = (ULONGLONG)&v30;
    v21 = 8LL;
    v16 = &v9;
    v18 = &v11;
    v20 = &v12;
    v22 = &v13;
    v24 = &v14;
    v26 = &v10;
    va_copy(v28, va);
    v23 = 8LL;
    v25 = 8LL;
    v29 = 8LL;
    v17 = 4LL;
    v27 = 4LL;
    return EtwWriteEx(qword_140D00A98, v8, 0LL, (ULONG)ActivityId, ActivityId, ActivityId, 8u, &UserData);
  }
  return result;
}
