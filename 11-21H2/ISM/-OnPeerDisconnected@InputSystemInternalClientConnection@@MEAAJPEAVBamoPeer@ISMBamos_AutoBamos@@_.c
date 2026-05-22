/*
 * XREFs of ?OnPeerDisconnected@InputSystemInternalClientConnection@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@_N@Z @ 0x180120A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall InputSystemInternalClientConnection::OnPeerDisconnected(
        InputSystemInternalClientConnection *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2)
{
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)this + 29);
  return 0LL;
}
