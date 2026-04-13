/*
 * XREFs of ?RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIAppInfo@25@@Z @ 0x1800D96E0
 * Callers:
 *     ?FindAppInfo@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@25@@Z @ 0x1800D8410 (-FindAppInfo@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800D9220 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *this,
        HSTRING a2,
        struct Windows::ApplicationModel::IAppInfo *a3)
{
  __int64 v4; // rdi
  wil *v5; // rcx
  unsigned int v6; // r8d
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF

  try
  {
    v4 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppInfo *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::PrefetchDisplayInfo(this);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v5, &v8, v6);
  }
  return result;
}
