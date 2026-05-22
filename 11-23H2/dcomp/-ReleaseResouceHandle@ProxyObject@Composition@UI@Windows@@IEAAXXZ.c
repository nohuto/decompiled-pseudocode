/*
 * XREFs of ?ReleaseResouceHandle@ProxyObject@Composition@UI@Windows@@IEAAXXZ @ 0x1800A34CC
 * Callers:
 *     ?PostDestroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ @ 0x180058B00 (-PostDestroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@InteropRenderTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1800A3EB0 (-Destroy@InteropRenderTarget@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z @ 0x180058A80 (-ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z.c)
 *     ?ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z @ 0x180058BA0 (-ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::ReleaseResouceHandle(
        Windows::UI::Composition::ProxyObject *this)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 3);
  if ( *((_DWORD *)this + 32) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(Windows::UI::Composition::ProxyObject *))(*(_QWORD *)this + 104LL))(this) )
    {
      if ( *((_DWORD *)this + 30) )
        DirectComposition::CDevice::ResourceSetCallbackId(
          *(DirectComposition::CDevice **)(v2 + 456),
          *((_DWORD *)this + 32),
          0);
    }
    DirectComposition::CDevice::ChannelReleaseResource(
      *(DirectComposition::CDevice **)(v2 + 456),
      *((_DWORD *)this + 32));
    *((_DWORD *)this + 32) = 0;
  }
}
