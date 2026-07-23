/*
 * XREFs of sub_14099B848 @ 0x14099B848
 * Callers:
 *     sub_14099D500 @ 0x14099D500 (sub_14099D500.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14099B848(__int64 a1, __int64 a2)
{
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  if ( byte_140C5AE30 )
  {
    v4 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_140038EA0) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = a1 + 8;
      UserData.Size = 1;
      v6 = a2 + 8;
      v7 = 1;
      EtwWrite(v4, &stru_140038EA0, 0LL, 2u, &UserData);
    }
  }
}
