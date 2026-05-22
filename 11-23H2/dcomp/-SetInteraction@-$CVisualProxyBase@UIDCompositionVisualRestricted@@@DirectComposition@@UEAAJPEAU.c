/*
 * XREFs of ?SetInteraction@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionInteractionPartner@@@Z @ 0x18008D700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x1800F7044 (McTemplateU0qqqxx_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetInteraction(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v5; // r9
  struct DirectComposition::CDevice *v6; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+18h] BYREF
  struct DirectComposition::CDevice *v9; // [rsp+78h] [rbp+20h] BYREF

  if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
  {
    v5 = (a1 + 8) & -(__int64)(a1 != 0);
    DirectComposition::CDevice::GetDeviceAndHandleWorker((v5 - 8) & -(__int64)(v5 != 0), &v9, &v8);
    DirectComposition::CDevice::GetDeviceAndHandleWorker((unsigned __int64)a2, &v6, &v7);
    if ( v9 )
    {
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
        McTemplateU0qqqxx_EventWriteTransfer(0, v7, *((_DWORD *)v9 + 40), v8, v7, v8, v7);
    }
  }
  return DirectComposition::CResourceProxy::SetReferenceProperty((DirectComposition::CResourceProxy *)(a1 + 8), 22, a2);
}
