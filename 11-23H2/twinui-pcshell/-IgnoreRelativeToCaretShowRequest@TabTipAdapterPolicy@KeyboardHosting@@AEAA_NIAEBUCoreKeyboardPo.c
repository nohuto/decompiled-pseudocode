/*
 * XREFs of ?IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180533814
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1800986A0 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180533A0C (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToCaretShowRequest(
        RTL_SRWLOCK *this,
        int a2,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a3)
{
  RTL_SRWLOCK *v3; // rdi
  bool v6; // bl
  __m128i v8; // [rsp+20h] [rbp-50h]
  __int64 v9; // [rsp+90h] [rbp+20h] BYREF
  int v10; // [rsp+98h] [rbp+28h] BYREF

  v10 = a2;
  v3 = this + 67;
  AcquireSRWLockShared(this + 67);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    &this[59].Ptr,
    &v9,
    &v10);
  v6 = (PVOID)v9 != this[60].Ptr
    && (v8 = *(__m128i *)(v9 + 20), (unsigned __int8)_mm_cvtsi128_si32(v8))
    && *(_DWORD *)a3 == 2
    && *(_QWORD *)((char *)a3 + 4) == v8.m128i_i64[1]
    && *((float *)a3 + 14) == (float)(int)COERCE_FLOAT(HIDWORD(*(_OWORD *)(v9 + 68)))
    && *((float *)a3 + 15) == (float)(int)*(float *)(v9 + 84)
    && !KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v6;
}
