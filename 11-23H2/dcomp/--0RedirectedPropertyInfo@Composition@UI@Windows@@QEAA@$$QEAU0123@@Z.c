/*
 * XREFs of ??0RedirectedPropertyInfo@Composition@UI@Windows@@QEAA@$$QEAU0123@@Z @ 0x18004454C
 * Callers:
 *     ?QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAUIAnimationObject@234@PEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z @ 0x1800223D0 (-QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV-$vector@UA.c)
 *     ?Insert@ParameterOverrideEntry@Composition@UI@Windows@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$QEAURedirectedPropertyInfo@234@@Z @ 0x18004129C (-Insert@ParameterOverrideEntry@Composition@UI@Windows@@QEAAXAEBV-$basic_string@GU-$char_traits@G.c)
 *     ??$emplace@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@URedirectedPropertyInfo@Composition@UI@Windows@@@1@@Z @ 0x18004472C (--$emplace@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@URedirectedProp.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::UI::Composition::RedirectedPropertyInfo::RedirectedPropertyInfo(
        HSTRING *newString,
        __int64 a2)
{
  int v4; // eax
  HSTRING *v5; // rdx
  HSTRING *v6; // rcx
  HSTRING v7; // rsi
  HSTRING *result; // rax

  *newString = 0LL;
  *((_DWORD *)newString + 2) = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 12);
  v5 = newString + 2;
  *((_DWORD *)newString + 3) = v4;
  v6 = (HSTRING *)(a2 + 16);
  *v5 = 0LL;
  if ( v5 != (HSTRING *)(a2 + 16) )
  {
    *v5 = *v6;
    *v6 = 0LL;
  }
  *((_DWORD *)newString + 6) = *(_DWORD *)(a2 + 24);
  *((_DWORD *)newString + 7) = *(_DWORD *)(a2 + 28);
  v7 = *(HSTRING *)a2;
  *(_QWORD *)a2 = 0LL;
  if ( !v7 || v7 != *newString )
  {
    WindowsDeleteString(*newString);
    *newString = 0LL;
    WindowsDuplicateString(v7, newString);
  }
  *(_DWORD *)(a2 + 8) = 0;
  result = newString;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  return result;
}
