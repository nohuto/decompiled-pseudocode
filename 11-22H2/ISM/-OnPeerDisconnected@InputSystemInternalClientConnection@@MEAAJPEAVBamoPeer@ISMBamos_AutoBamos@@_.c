/*
 * XREFs of ?OnPeerDisconnected@InputSystemInternalClientConnection@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@_N@Z @ 0x18014A350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall InputSystemInternalClientConnection::OnPeerDisconnected(
        InputSystemInternalClientConnection *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2)
{
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)this + 31);
  return 0LL;
}
