/*
 * XREFs of ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x1800A4FB8
 * Callers:
 *     ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A6D90 (-SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedCon.c)
 *     ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800A6FE0 (-UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x1800A731C (-stoi@std@@YAHAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
        Windows::Services::TargetedContent::Internal *this,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a2,
        unsigned int *a3,
        unsigned __int16 *a4)
{
  __int64 (*v7)(void); // rbx
  int v8; // eax
  __int64 (__fastcall *v9)(Windows::Services::TargetedContent::Internal *, HSTRING *); // rbx
  int v10; // eax
  char *StringRawBuffer; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  char *v14; // rax
  const char *v15; // r9
  __int64 result; // rax
  HSTRING v17; // [rsp+20h] [rbp-68h] BYREF
  HSTRING string; // [rsp+28h] [rbp-60h]
  wchar_t String[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  string = 0LL;
  v7 = *(__int64 (**)(void))(*(_QWORD *)this + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  try
  {
    v8 = v7();
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        530LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v8,
        (int)v17);
    if ( WindowsIsStringEmpty(string) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        531LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070057LL,
        (int)v17);
    v17 = 0LL;
    v9 = *(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, HSTRING *))(*(_QWORD *)this + 96LL);
    WindowsDeleteString(0LL);
    v17 = 0LL;
    v10 = v9(this, &v17);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        533LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v10,
        (int)v17);
    if ( WindowsIsStringEmpty(v17) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        534LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070057LL,
        (int)v17);
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
    v21 = 7LL;
    v20 = 0LL;
    String[0] = 0;
    v12 = -1LL;
    if ( *(_WORD *)StringRawBuffer )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)&StringRawBuffer[2 * v13] );
    }
    else
    {
      v13 = 0LL;
    }
    std::wstring::assign((unsigned __int64 *)String, StringRawBuffer, v13);
    *(_DWORD *)a2 = std::stoi(String);
    if ( v21 >= 8 )
      operator delete(*(void **)String);
    v14 = (char *)WindowsGetStringRawBuffer(v17, 0LL);
    v21 = 7LL;
    v20 = 0LL;
    String[0] = 0;
    if ( *(_WORD *)v14 )
    {
      do
        ++v12;
      while ( *(_WORD *)&v14[2 * v12] );
    }
    else
    {
      v12 = 0LL;
    }
    std::wstring::assign((unsigned __int64 *)String, v14, v12);
    *(_WORD *)a3 = std::stoi(String);
    if ( v21 >= 8 )
      operator delete(*(void **)String);
    WindowsDeleteString(v17);
    v17 = 0LL;
    WindowsDeleteString(string);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x21B,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
                           v15);
  }
  return result;
}
