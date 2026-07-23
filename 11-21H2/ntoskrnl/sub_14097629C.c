/*
 * XREFs of sub_14097629C @ 0x14097629C
 * Callers:
 *     sub_140761714 @ 0x140761714 (sub_140761714.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026DA80 @ 0x14026DA80 (sub_14026DA80.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

__int64 __fastcall sub_14097629C(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // esi
  bool v9; // zf

  v3 = ((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0);
  v4 = sub_140313C70(a1);
  v5 = (_QWORD *)v4;
  if ( v3 )
  {
    v6 = a2 - v4;
    do
    {
      v7 = sub_14026DA80((__int64)v5 + v6);
      v8 = 0;
      if ( sub_140317A80((unsigned __int64)v5) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v8 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v9 = (v7 & 1) == 0;
            goto LABEL_9;
          }
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          v9 = (v7 & 1) == 0;
LABEL_9:
          if ( !v9 )
            v7 |= 0x8000000000000000uLL;
        }
      }
      *v5 = v7;
      if ( v8 )
        sub_1402294F0((__int64)v5, v7);
      ++v5;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}
