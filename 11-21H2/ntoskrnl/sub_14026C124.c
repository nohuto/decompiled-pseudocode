/*
 * XREFs of sub_14026C124 @ 0x14026C124
 * Callers:
 *     sub_14026C038 @ 0x14026C038 (sub_14026C038.c)
 *     sub_1405BB84C @ 0x1405BB84C (sub_1405BB84C.c)
 *     sub_1405BBD5C @ 0x1405BBD5C (sub_1405BBD5C.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

__int64 __fastcall sub_14026C124(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rsi
  __int64 result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // r15d
  bool v14; // zf
  BOOL v15; // r15d

  v7 = a1;
  if ( a1 )
  {
    v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( sub_140317A10(v9) )
    {
      v15 = 0;
      if ( (unsigned int)sub_140317A80(v9) )
        v15 = sub_140229550() != 0;
      *v9 = 0LL;
      if ( v15 )
        sub_1402294F0((__int64)v9, 0LL);
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v7, 0LL, 1LL);
    }
  }
  else
  {
    result = sub_1403095B0(&qword_140C534C0, 1LL);
    v9 = (_QWORD *)result;
    if ( !result )
      return result;
    v7 = result << 25 >> 16;
    if ( (a4 & 2) != 0 )
    {
      v12 = 0LL;
      goto LABEL_7;
    }
  }
  v10 = (((a3 >> 31) & 0xFFFFFFFD) + 4) | 2;
  if ( (a3 & 0x40000000) != 0 )
    v10 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
  v11 = sub_14026C61C(v10, 48 * a2 - 0x220000000000LL);
  v12 = sub_1402CBD10(v9, a2, v11 | 0xA0000000);
LABEL_7:
  v13 = 0;
  if ( (unsigned int)sub_140317A80(v9) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_8;
      v14 = (v12 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_8;
      v14 = (v12 & 1) == 0;
    }
    if ( !v14 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v9 = v12;
  if ( v13 )
    sub_1402294F0((__int64)v9, v12);
  return v7;
}
