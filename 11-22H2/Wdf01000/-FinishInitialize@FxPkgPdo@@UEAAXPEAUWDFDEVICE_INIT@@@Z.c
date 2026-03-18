/*
 * XREFs of ?FinishInitialize@FxPkgPdo@@UEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C0068AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x1C00724A0 (-FinishInitialize@FxPkgPnp@@UEAAXPEAUWDFDEVICE_INIT@@@Z.c)
 */

void __fastcall FxPkgPdo::FinishInitialize(FxPkgPdo *this, WDFDEVICE_INIT *DeviceInit)
{
  this->m_DefaultLocale = DeviceInit->Pdo.DefaultLocale;
  this->m_DeviceTextHead.Next = DeviceInit->Pdo.DeviceText.Next;
  DeviceInit->Pdo.DeviceText.Next = 0LL;
  FxPkgPnp::FinishInitialize(this, DeviceInit);
}
