/*
 * XREFs of sub_140282764 @ 0x140282764
 * Callers:
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 * Callees:
 *     sub_140282874 @ 0x140282874 (sub_140282874.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 */

_QWORD *__fastcall sub_140282764(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *result; // rax
  __int64 v11; // rcx

  v2 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( !(unsigned int)sub_140285380(v2, 1056LL)
    || *(_QWORD *)(v2 + 16960) < v3
    || (v4 = 4096LL, (unsigned __int64)(qword_140C4F040[0] - qword_140C4F048) < 0x800) )
  {
    v4 = 512LL;
  }
  v6 = sub_140282AD0(a1);
  v7 = *(_QWORD **)(v6 + 40);
  if ( v7 && (v4 == 512 || *v7 && *(_QWORD *)*v7) )
  {
    sub_140334400(v7, v5);
    v7 = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
  }
  do
  {
    v8 = sub_1402828F0(64LL, v4, 1665232205LL);
    if ( v8 )
    {
      *(_QWORD *)(v6 + 40) = v8;
      sub_140282874(a1, v8, v4);
      result = v9;
      *v9 = v7;
      return result;
    }
    v11 = *(_QWORD *)(v6 + 40);
    if ( v11 )
    {
      sub_140334400(v11, 0LL);
      v7 = 0LL;
      *(_QWORD *)(v6 + 40) = 0LL;
    }
    v4 >>= 1;
  }
  while ( v4 >= 0x200 );
  return 0LL;
}
