/*
 * XREFs of sub_1409E668C @ 0x1409E668C
 * Callers:
 *     sub_1402EEA18 @ 0x1402EEA18 (sub_1402EEA18.c)
 *     sub_1406E21F0 @ 0x1406E21F0 (sub_1406E21F0.c)
 * Callees:
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     sub_1402EDFB0 @ 0x1402EDFB0 (sub_1402EDFB0.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409E668C(int a1, __int64 a2, __int64 a3, char a4)
{
  REGHANDLE v7; // rdi
  __int64 v8; // r12
  const EVENT_DESCRIPTOR *v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // r9d
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  unsigned __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[32]; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+1A0h] [rbp+A0h] BYREF

  if ( a1 >= 0 )
  {
    v21 = a1;
    if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 )
    {
      v7 = qword_140C15E00;
      if ( EtwProviderEnabled(qword_140C15E00, 0, 0x300000uLL) )
      {
        v8 = *(_QWORD *)(a2 + 544);
        v9 = (const EVENT_DESCRIPTOR *)qword_140037AB8;
        if ( !a4 )
          v9 = &stru_140038288;
        if ( EtwEventEnabled(v7, v9) )
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&v21;
          UserData.Size = 4;
          v10 = sub_1402EDEB4(v20, v8, &v17);
          v11 = sub_1402EDFB0((__int64)(&UserData + (unsigned int)(v10 + 1)), a2);
          v13 = sub_1402EDEB4(&UserData.Ptr + 2 * (unsigned int)(v11 + v12), *(_QWORD *)(a3 + 544), &v18);
          v15 = sub_1402EDFB0((__int64)(&UserData + (unsigned int)(v13 + v14)), a3);
          EtwWrite(qword_140C15E00, v9, 0LL, v15 + v16, &UserData);
        }
      }
    }
  }
}
