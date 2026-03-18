/*
 * XREFs of ??1CDDisplayRenderTarget@@UEAA@XZ @ 0x1801C18A8
 * Callers:
 *     ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x1801C2950 (--_GCDDisplayRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180072578 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DAA70 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     PubSebUnregisterRpc @ 0x1800F4DDC (PubSebUnregisterRpc.c)
 *     ?InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ @ 0x1800FA8BC (-InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800FC108 (--1COverlayContext@@QEAA@XZ.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x1801E722C (McTemplateU0zqq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18027C264 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CDDisplayRenderTarget::~CDDisplayRenderTarget(CDDisplayRenderTarget *this)
{
  struct _SEB_RPC_PUBLISH_DATA *v2; // rcx
  char updated; // al
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  struct _SEB_RPC_PUBLISH_DATA *v7; // rcx
  __int64 v8; // rcx
  CResource *v9; // rcx
  char *v10; // rcx

  if ( *((_QWORD *)this + 2331) )
  {
    if ( *((_BYTE *)this + 18640) )
    {
      if ( *((_BYTE *)this + 18641) )
      {
        v2 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2332);
        if ( v2 )
          PubSebiUpdateLevelEventRpc(v2, 0);
      }
      updated = PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 2331), 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0zqq_EventWriteTransfer(v5, v4, v6, 0, updated);
      *((_BYTE *)this + 18640) = 0;
    }
    PubSebUnregisterRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 2331));
    *((_QWORD *)this + 2331) = 0LL;
  }
  v7 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2332);
  if ( v7 )
  {
    PubSebUnregisterRpc(v7);
    *((_QWORD *)this + 2332) = 0LL;
  }
  FastRegion::CRegion::FreeMemory((void **)this + 2320);
  COverlayContext::~COverlayContext((void **)this + 24);
  v8 = *((_QWORD *)this + 23);
  if ( v8 )
    CMILCOMBaseWeakRef::InternalRelease((CMILCOMBaseWeakRef *)(v8 + 16));
  v9 = (CResource *)*((_QWORD *)this + 22);
  if ( v9 )
    CResource::InternalRelease(v9);
  v10 = (char *)*((_QWORD *)this + 21);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  CRenderTarget::~CRenderTarget(this);
}
