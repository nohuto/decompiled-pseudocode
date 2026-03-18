/*
 * XREFs of ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180080EB8
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180023750 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18007FA28 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800B3170 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E8760 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800EE4F0 (-SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x180081580 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyScalarPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        float a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // r10d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r11
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v7 = *(unsigned int *)(v4 + 64);
    v8 = *(_QWORD *)(v4 + 48);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1240LL) + 40LL);
    if ( v8 )
      v10 = *(_DWORD *)(v8 + 76);
    else
      v10 = 0;
    v13[0] = v10;
    v13[1] = v7;
    v11 = CoreUICallSend(v9, v13, 2LL, 14LL, 0, &unk_18033C085, v5, a3);
    v3 = v11;
    if ( v11 == -2018375675 )
    {
      return 0;
    }
    else if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC6u, 0LL);
    }
  }
  return v3;
}
