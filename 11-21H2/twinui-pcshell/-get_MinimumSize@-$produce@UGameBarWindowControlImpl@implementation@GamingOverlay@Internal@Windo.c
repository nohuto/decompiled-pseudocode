/*
 * XREFs of ?get_MinimumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAUSize@Foundation@Windows@3@@Z @ 0x180344A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_MinimumSize(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // xmm6_4
  int v8; // xmm7_4
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1 + 160;
  if ( !a1 )
    v4 = 176LL;
  AcquireSRWLockShared((PSRWLOCK)v4);
  v10 = (RTL_SRWLOCK *)v4;
  v5 = a1 + 24;
  if ( !a1 )
    v5 = 40LL;
  if ( *(_QWORD *)v5 )
  {
    v6 = a1 + 48;
    if ( !a1 )
      v6 = 64LL;
LABEL_12:
    v8 = *(_DWORD *)(v6 + 4);
    v7 = *(_DWORD *)v6;
    goto LABEL_13;
  }
  v6 = a1 + 112;
  if ( !a1 )
    v6 = 128LL;
  v7 = 0;
  v8 = 0;
  if ( *(_BYTE *)(v6 + 8) )
    goto LABEL_12;
LABEL_13:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
  *a2 = v7;
  a2[1] = v8;
  return 0LL;
}
