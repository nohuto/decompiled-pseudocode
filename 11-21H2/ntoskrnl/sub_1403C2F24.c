/*
 * XREFs of sub_1403C2F24 @ 0x1403C2F24
 * Callers:
 *     sub_140544EF0 @ 0x140544EF0 (sub_140544EF0.c)
 *     sub_140B0610C @ 0x140B0610C (sub_140B0610C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140647C04 @ 0x140647C04 (sub_140647C04.c)
 */

bool sub_1403C2F24()
{
  char v0; // r8
  int v2; // r9d
  __int64 *v3; // r10
  __int64 v4; // r11
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v7 = 0LL;
  if ( !byte_140D0688B )
    return 0;
  v2 = dword_140D069A0;
  if ( !dword_140D069A0 && byte_140D068E4 )
  {
    v3 = &qword_140D0C8C0;
    v4 = (unsigned int)(dword_140D069A0 + 64);
    do
    {
      v5 = *v3;
      v6 = *v3++;
      v2 += (unsigned int)((0x101010101010101LL
                          * ((((v5 - ((v6 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v5 - ((v6 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v5 - ((v6 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v5 - ((v6 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v4;
    }
    while ( v4 );
  }
  if ( (dword_140D068B8 & 1) != 0 && (unsigned int)(v2 - 1) <= 0x3F && !KeDynamicPartitioningSupported )
    return 1;
  if ( (dword_140D0688C & 0x80u) == 0 )
  {
    sub_140647C04(&v7);
    v0 = 1;
    if ( (_DWORD)v7 == -1 )
      return (dword_140D0689C & 0x4004) != 0;
  }
  return v0;
}
