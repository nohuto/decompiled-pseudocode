/*
 * XREFs of sub_1403BCBD0 @ 0x1403BCBD0
 * Callers:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 * Callees:
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BE4F0 @ 0x1403BE4F0 (sub_1403BE4F0.c)
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BCBD0()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  unsigned int *v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // [rsp+28h] [rbp-69h] BYREF
  __int64 v11; // [rsp+38h] [rbp-59h]
  _QWORD v12[18]; // [rsp+48h] [rbp-49h] BYREF

  memset(v12, 0, sizeof(v12));
  v11 = 0LL;
  v10 = 0LL;
  v0 = sub_1403BE664(1380799565LL);
  v1 = v0;
  if ( v0 )
  {
    v3 = *(unsigned int *)(v0 + 4);
    if ( (unsigned int)v3 >= 0x38 )
    {
      v4 = 0;
      v5 = (v3 - 36) / 0x14uLL;
      if ( (_DWORD)v5 )
      {
        v6 = (unsigned int *)(v1 + 48);
        do
        {
          if ( !*((_BYTE *)v6 - 12) && *((_BYTE *)v6 - 11) == 32 && !*((_BYTE *)v6 - 10) && *v6 && *((_QWORD *)v6 - 1) )
          {
            memset(v12, 0, sizeof(v12));
            v12[0] = 0x9000000001LL;
            v11 = 0LL;
            v10 = 0LL;
            v7 = *v6;
            v12[12] = 0x2000000018LL;
            v8 = ((v7 >> 1) + 1000000000000000LL) / v7;
            v9 = *((_QWORD *)v6 - 1);
            v12[13] = v8;
            v12[11] = &v10;
            HIDWORD(v12[15]) = v6[1];
            v12[1] = sub_140522BA0;
            v12[2] = sub_140522CB0;
            v12[3] = sub_140522A70;
            v12[4] = sub_140522AA0;
            v12[5] = sub_140522CE0;
            v12[16] = 0x100000001LL;
            LODWORD(v12[17]) = 6;
            v12[14] = 0x26200000001LL;
            if ( (int)sub_1403BE4F0(v9, 20LL) < 0 )
              return 0LL;
            HIDWORD(v11) = v4;
            *(_QWORD *)&v10 = *((_QWORD *)v6 - 1);
            sub_1403BE0BC(v12, 0LL);
          }
          ++v4;
          v6 += 5;
        }
        while ( v4 < (unsigned int)v5 );
      }
    }
  }
  return 0LL;
}
