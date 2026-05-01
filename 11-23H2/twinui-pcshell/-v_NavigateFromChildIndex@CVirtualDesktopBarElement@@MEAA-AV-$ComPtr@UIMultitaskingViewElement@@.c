/*
 * XREFs of ?v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x180582230
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x180576860 (-v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 */

__int64 *__fastcall CVirtualDesktopBarElement::v_NavigateFromChildIndex(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  int v5; // ebx
  int v6; // edi
  LANGID ThreadUILanguage_0; // ax
  bool v11; // zf

  v5 = 0;
  v6 = a4;
  if ( (unsigned int)(a4 - 3) <= 1 )
  {
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
      v11 = v6 == 3;
    else
      v11 = v6 == 4;
    LOBYTE(v5) = !v11;
    v6 = v5 + 5;
  }
  CMultitaskingViewElementBase::v_NavigateFromChildIndex(a1, a2, a3, v6, a5);
  return a2;
}
