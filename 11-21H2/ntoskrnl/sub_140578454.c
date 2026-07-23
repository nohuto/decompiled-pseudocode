/*
 * XREFs of sub_140578454 @ 0x140578454
 * Callers:
 *     EnableCallback @ 0x1408653D0 (EnableCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     sub_1403025F0 @ 0x1403025F0 (sub_1403025F0.c)
 *     sub_1403AFE08 @ 0x1403AFE08 (sub_1403AFE08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140578454(char a1)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 *v4; // rsi
  ULONG_PTR v5; // rax
  ULONG_PTR *i; // rbx
  ULONG_PTR *j; // rdi
  int v9; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int16 *v10[2]; // [rsp+50h] [rbp-61h] BYREF
  __int16 v11; // [rsp+60h] [rbp-51h]
  int v12; // [rsp+62h] [rbp-4Fh]
  __int16 v13; // [rsp+66h] [rbp-4Bh]
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-49h] BYREF
  __int64 v15; // [rsp+78h] [rbp-39h]
  __int64 v16; // [rsp+80h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  int *v18; // [rsp+98h] [rbp-19h]
  __int64 v19; // [rsp+A0h] [rbp-11h]
  int *v20; // [rsp+A8h] [rbp-9h]
  __int64 v21; // [rsp+B0h] [rbp-1h]
  int *v22; // [rsp+B8h] [rbp+7h]
  __int64 v23; // [rsp+C0h] [rbp+Fh]
  __int64 *v24; // [rsp+C8h] [rbp+17h]
  int v25; // [rsp+D0h] [rbp+1Fh]
  int v26; // [rsp+D4h] [rbp+23h]

  v2 = &stru_140010E18;
  if ( a1 )
    v2 = &stru_140037280;
  if ( sub_1403025F0((__int64)v2) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&dword_140C2AC08;
    v19 = 4LL;
    v18 = &dword_140C2AD60;
    v9 = KeCountSetBitsAffinityEx(&dword_140C2AB00);
    v24 = qword_140C2AB08;
    v20 = &v9;
    v25 = 8 * (unsigned __int16)dword_140C2AB00;
    v21 = 4LL;
    v22 = &dword_140C2AB00;
    v23 = 2LL;
    v26 = 0;
    EtwWriteEx(qword_140D00B48, v2, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  v12 = 0;
  v13 = 0;
  v3 = &stru_140010E08;
  v9 = 0;
  if ( a1 )
    v3 = &stru_140037270;
  if ( sub_1403025F0((__int64)v3) )
  {
    v10[1] = (unsigned __int16 *)qword_140D06E48[0];
    v10[0] = (unsigned __int16 *)dword_140D06E40;
    v11 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v10) )
    {
      *(_QWORD *)&v14.Size = 4LL;
      v14.Ptr = (ULONGLONG)&v9;
      v16 = 4LL;
      v15 = qword_140D088C0[v9] + 11672;
      EtwWriteEx(qword_140D00B48, v3, 0LL, 0, 0LL, 0LL, 2u, &v14);
    }
  }
  v4 = qword_140010DF8;
  if ( a1 )
    v4 = qword_140014938;
  LOBYTE(v5) = sub_1403025F0((__int64)v4);
  if ( (_BYTE)v5 )
  {
    for ( i = (ULONG_PTR *)qword_140C2AD50; i != &qword_140C2AD50; i = (ULONG_PTR *)*i )
    {
      if ( !a1 )
      {
        v5 = i[20];
        if ( i[22] == v5 )
          continue;
      }
      for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
        LOBYTE(v5) = sub_1403AFE08((__int64)j, (__int64)v4);
    }
  }
  return v5;
}
