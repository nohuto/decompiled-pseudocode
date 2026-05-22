/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x18013EF3C
 * Callers:
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector4@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector4@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18013ED2C (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector4@Numerics@Foundation@Windows@@@Composi.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180152DFC (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UQuaternion@Numerics@Foundation@Windows@@@Comp.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Quaternion>,Windows::UI::Composition::PropertyUpdateInfo>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  float *v5; // r9
  int v6; // r8d
  char v7; // cl

  v3 = *a3;
  v5 = *(float **)(a2 + 8);
  if ( *(_BYTE *)(*a3 + 21) )
    v6 = *(_DWORD *)(v3 + 12);
  else
    v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_BYTE *)(v3 + 20);
  if ( v7 )
  {
    if ( v7 != 1 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    DirectComposition::CDevice::ResourceSetBufferProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      v6,
      v5,
      0x10uLL);
  }
  else
  {
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      v6,
      *v5);
  }
}
