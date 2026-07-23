/*
 * XREFs of sub_140995F04 @ 0x140995F04
 * Callers:
 *     sub_1407ED710 @ 0x1407ED710 (sub_1407ED710.c)
 *     sub_140811D40 @ 0x140811D40 (sub_140811D40.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_140828EBC @ 0x140828EBC (sub_140828EBC.c)
 *     sub_140993DA0 @ 0x140993DA0 (sub_140993DA0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void sub_140995F04()
{
  int v0; // ecx
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bp
  bool v4; // di
  bool v5; // si
  char v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  WNF_CHANGE_STAMP MatchingChangeStamp; // [rsp+28h] [rbp-60h]
  BOOL Buffer; // [rsp+40h] [rbp-48h] BYREF
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF
  BOOL v15; // [rsp+58h] [rbp-30h]

  Buffer = 0;
  v14 = 0LL;
  v15 = 0;
  sub_1402D66A8((ULONG_PTR)&qword_140C20B70);
  sub_140A48330(v0);
  v3 = byte_140C4EF1C;
  v4 = byte_140C0C644 == 0;
  v5 = dword_140C232CC == 1;
  v6 = dword_140C548DC == 0;
  if ( byte_140D048DC
    || !byte_140D048AC && byte_140C0C644
    || dword_140C232CC != 1
    || byte_140C4EF1C
    || (v7 = 1, dword_140C548DC) )
  {
    v7 = 0;
  }
  if ( !byte_140D048AD && v7 == 1 )
    v7 = 2;
  sub_140A47CF8(v2, v1);
  if ( dword_140D048A8 != v7 )
  {
    LOBYTE(v11) = v3;
    LOBYTE(v10) = v5;
    LOBYTE(v8) = v4;
    dword_140D048A8 = v7;
    sub_140993DA0(v9, v8, v10, v11, v6, MatchingChangeStamp, v7);
    ZwUpdateWnfStateData(&stru_140037708, &dword_140D048A8, 4u, 0LL, 0LL, 0, 0);
    if ( byte_140D048AD )
    {
      if ( (unsigned int)dword_140D048A8 <= 1 )
        _InterlockedIncrement(&dword_140CE205C);
      Buffer = dword_140D048A8 == 1;
      ZwUpdateWnfStateData(&stru_1400377E0, &Buffer, 4u, 0LL, 0LL, 0, 0);
      v15 = Buffer;
      v14 = xmmword_14003C168;
      sub_140828EBC(0, 20, (__int64)&v14);
    }
  }
  sub_1402935D0((ULONG_PTR)&qword_140C20B70);
}
