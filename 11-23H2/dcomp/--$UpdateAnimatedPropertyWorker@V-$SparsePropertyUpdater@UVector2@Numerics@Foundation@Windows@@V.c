/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180071A38
 * Callers:
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E7FC (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VV.c)
 *     ??$UpdateAnimatedSparseProperty@VVisual@Composition@UI@Windows@@UVector2@Numerics@Foundation@4@P81234@EBA?AU5674@XZP81234@EAAXU5674@@Z@ProxyObject@Composition@UI@Windows@@IEAAXPEAVVisual@123@AEBUVector2@Numerics@Foundation@3@_N2GP84123@EBA?AU5673@XZP84123@EAAXU5673@@ZAEBUAnimatedProperty@AnimationHelper@123@@Z @ 0x18010AC44 (--$UpdateAnimatedSparseProperty@VVisual@Composition@UI@Windows@@UVector2@Numerics@Foundation@4@P.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?UpdateApiValueWithMask@?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@QEBAXG@Z @ 0x18010C5C4 (-UpdateApiValueWithMask@-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Co.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>,Windows::UI::Composition::PropertyUpdateInfo>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        char a5,
        unsigned __int16 a6)
{
  __int64 v9; // rax
  float *v10; // r9
  int v11; // r8d
  char v12; // cl

  if ( a5 )
  {
    v9 = *a3;
    v10 = *(float **)(a2 + 40);
    if ( *(_BYTE *)(*a3 + 21) )
      v11 = *(_DWORD *)(v9 + 12);
    else
      v11 = *(_DWORD *)(v9 + 8);
    v12 = *(_BYTE *)(v9 + 20);
    if ( v12 )
    {
      if ( v12 != 1 )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      DirectComposition::CDevice::ResourceSetBufferProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
        *(_DWORD *)(a1 + 128),
        v11,
        v10,
        8uLL);
    }
    else
    {
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
        *(_DWORD *)(a1 + 128),
        v11,
        *v10);
    }
  }
  if ( a4 )
    Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>::UpdateApiValueWithMask(
      a2,
      a6);
}
