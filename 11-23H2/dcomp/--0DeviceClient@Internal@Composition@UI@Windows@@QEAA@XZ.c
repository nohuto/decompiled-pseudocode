/*
 * XREFs of ??0DeviceClient@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A4DF8
 * Callers:
 *     ??$MakeAndInitialize@VDeviceClient@Internal@Composition@UI@Windows@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A4400 (--$MakeAndInitialize@VDeviceClient@Internal@Composition@UI@Windows@@UIUnknown@@$$V@Details@WRL@M.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x1800654E0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::Internal::DeviceClient::DeviceClient(RTL_SRWLOCK *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)this);
  this->Ptr = &Windows::UI::Composition::Internal::DeviceClient::`vftable';
  this[2].Ptr = 0LL;
  this[3].Ptr = 0LL;
  this[4].Ptr = 0LL;
  InitializeSRWLock(this + 5);
  InitializeSRWLock(this + 6);
  return this;
}
