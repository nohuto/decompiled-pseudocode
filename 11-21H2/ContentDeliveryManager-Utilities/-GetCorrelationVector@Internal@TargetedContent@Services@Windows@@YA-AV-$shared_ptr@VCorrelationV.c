/*
 * XREFs of ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18009D204
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18009E280 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x18009FED0 (-RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@.c)
 *     ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x1800A3120 (-UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Window.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ @ 0x18006673C (-UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@std@@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180075E74 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@_W@std@@@std@@@std@@@-$basic_s.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800A1488 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetCorrelationVector(_QWORD *a1, HSTRING a2)
{
  WCHAR *StringRawBuffer; // rax
  __int64 v4; // r8
  void **v5; // rcx
  char *v6; // rdx
  const char *v7; // r14
  char *v8; // rax
  bool v9; // dl
  __int64 v10; // rdi
  void **v11; // rsi
  struct TraceLoggingCorrelationVector *v12; // r14
  void *v13; // rcx
  _QWORD v15[2]; // [rsp+28h] [rbp-58h] BYREF
  void *v16[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  unsigned __int64 v18; // [rsp+50h] [rbp-30h]
  char *Source[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h]
  unsigned __int64 v21; // [rsp+70h] [rbp-10h]

  v15[1] = a1;
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  v18 = 7LL;
  v17 = 0LL;
  LOWORD(v16[0]) = 0;
  if ( *StringRawBuffer )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( StringRawBuffer[v4] );
  }
  std::wstring::assign(v16, StringRawBuffer);
  v5 = v16;
  if ( v18 >= 8 )
    v5 = (void **)v16[0];
  v6 = (char *)v16;
  if ( v18 >= 8 )
    v6 = (char *)v16[0];
  v21 = 15LL;
  v20 = 0LL;
  LOBYTE(Source[0]) = 0;
  std::string::_Construct<std::_String_iterator<std::_String_val<std::_Simple_types<wchar_t>>>>(
    (__int64)Source,
    v6,
    (char *)v5 + 2 * v17);
  v7 = (const char *)Source;
  if ( v21 >= 0x10 )
    v7 = Source[0];
  v8 = (char *)operator new(0xA0uLL);
  v10 = (__int64)v8;
  v15[0] = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 1;
    *((_DWORD *)v8 + 3) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::`vftable';
    v11 = (void **)(v8 + 16);
    *((_QWORD *)v8 + 2) = 0LL;
    v12 = TraceLoggingCorrelationVector::Set(v7, v9);
    if ( (_QWORD *)(v10 + 16) == v15 )
    {
      if ( v12 )
        operator delete(v12);
    }
    else
    {
      v13 = *v11;
      if ( v12 != *v11 )
      {
        if ( v13 )
          operator delete(v13);
        *v11 = v12;
      }
    }
    ContentDeliveryManager::Background::CorrelationVectorWrapper::UpdateStringRepresentation((ContentDeliveryManager::Background::CorrelationVectorWrapper *)(v10 + 16));
  }
  else
  {
    v10 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(a1, v10 + 16, v10);
  if ( v21 >= 0x10 )
    operator delete(Source[0]);
  v21 = 15LL;
  v20 = 0LL;
  LOBYTE(Source[0]) = 0;
  if ( v18 >= 8 )
    operator delete(v16[0]);
  return a1;
}
