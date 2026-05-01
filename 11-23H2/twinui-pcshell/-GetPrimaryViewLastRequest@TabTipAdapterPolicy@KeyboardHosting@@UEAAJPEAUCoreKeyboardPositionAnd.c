/*
 * XREFs of ?GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180532550
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1800986A0 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewLastRequest(
        RTL_SRWLOCK *this,
        struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  RTL_SRWLOCK *v2; // rdi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  _BYTE v10[68]; // [rsp+28h] [rbp-39h]
  _OWORD v11[4]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+67h] BYREF

  v2 = this + 65;
  AcquireSRWLockExclusive(this + 65);
  memset_0(v11, 0, sizeof(v11));
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    &this[57].Ptr,
    &v12,
    &this[80]);
  if ( (PVOID)v12 == this[58].Ptr
    || (*(_DWORD *)&v10[64] = *(_DWORD *)(v12 + 84),
        *(_OWORD *)&v10[16] = *(_OWORD *)(v12 + 36),
        *(_OWORD *)v10 = *(_OWORD *)(v12 + 20),
        *(_OWORD *)&v10[32] = *(_OWORD *)(v12 + 52),
        *(_OWORD *)&v10[48] = *(_OWORD *)(v12 + 68),
        !(unsigned __int8)_mm_cvtsi128_si32(*(__m128i *)v10)) )
  {
    v8 = v11[3];
    v7 = v11[2];
    v6 = v11[1];
    v5 = v11[0];
  }
  else
  {
    v5 = *(_OWORD *)&v10[4];
    v6 = *(_OWORD *)&v10[20];
    v7 = *(_OWORD *)&v10[36];
    v8 = *(_OWORD *)&v10[52];
  }
  *(_OWORD *)a2 = v5;
  *((_OWORD *)a2 + 1) = v6;
  *((_OWORD *)a2 + 2) = v7;
  *((_OWORD *)a2 + 3) = v8;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
