/*
 * XREFs of ?OnConstantChanged@MPCConstantManagerClientPrincipal@@UEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x18018FE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCConstantManagerClientPrincipal::OnConstantChanged(
        __int64 a1,
        struct Windows::Foundation::IPropertyValue *a2,
        int a3)
{
  return MPCConstantManagerClient::OnConstantChanged(*(_QWORD *)(a1 + 56), a2, a3);
}
