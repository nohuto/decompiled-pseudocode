/*
 * XREFs of ?GetRuntimeClassName@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18004E990
 * Callers:
 *     ?GetRuntimeClassName@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18004E9C0 (-GetRuntimeClassName@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementBrokerServer::GetRuntimeClassName(
        ContentManagement::ContentManagementBrokerServer *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContentManagementBroker", 0x29u, a2);
}
