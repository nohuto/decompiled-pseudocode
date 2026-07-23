/*
 * XREFs of sub_140A4FEE8 @ 0x140A4FEE8
 * Callers:
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14025E7E0 @ 0x14025E7E0 (sub_14025E7E0.c)
 *     sub_14025E7F4 @ 0x14025E7F4 (sub_14025E7F4.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

unsigned __int64 sub_140A4FEE8()
{
  __int64 *i; // rdi
  __int64 v1; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // esi
  bool v6; // zf

  for ( i = (__int64 *)0xFFFFF6FB7DBED000LL; (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL; ++i )
  {
    v1 = sub_140317A10((unsigned __int64)i);
    if ( (v1 & 1) != 0 )
    {
      v3 = sub_14025E7F4(v1);
    }
    else
    {
      if ( (v1 & 0x400) == 0 )
        goto LABEL_4;
      v3 = sub_14025E7E0(v1);
    }
    v4 = v3;
    v5 = 0;
    if ( sub_140317A80((unsigned __int64)i) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v5 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v6 = (v4 & 1) == 0;
LABEL_11:
          if ( !v6 )
            v4 |= 0x8000000000000000uLL;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v6 = (v4 & 1) == 0;
        goto LABEL_11;
      }
    }
    *i = v4;
    if ( v5 )
      sub_1402294F0((__int64)i, v4);
LABEL_4:
    result = 0xFFFFF6FB7DBED7F8uLL;
  }
  return result;
}
