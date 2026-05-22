/*
 * XREFs of ?_Calculate_growth@?$vector@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEBA_K_K@Z @ 0x1800B8014
 * Callers:
 *     ??$_Emplace_reallocate@PEAUIUnknown@@@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@QEAAPEAPEAUIUnknown@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1800A7DF8 (--$_Emplace_reallocate@PEAUIUnknown@@@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@s.c)
 *     ??$_Emplace_reallocate@AEBV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@AEBV234@@Z @ 0x180186900 (--$_Emplace_reallocate@AEBV-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$_Emplace_reallocate@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@?$vector@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@QEAAPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801869EC (--$_Emplace_reallocate@V-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Micr.c)
 *     ??$_Emplace_reallocate@AEBQEAUIUnknown@@@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@QEAAPEAPEAUIUnknown@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801ACB3C (--$_Emplace_reallocate@AEBQEAUIUnknown@@@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x1FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 3;
  v4 = v3 >> 1;
  if ( v3 <= 0x1FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
