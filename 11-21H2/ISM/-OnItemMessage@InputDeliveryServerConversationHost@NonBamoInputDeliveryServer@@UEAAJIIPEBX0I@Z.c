/*
 * XREFs of ?OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x180040780
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::InputDeliveryServerConversationHost::OnItemMessage(
        NonBamoInputDeliveryServer **this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        struct InputDeliveryServerMessage *a5,
        unsigned int a6)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a6 != 64 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\NonBamoInputDeliveryServer.h",
      a4);
  return NonBamoInputDeliveryServer::OnAppThreadMessage(this[2], a5);
}
