/*
 * XREFs of ?ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024678
 * Callers:
 *     ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC (-Reset@-$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ.c)
 *     ?Destroy@InteropVisualReferenceController@Composition@UI@Windows@@UEAAXXZ @ 0x18019A7C0 (-Destroy@InteropVisualReferenceController@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@InteropVisualReference@Composition@UI@Windows@@UEAAXXZ @ 0x18019A9B0 (-Destroy@InteropVisualReference@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 *     ?FreeProxy@CProxyTable@DirectComposition@@QEAAXPEAX@Z @ 0x18002493C (-FreeProxy@CProxyTable@DirectComposition@@QEAAXPEAX@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CDevice::ReleaseProxyForInterop(void *a1)
{
  struct DirectComposition::CProxyTable *v2; // rax
  DirectComposition::CProxyTable *v3; // rbx
  DirectComposition::CDeviceLock *v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = DirectComposition::CProxyTable::FromProxy(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = (DirectComposition::CDeviceLock *)(*(_QWORD *)v2 + 96LL);
    DirectComposition::CDeviceLock::Enter(v4);
    DirectComposition::CProxyTable::FreeProxy(v3, a1);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v4);
  }
}
