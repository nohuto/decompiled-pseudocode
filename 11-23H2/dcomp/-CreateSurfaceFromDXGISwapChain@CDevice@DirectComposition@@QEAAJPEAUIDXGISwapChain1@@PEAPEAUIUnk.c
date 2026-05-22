/*
 * XREFs of ?CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnknown@@@Z @ 0x180004714
 * Callers:
 *     ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238 (-CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z.c)
 *     ?CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionDelegatedInkTrail@@@Z @ 0x1800FF760 (-CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDComp.c)
 *     ?RuntimeClassInitialize@CompositionSwapChain@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIDXGISwapChain1@@@Z @ 0x1801757D4 (-RuntimeClassInitialize@CompositionSwapChain@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateSurfaceFromDXGISwapChain(
        DirectComposition::CDevice *this,
        struct IDXGISwapChain1 *a2,
        struct IUnknown **a3)
{
  int v5; // ebx
  void *v6; // r8
  DirectComposition::CTransformGroupProxy *v7; // rdi
  DirectComposition::CResourceProxy *v8; // rcx
  void *v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  DirectComposition::CTransformGroupProxy *v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v5 = -2147024809;
  if ( a2 )
  {
    v5 = ((__int64 (__fastcall *)(struct IDXGISwapChain1 *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_7652c85a_0df5_4567_bcdd_8176a332b99b,
           &v13);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 88LL))(v13, &v10);
      if ( v5 >= 0 )
      {
        v12 = 0LL;
        v5 = DirectComposition::CDevice::CreateProxyInternal(this, 0x2Au, 0, (void **)&v12, &v11);
        if ( v5 >= 0 )
        {
          v6 = v10;
          v7 = v12;
          v8 = (DirectComposition::CTransformGroupProxy *)((char *)v12 + 8);
          *((_DWORD *)v12 + 3) = v11;
          *(_QWORD *)v7 = &DirectComposition::CCompositionSurfaceProxy::`vftable';
          *(_DWORD *)v8 = 1;
          v5 = DirectComposition::CResourceProxy::SetHandleProperty(v8, 0, v6);
          if ( v5 < 0 )
            DirectComposition::CTransformGroupProxy::Release(v7);
          else
            *a3 = (struct IUnknown *)v7;
        }
      }
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return (unsigned int)v5;
}
