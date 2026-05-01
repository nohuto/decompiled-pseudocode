/*
 * XREFs of ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHWND__@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18008B7B0
 * Callers:
 *     ?HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18008B730 (-HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x18008C3A8 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18010AB34 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18047FC50 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleForegroundChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        HWND a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 v5; // r8
  void **v6; // rdi
  void *v7; // r9
  unsigned __int64 v8; // rdx
  void **v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *Src; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  WINBOOL fPending; // [rsp+90h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+98h] [rbp+48h] BYREF

  *(_DWORD *)a3 = 0;
  TouchKeyboardExperienceManager::GetAppIdFromWindow((HWND)&Src, a2);
  v6 = (void **)((char *)this + 608);
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
  Context = 0LL;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v16 = (__int64)&`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B4500;
    qword_1807B4500 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B4518 = (__int64)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    v17 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v16, v13, v14);
  }
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u
    && (*(_BYTE *)(v11 + 16) & 0x10) != 0
    && (*(_QWORD *)(v11 + 24) & 0x10LL) == *(_QWORD *)(v11 + 24) )
  {
    LOBYTE(v18) = *(_BYTE *)a3;
    v16 = (__int64)v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      v11,
      (int)&dword_1806BCD61,
      (__int64)&v16,
      (__int64)&v18);
  }
  if ( Src )
    CoTaskMemFree(Src);
  return 0LL;
}
