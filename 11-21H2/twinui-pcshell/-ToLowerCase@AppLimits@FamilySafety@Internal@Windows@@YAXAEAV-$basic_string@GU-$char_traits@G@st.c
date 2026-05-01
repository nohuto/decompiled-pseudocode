/*
 * XREFs of ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180563BE8
 * Callers:
 *     ?ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180563B68 (-ToLowerCase@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180565AD0 (-PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_.c)
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x18056AB1C (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::ToLowerCase(_QWORD *a1)
{
  bool v1; // cf
  _QWORD *v2; // rbx
  __int64 result; // rax
  _QWORD *v4; // rdi

  v1 = a1[3] < 8uLL;
  v2 = a1;
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  result = v2[2];
  v4 = (_QWORD *)((char *)a1 + 2 * result);
  if ( !v1 )
    v2 = (_QWORD *)*v2;
  while ( v2 != v4 )
  {
    result = _o_towlower(*(unsigned __int16 *)v2);
    *(_WORD *)v2 = result;
    v2 = (_QWORD *)((char *)v2 + 2);
  }
  return result;
}
