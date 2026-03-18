/*
 * XREFs of ??1DispBrokerClient@@QEAA@XZ @ 0x1C0002668
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C015FE30 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C0002690 (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001EE84 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 */

void __fastcall DispBrokerClient::~DispBrokerClient(DispBrokerClient *this)
{
  DispBrokerClient::DisableDisplayBroker(this);
  DispBrokerClientReference::Assign((DispBrokerClient *)((char *)this + 48), 0LL);
}
