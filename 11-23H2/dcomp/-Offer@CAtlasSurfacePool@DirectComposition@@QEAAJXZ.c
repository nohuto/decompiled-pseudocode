/*
 * XREFs of ?Offer@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180039008
 * Callers:
 *     ?OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ @ 0x180019670 (-OfferSurfaceResources@CSurfaceManager@DirectComposition@@QEAAJXZ.c)
 *     ?OfferSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ @ 0x180039188 (-OfferSurfaces@CDynamicPoolSet@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180034FA8 (-RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x180038AD0 (--$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z.c)
 *     ?OfferResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@@Z @ 0x180039124 (-OfferResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x1800EA32C (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::Offer(DirectComposition::CAtlasSurfacePool *this)
{
  int v1; // edi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct ID3D11Texture2D **); // rcx
  int v4; // eax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct IDXGIResource **); // rcx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct ID3D11Texture2D *v11; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIResource *v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( (*((_BYTE *)this + 172) & 8) == 0 )
  {
    v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct ID3D11Texture2D **))*((_QWORD *)this + 2);
    if ( v3 )
    {
      v11 = 0LL;
      v4 = (**v3)(v3, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v11);
      if ( v4 < 0 )
        Microsoft::WRL2::FailFast::ForHR(v4, retaddr);
      DirectComposition::CDxDevice::RemoveGuardRect(
        (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
        v11);
      ReleaseInterface<ID3D11Texture2D>((__int64 *)&v11);
      v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIResource **))*((_QWORD *)this + 2);
      v12 = 0LL;
      v6 = (**v5)(v5, &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b, &v12);
      if ( v6 < 0 )
        Microsoft::WRL2::FailFast::ForHR(v6, retaddr);
      v7 = DirectComposition::CDxDevice::OfferResources(
             (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
             v12);
      v8 = (int)v12;
      v1 = v7;
      if ( v12 )
        ((void (__fastcall *)(struct IDXGIResource *))v12->lpVtbl->Release)(v12);
      if ( v1 >= 0 )
      {
        if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x10) != 0 )
          McTemplateU0xqq_EventWriteTransfer(
            v8,
            (unsigned int)"*",
            (_DWORD)this,
            *((_DWORD *)this + 38),
            *((_DWORD *)this + 39));
        *((_BYTE *)this + 172) |= 8u;
      }
    }
  }
  return (unsigned int)v1;
}
