/*
 * XREFs of sub_1403BCDA0 @ 0x1403BCDA0
 * Callers:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 * Callees:
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     sub_1403BE694 @ 0x1403BE694 (sub_1403BE694.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BCDA0()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v13[18]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+E0h] [rbp+67h] BYREF

  *(_WORD *)((char *)&v14 + 1) = 0;
  v12 = 0LL;
  BYTE3(v14) = 0;
  if ( sub_1403BE664(1128878145LL) )
  {
    v1 = 0LL;
    if ( (int)sub_1403B38C8(v0, 0LL, 6, 16LL, &v12) >= 0 )
      v1 = sub_14042A5E0(v3, v2);
    memset(v13, 0, sizeof(v13));
    v14 = 0LL;
    v4 = 32LL;
    v13[11] = &v14;
    v13[0] = 0x9000000001LL;
    LODWORD(v13[17]) = 7;
    v13[12] = 0x2000000008LL;
    HIDWORD(v13[14]) = 2147;
    if ( (unsigned __int8)sub_1403BE694() )
    {
      v5 = 10;
    }
    else
    {
      HIDWORD(v13[14]) = 26723;
      v5 = 11;
    }
    HIDWORD(v14) = v5;
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 5;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 == 1 )
                v4 = 128LL;
              else
                v4 = 1LL;
            }
            else
            {
              v4 = 64LL;
            }
          }
        }
        else
        {
          v4 = 16LL;
        }
      }
      else
      {
        v4 = 8LL;
      }
    }
    else
    {
      v4 = 4LL;
    }
    v13[16] = 0x100000001LL;
    LOBYTE(v14) = -1;
    v13[13] = v1 / v4;
    v13[1] = sub_140252B30;
    v13[2] = sub_1403DA6E0;
    v13[3] = _misaligned_access;
    v13[4] = sub_140238EF0;
    v13[9] = sub_140372C70;
    v13[5] = sub_140252B00;
    sub_1403BE0BC(v13, 0LL);
  }
  return 0LL;
}
