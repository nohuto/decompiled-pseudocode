/*
 * XREFs of sub_1409E6524 @ 0x1409E6524
 * Callers:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     sub_140259668 @ 0x140259668 (sub_140259668.c)
 *     sub_1406C03F0 @ 0x1406C03F0 (sub_1406C03F0.c)
 *     PsSuspendProcess @ 0x1409B2EF0 (PsSuspendProcess.c)
 * Callees:
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     sub_1402EDFB0 @ 0x1402EDFB0 (sub_1402EDFB0.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1409E6524(int a1, __int64 a2, __int64 a3, int a4)
{
  REGHANDLE v7; // rdi
  __int64 v8; // rbp
  int v9; // ebx
  int v10; // ebx
  __int64 *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  unsigned __int64 v17; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-128h] BYREF
  _QWORD v20[28]; // [rsp+50h] [rbp-118h] BYREF
  int v21; // [rsp+170h] [rbp+8h] BYREF

  if ( a1 >= 0 )
  {
    v21 = a1;
    if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 )
    {
      v7 = qword_140C15E00;
      if ( EtwProviderEnabled(qword_140C15E00, 0, 0xC00000uLL) )
      {
        v8 = *(_QWORD *)(a2 + 544);
        if ( a4 )
        {
          v9 = a4 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 != 1 )
                return;
              v11 = (__int64 *)&stru_140037D00;
            }
            else
            {
              v11 = qword_140037FA0;
            }
          }
          else
          {
            v11 = qword_140038000;
          }
        }
        else
        {
          v11 = qword_140037B70;
        }
        if ( EtwEventEnabled(v7, (PCEVENT_DESCRIPTOR)v11) )
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&v21;
          UserData.Size = 4;
          v12 = sub_1402EDEB4(v20, v8, &v17);
          v13 = sub_1402EDFB0((__int64)(&UserData + (unsigned int)(v12 + 1)), a2);
          v15 = sub_1402EDEB4(&UserData.Ptr + 2 * (unsigned int)(v13 + v14), a3, &v18);
          EtwWrite(qword_140C15E00, (PCEVENT_DESCRIPTOR)v11, 0LL, v15 + v16, &UserData);
        }
      }
    }
  }
}
