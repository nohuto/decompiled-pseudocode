/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUIClientWindowState@ViewManagerInterop@Shell@456@UIClientWindowReadyForPresentationChangedEventArgs@89456@@Z @ 0x1804104C0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180411D20 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnClientWindowReadyForPresentationChanged(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  RTL_SRWLOCK *v6; // rsi
  signed int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v13; // [rsp+50h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v14; // [rsp+58h] [rbp+10h]
  winrt::Windows::Foundation::IUnknown *v15; // [rsp+60h] [rbp+18h]
  RTL_SRWLOCK *v16; // [rsp+68h] [rbp+20h]

  v15 = a3;
  v14 = a2;
  v6 = (RTL_SRWLOCK *)(a1 + 176);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 176));
  v16 = v6;
  v13 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)a3 + 48LL))(*(_QWORD *)a3, &v13);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  if ( v13 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 112LL))(v8);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x387,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)v9,
          v11);
      if ( *(_BYTE *)(a1 + 105) && *(_BYTE *)(a1 + 104) )
      {
        LOBYTE(v10) = (_BYTE)v15;
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ShowInternal(a1, v10);
      }
    }
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
}
