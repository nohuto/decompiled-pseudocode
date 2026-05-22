/*
 * XREFs of ?RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180021EF0
 * Callers:
 *     ??1CAtlasSurfacePool@DirectComposition@@EEAA@XZ @ 0x18005E68C (--1CAtlasSurfacePool@DirectComposition@@EEAA@XZ.c)
 *     ??1CSharedSectionBase@DirectComposition@@UEAA@XZ @ 0x18007EB8C (--1CSharedSectionBase@DirectComposition@@UEAA@XZ.c)
 *     wil::details::lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___::_lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___ @ 0x1800EC47C (wil--details--lambda_call__lambda_e24b03a775d3b3014d77bcb03a78899a___--_lambda_call__lambda_e24b.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z @ 0x1800248F8 (-FromProxy@CProxyTable@DirectComposition@@SAPEAV12@PEAX@Z.c)
 *     ?FreeProxy@CProxyTable@DirectComposition@@QEAAXPEAX@Z @ 0x18002493C (-FreeProxy@CProxyTable@DirectComposition@@QEAAXPEAX@Z.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z @ 0x180058BA0 (-ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CDevice::RemoveNoRefProxy(void *a1)
{
  DirectComposition::CDevice **v2; // rax
  DirectComposition::CProxyTable *v3; // rsi
  DirectComposition::CDevice *v4; // rbx
  DirectComposition::CDeviceLock *v5; // rbp
  unsigned int v6; // r8d

  v2 = (DirectComposition::CDevice **)DirectComposition::CProxyTable::FromProxy(a1);
  v3 = (DirectComposition::CProxyTable *)v2;
  if ( v2 )
  {
    v4 = *v2;
    v5 = (DirectComposition::CDevice *)((char *)*v2 + 96);
    DirectComposition::CDeviceLock::Enter(v5);
    DirectComposition::CProxyTable::FreeProxy(v3, a1);
    DirectComposition::CDevice::ChannelReleaseResource(v4, v6);
    if ( v5 )
      DirectComposition::CDeviceLock::Leave(v5);
  }
}
