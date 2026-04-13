/*
 * XREFs of ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18006BA58
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x180064B8C (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x180072814 (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find_first_of(char *a1, _WORD *a2, unsigned __int64 a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // r11
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // r8
  _WORD *v11; // rdx

  if ( !*a2 )
    return -1LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( !v4 )
    return -1LL;
  v5 = *((_QWORD *)a1 + 2);
  if ( a3 >= v5 )
    return -1LL;
  v6 = *((_QWORD *)a1 + 3) < 8uLL ? a1 : *(char **)a1;
  v7 = (unsigned __int64)&v6[2 * v5];
  v8 = *((_QWORD *)a1 + 3) < 8uLL ? a1 : *(char **)a1;
  v9 = &v8[2 * a3];
  while ( 2 )
  {
    if ( (unsigned __int64)v9 >= v7 )
      return -1LL;
    v10 = v4;
    v11 = a2;
    while ( *v11 != *(_WORD *)v9 )
    {
      ++v11;
      if ( !--v10 )
        goto LABEL_18;
    }
    if ( !v11 )
    {
LABEL_18:
      v9 += 2;
      continue;
    }
    break;
  }
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  return (v9 - a1) >> 1;
}
