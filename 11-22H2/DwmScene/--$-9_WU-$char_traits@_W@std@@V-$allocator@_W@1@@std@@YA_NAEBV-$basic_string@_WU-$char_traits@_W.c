/*
 * XREFs of ??$?9_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x1800DC058
 * Callers:
 *     ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@W4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC760 (--$SetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurationM.c)
 * Callees:
 *     ?compare@?$_WChar_traits@_W@std@@SAHQEB_W0_K@Z @ 0x18001F790 (-compare@-$_WChar_traits@_W@std@@SAHQEB_W0_K@Z.c)
 */

char __fastcall std::operator!=<wchar_t>(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  int v4; // eax
  char v5; // cl

  v2 = a2[2];
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 **)*a2;
  v3 = a1[2];
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  if ( (__int64 *)v3 != v2 )
    return 1;
  v4 = std::_WChar_traits<wchar_t>::compare((__int64)a1, a2, v3);
  v5 = 0;
  if ( v4 )
    return 1;
  return v5;
}
