/*
 * XREFs of ??$swap@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@YAXAEAV?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@0@0@Z @ 0x1800DFD74
 * Callers:
 *     ?Cancel@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ @ 0x1800E0080 (-Cancel@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::swap<int,std::function<void (void)>,std::less<int>,std::allocator<std::pair<int const,std::function<void (void)>>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  if ( a1 != a2 )
  {
    v2 = *a1;
    *a1 = *a2;
    *a2 = v2;
    result = a2[1];
    v4 = a1[1];
    a1[1] = result;
    a2[1] = v4;
  }
  return result;
}
