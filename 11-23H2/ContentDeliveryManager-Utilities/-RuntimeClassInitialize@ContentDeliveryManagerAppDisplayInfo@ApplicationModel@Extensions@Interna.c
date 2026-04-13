/*
 * XREFs of ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800C43A4
 * Callers:
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800C3154 (--$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@.c)
 * Callees:
 *     ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x1800C3F58 (-PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *this,
        char *a2,
        struct Windows::ApplicationModel::IAppDisplayInfo *a3)
{
  __int64 v5; // rdi
  wil *v6; // rcx
  unsigned int v7; // r8d
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF

  try
  {
    v5 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppDisplayInfo *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::PrefetchDisplayName(
      (HSTRING *)this,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v6, &v9, v7);
  }
  return result;
}
