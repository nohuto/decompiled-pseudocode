/*
 * XREFs of sub_1800907F8 @ 0x1800907F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800907F8(
        ContentManagement::AppManager *a1,
        HSTRING a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        HSTRING a5,
        HSTRING a6)
{
  char v6; // of
  _BYTE *v7; // rdi

  if ( !v6 )
    JUMPOUT(0x18009077DLL);
  *v7 = __ROL1__(*v7, 73);
  return ContentManagement::AppManager::StartProductInstallByStoreId(a1, a2, a3, a4, a5, a6);
}
