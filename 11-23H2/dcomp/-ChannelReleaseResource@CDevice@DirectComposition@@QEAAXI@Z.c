/*
 * XREFs of ?ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z @ 0x180058BA0
 * Callers:
 *     ?RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180021EF0 (-RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?ReleaseResouceHandle@ProxyObject@Composition@UI@Windows@@IEAAXXZ @ 0x1800A34CC (-ReleaseResouceHandle@ProxyObject@Composition@UI@Windows@@IEAAXXZ.c)
 *     wil::details::lambda_call__lambda_aae9143591c8bab91551e322b9127512___::_lambda_call__lambda_aae9143591c8bab91551e322b9127512___ @ 0x18015B52C (wil--details--lambda_call__lambda_aae9143591c8bab91551e322b9127512___--_lambda_call__lambda_aae9.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 */

void __fastcall DirectComposition::CDevice::ChannelReleaseResource(DirectComposition::CDevice *this, int a2)
{
  _DWORD *v4; // r10
  _DWORD *v5; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_DWORD *)(*((_QWORD *)this + 25) + 4 * ((unsigned __int64)(unsigned int)(a2 - 1) >> 5));
  *v4 &= ~(1 << ((a2 - 1) & 0x1F));
  --*((_DWORD *)this + 90);
  DirectComposition::CDevice::BeginKernelCommand(this, 8u, &v6, 0);
  v5 = v6;
  *(_DWORD *)v6 = 3;
  v5[1] = a2;
  DirectComposition::CDevice::NotifyDeviceOwnerOfChange(this);
}
