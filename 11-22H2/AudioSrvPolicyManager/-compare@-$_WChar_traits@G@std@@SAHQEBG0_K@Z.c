/*
 * XREFs of ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180008FE0
 * Callers:
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1800440AC (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_WChar_traits<unsigned short>::compare(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int16 v4; // ax

  if ( !a3 )
    return 0LL;
  v3 = a1 - (_QWORD)a2;
  while ( 1 )
  {
    v4 = *(unsigned __int16 *)((char *)a2 + v3);
    if ( v4 < *a2 )
      return 0xFFFFFFFFLL;
    if ( v4 > *a2 )
      break;
    if ( a3 == 1 )
      return 0LL;
    --a3;
    ++a2;
  }
  return 1LL;
}
