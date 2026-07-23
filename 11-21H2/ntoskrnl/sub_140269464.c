/*
 * XREFs of sub_140269464 @ 0x140269464
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     sub_140269570 @ 0x140269570 (sub_140269570.c)
 *     sub_140269760 @ 0x140269760 (sub_140269760.c)
 *     sub_14026CB78 @ 0x14026CB78 (sub_14026CB78.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char sub_140269464()
{
  __int64 v0; // rsi
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF

  v0 = 4LL;
  v9[0] = &qword_140C534C0;
  v1 = v9;
  v2 = 4LL;
  v9[1] = &unk_140C52F98;
  v9[2] = &unk_140C52FF0;
  v9[3] = &unk_140C52F40;
  do
  {
    v3 = *v1;
    if ( (*(_DWORD *)(*v1 + 24LL) & 1) != 0 )
    {
      sub_140269570(*v1, 0LL);
      if ( (unsigned int)sub_140269760(v3) )
        sub_140269570(v3, 1LL);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  LOBYTE(v4) = byte_140C5304E + 1;
  byte_140C5304E = v4;
  if ( (v4 & 0xF) == 0 )
  {
    v5 = v9;
    do
    {
      v6 = (_QWORD *)*v5;
      v7 = *(_QWORD *)(*v5 + 80LL);
      if ( v7 > 0x40000 )
      {
        v4 = v6[6] >> 2;
        if ( v7 > v4 )
          LOBYTE(v4) = sub_14026CB78(v6, v6[8], *v6 - v6[8]);
      }
      ++v5;
      --v0;
    }
    while ( v0 );
  }
  return v4;
}
