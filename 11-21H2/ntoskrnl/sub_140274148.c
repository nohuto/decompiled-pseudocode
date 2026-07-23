/*
 * XREFs of sub_140274148 @ 0x140274148
 * Callers:
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402746C0 @ 0x1402746C0 (sub_1402746C0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

_BOOL8 __fastcall sub_140274148(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  int v7; // ebp
  unsigned int v8; // ecx
  int v10; // edi
  bool v11; // zf

  v3 = *a1;
  v7 = a3 & 2;
  if ( (a3 & 2) == 0 && (unsigned int)sub_140317A80(a1) && (unsigned int)sub_140229550() )
    goto LABEL_15;
  v8 = ((unsigned int)dword_140D06880 >> 27) & 3;
  if ( v8 > 1 )
  {
    if ( (dword_140D06880 & 0x4000000) != 0 )
      _mm_lfence();
  }
  else
  {
    if ( !v8 )
      goto LABEL_15;
    if ( (unsigned __int64)a1 >= 0xFFFFF6FB40000000uLL
      && (unsigned __int64)a1 <= 0xFFFFF6FB7FFFFFFFuLL
      && (v3 & 0x80u) == 0LL )
    {
      LOBYTE(v3) = 32;
    }
  }
  if ( (v3 & 0x20) != 0 )
  {
LABEL_15:
    if ( (a3 & 4) != 0 )
      return 1LL;
    if ( v7 )
    {
      *a1 = a2;
      return 1LL;
    }
    v10 = 0;
    if ( (unsigned int)sub_140317A80(a1) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v10 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v11 = (a2 & 1) == 0;
          goto LABEL_24;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v11 = (a2 & 1) == 0;
LABEL_24:
        if ( !v11 )
          a2 |= 0x8000000000000000uLL;
      }
    }
    *a1 = a2;
    if ( v10 )
      sub_1402294F0((__int64)a1, a2);
    return 1LL;
  }
  return (sub_1402746C0(a1, a2) & 0x20) != 0;
}
