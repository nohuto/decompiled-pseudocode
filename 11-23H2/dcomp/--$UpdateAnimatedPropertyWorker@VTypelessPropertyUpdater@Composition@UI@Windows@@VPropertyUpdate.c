/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@VTypelessPropertyUpdater@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAVTypelessPropertyUpdater@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180072480
 * Callers:
 *     ?OnAnimatedPropertyChanged@CompositionSpriteShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z @ 0x180070E40 (-OnAnimatedPropertyChanged@CompositionSpriteShape@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_.c)
 *     ?UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXGAEBV?$span@QEBUAnimatedProperty@AnimationHelper@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x1800723CC (-UpdateAnimatedProperty@ProxyObject@Composition@UI@Windows@@IEAA_NIIW4DCOMPOSITION_EXPRESSION_TY.c)
 * Callees:
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z @ 0x180070BDC (-MergeValueWithMask@AnimationHelper@Composition@UI@Windows@@YAXPEAXPEBXG_K@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::TypelessPropertyUpdater,Windows::UI::Composition::PropertyUpdateInfo>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        char a5,
        unsigned __int16 a6)
{
  float *v9; // r10
  size_t v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  char v13; // cl
  size_t v14; // rax
  size_t v15; // rax
  float v16; // eax

  if ( a5 )
  {
    v9 = *(float **)(a2 + 8);
    v10 = *(_QWORD *)(a2 + 16);
    v11 = *a3;
    if ( *(_BYTE *)(*a3 + 21) )
      v12 = *(_DWORD *)(v11 + 12);
    else
      v12 = *(_DWORD *)(v11 + 8);
    v13 = *(_BYTE *)(v11 + 20);
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          v12,
          v9,
          v10);
      }
      else
      {
        v14 = v10 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 != 2 )
              Microsoft::WRL2::FailFast::Unexpected(0LL);
            v16 = *v9;
          }
          else
          {
            LODWORD(v16) = *(unsigned __int16 *)v9;
          }
        }
        else
        {
          LODWORD(v16) = *(unsigned __int8 *)v9;
        }
        DirectComposition::CDevice::ResourceSetIntegerProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          v12,
          SLODWORD(v16));
      }
    }
    else
    {
      DirectComposition::CDevice::ResourceSetFloatProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
        *(_DWORD *)(a1 + 128),
        v12,
        *v9);
    }
  }
  if ( a4 )
    Windows::UI::Composition::AnimationHelper::MergeValueWithMask(
      *(Windows::UI::Composition::AnimationHelper **)a2,
      *(void **)(a2 + 8),
      (const void *)a6,
      *(_QWORD *)(a2 + 16));
}
