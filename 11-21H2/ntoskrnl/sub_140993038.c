/*
 * XREFs of sub_140993038 @ 0x140993038
 * Callers:
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140993038()
{
  char *v0; // rbx
  __int64 v1; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  char *v3; // [rsp+40h] [rbp-38h]
  int v4; // [rsp+48h] [rbp-30h]
  int v5; // [rsp+4Ch] [rbp-2Ch]
  char *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  if ( byte_140C5AE14 && EtwEventEnabled(RegHandle, &stru_140037C18) )
  {
    v0 = (char *)&unk_140D3C050;
    v1 = 52LL;
    do
    {
      UserData.Reserved = 0;
      v5 = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)(v0 - 32);
      v3 = v0 - 16;
      UserData.Size = 4;
      v4 = 4;
      v6 = v0;
      v7 = 8;
      EtwWrite(RegHandle, &stru_140037C18, 0LL, 3u, &UserData);
      v0 += 48;
      --v1;
    }
    while ( v1 );
  }
}
