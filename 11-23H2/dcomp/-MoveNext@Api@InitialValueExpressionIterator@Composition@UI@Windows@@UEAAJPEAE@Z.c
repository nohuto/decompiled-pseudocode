/*
 * XREFs of ?MoveNext@Api@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x1801A2BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180098660 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrap.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionIterator::Api::MoveNext(
        Windows::UI::Composition::InitialValueExpressionIterator::Api *this,
        bool *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // edi
  bool v8; // al

  *a2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    if ( *((_DWORD *)this + 10) == *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>>>>,std::_Iterator_base0>::operator++(
        (__int64 *)this + 4,
        v5,
        2LL,
        v6);
      v8 = *((_QWORD *)this + 4) != **((_QWORD **)this + 3);
      v7 = 0;
      *a2 = v8;
    }
    else
    {
      v7 = -2147483636;
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FE5F0, 2u, 0x8000000C, 0xCFu, 0LL);
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v7;
}
