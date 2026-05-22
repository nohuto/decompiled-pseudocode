/*
 * XREFs of _lambda_9cee659b624ffe0caad69d238db367bf_::operator() @ 0x18001F680
 * Callers:
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_9cee659b624ffe0caad69d238db367bf___ @ 0x18001F0AC (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_9cee659b624ffe0caad69d238db367bf_.c)
 * Callees:
 *     ??A?$span@U?$pair@PEAVCompositionAnimation@Composition@UI@Windows@@V?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@std@@$0?0@gsl@@QEBAAEAU?$pair@PEAVCompositionAnimation@Composition@UI@Windows@@V?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@std@@_K@Z @ 0x18001FA04 (--A-$span@U-$pair@PEAVCompositionAnimation@Composition@UI@Windows@@V-$unordered_map@V-$basic_str.c)
 *     ?QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@6@PEAUIAnimationObject@234@PEAUHSTRING__@@PEAVAnimationPropertyInfo@234@@Z @ 0x1800223D0 (-QueryExternalIAnimationObject_NoLock@AnimationHelper@Composition@UI@Windows@@YAXPEAV-$vector@UA.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall lambda_9cee659b624ffe0caad69d238db367bf_::operator()(gsl::details **a1)
{
  unsigned __int64 v2; // rdi
  gsl::details *v3; // rcx
  gsl::details *v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  int v7; // eax

  v2 = 0LL;
  v3 = *a1;
  if ( *(_QWORD *)v3 )
  {
    do
    {
      v4 = a1[1];
      if ( *(_QWORD *)v4 )
      {
        if ( v2 >= *(_QWORD *)v4 )
        {
          gsl::details::terminate(v3);
          JUMPOUT(0x18001F720LL);
        }
        v5 = *(_QWORD *)(*((_QWORD *)v4 + 1) + 8 * v2);
      }
      else
      {
        LODWORD(v5) = 0;
      }
      v6 = *(_QWORD *)gsl::span<std::pair<Windows::UI::Composition::CompositionAnimation *,std::unordered_map<std::wstring,Windows::UI::Composition::ParameterOverrideEntry>>,-1>::operator[](
                        v3,
                        v2);
      v7 = gsl::span<std::pair<Windows::UI::Composition::CompositionAnimation *,std::unordered_map<std::wstring,Windows::UI::Composition::ParameterOverrideEntry>>,-1>::operator[](
             *a1,
             v2);
      Windows::UI::Composition::AnimationHelper::QueryExternalIAnimationObject_NoLock(
        v6 + 312,
        v7 + 8,
        *(_QWORD *)a1[2],
        v5,
        *(Microsoft::WRL2::NestableRuntimeClass **)a1[3]);
      v3 = *a1;
      ++v2;
    }
    while ( v2 < *(_QWORD *)*a1 );
  }
  return 0LL;
}
