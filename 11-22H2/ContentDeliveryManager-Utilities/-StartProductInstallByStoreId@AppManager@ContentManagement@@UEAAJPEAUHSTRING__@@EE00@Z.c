/*
 * XREFs of ?StartProductInstallByStoreId@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE00@Z @ 0x180084400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::StartProductInstallByStoreId(
        ContentManagement::AppManager *this,
        HSTRING a2,
        __int64 a3,
        char a4,
        HSTRING a5,
        HSTRING a6)
{
  HSTRING v7; // r9

  v7 = a5;
  LOBYTE(v7) = a4;
  return (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING, __int64, HSTRING, HSTRING, _QWORD, _QWORD, HSTRING))(*(_QWORD *)this + 112LL))(
           this,
           a2,
           a3,
           v7,
           a5,
           0LL,
           0LL,
           a6);
}
