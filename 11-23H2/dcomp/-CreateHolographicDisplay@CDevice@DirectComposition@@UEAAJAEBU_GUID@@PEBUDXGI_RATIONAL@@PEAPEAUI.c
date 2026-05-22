/*
 * XREFs of ?CreateHolographicDisplay@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEBUDXGI_RATIONAL@@PEAPEAUIDCompositionHolographicDisplay@@@Z @ 0x1800FFE40
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?Initialize@CHolographicDisplayProxy@DirectComposition@@QEAAJAEBU_GUID@@PEBUDXGI_RATIONAL@@@Z @ 0x1801001DC (-Initialize@CHolographicDisplayProxy@DirectComposition@@QEAAJAEBU_GUID@@PEBUDXGI_RATIONAL@@@Z.c)
 */

int __fastcall DirectComposition::CDevice::CreateHolographicDisplay(
        DirectComposition::CDevice *this,
        const struct _GUID *a2,
        const struct DXGI_RATIONAL *a3,
        struct IDCompositionHolographicDisplay **a4)
{
  int result; // eax
  DirectComposition::CHolographicDisplayProxy *v8; // rdi
  DirectComposition::CHolographicDisplayProxy *v9; // rcx
  DirectComposition::CHolographicDisplayProxy *v10; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
    return -2147024809;
  result = DirectComposition::CDevice::CreateProxyInternal(
             (DirectComposition::CDevice *)((char *)this - 32),
             76,
             0,
             (void **)&v10,
             &v11);
  if ( result < 0 )
  {
    *a4 = 0LL;
  }
  else
  {
    v8 = v10;
    v9 = v10;
    *((_DWORD *)v10 + 3) = v11;
    *(_QWORD *)v9 = &DirectComposition::CHolographicDisplayProxy::`vftable';
    *((_DWORD *)v9 + 2) = 1;
    result = DirectComposition::CHolographicDisplayProxy::Initialize(v9, a2, a3);
    if ( result >= 0 )
      *a4 = v8;
  }
  return result;
}
