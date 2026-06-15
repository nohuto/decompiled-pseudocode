/*
 * XREFs of ?SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x18002A050
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2b6e7f78b65f10010076d2e207bfb9e0___ @ 0x180023E1C (Windows--Internal--ComTaskPool--QueueTask__lambda_2b6e7f78b65f10010076d2e207bfb9e0___.c)
 */

void __fastcall CProcess::SetMixedRealitySpatialAudioFormatPolicy(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  _QWORD *i; // rbx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 712);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 712));
  v9 = v2;
  if ( *(_DWORD *)(a1 + 752) != a2 )
  {
    *(_DWORD *)(a1 + 752) = a2;
    v6 = *(_QWORD **)(a1 + 768);
    for ( i = *(_QWORD **)(a1 + 760); i != v6; ++i )
    {
      *(_QWORD *)&v8 = *i;
      DWORD2(v8) = *(_DWORD *)(a1 + 160);
      Windows::Internal::ComTaskPool::QueueTask__lambda_2b6e7f78b65f10010076d2e207bfb9e0___(v5, &v8);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
}
