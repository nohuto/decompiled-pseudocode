/*
 * XREFs of sub_140946360 @ 0x140946360
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140946360(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  if ( !*(_QWORD *)(a1 + 80) )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = a1 + 32;
    v1 = *(_QWORD *)(a1 + 16);
    if ( v1 )
      v2 = *(_QWORD *)(v1 + 32);
    else
      v2 = 0LL;
    v4 = v2;
    v7 = 8LL;
    v6 = &v4;
    EtwWrite(qword_140D00AB0, &stru_14003B690, 0LL, 2u, &UserData);
  }
  return 0LL;
}
