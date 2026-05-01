/*
 * XREFs of ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800C3440
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180084E48 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180098CBC (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x1800C3C34 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleForegroundChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __int64 a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 v5; // r8
  void **v6; // rdi
  void *v7; // r9
  unsigned __int64 v8; // rdx
  void **v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  *(_DWORD *)a3 = 0;
  TouchKeyboardExperienceManager::GetAppIdFromWindow(&Src, a2);
  v6 = (void **)((char *)this + 648);
  v7 = Src;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)Src + v8) );
  if ( v8 > (unsigned __int64)v6[3] )
  {
    std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(v6, v8, v5, Src);
  }
  else
  {
    v9 = v6;
    if ( (unsigned __int64)v6[3] >= 8 )
      v9 = (void **)*v6;
    v6[2] = (void *)v8;
    v10 = 2 * v8;
    memmove_0(v9, v7, 2 * v8);
    *(_WORD *)((char *)v9 + v10) = 0;
  }
  if ( (unsigned __int64)v6[3] >= 8 )
    v6 = (void **)*v6;
  v12 = *(_QWORD *)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v11,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v12 > 5u
    && (*(_BYTE *)(v12 + 16) & 0x10) != 0
    && (*(_QWORD *)(v12 + 24) & 0x10LL) == *(_QWORD *)(v12 + 24) )
  {
    v18 = 0x2000000LL;
    LOBYTE(v16) = *(_BYTE *)a3;
    v19 = (__int64)v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v12,
      (int)&dword_180864199,
      v13,
      v14,
      (const WCHAR **)&v19,
      (__int64)&v16,
      (__int64)&v18);
  }
  if ( Src )
    CoTaskMemFree(Src);
  return 0LL;
}
