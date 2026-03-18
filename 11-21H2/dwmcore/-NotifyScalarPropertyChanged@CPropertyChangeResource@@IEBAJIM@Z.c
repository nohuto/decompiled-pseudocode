/*
 * XREFs of ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x18004832C
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1800205B0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004561C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180047FBC (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180048504 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E6A40 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800EC6B0 (-SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800483E8 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyScalarPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        float a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2) )
  {
    v6 = *(_QWORD *)(v4 + 48);
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1240LL) + 40LL);
    v8 = *(unsigned int *)(v4 + 64);
    if ( v6 )
      v9 = *(_DWORD *)(v6 + 76);
    else
      v9 = 0;
    v12[0] = v9;
    v12[1] = v8;
    v10 = CoreUICallSend(v7, v12, 2LL, 15LL, 0, &unk_18032C41D);
    v3 = v10;
    if ( v10 == -2018375675 )
    {
      return 0;
    }
    else if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC6u, 0LL);
    }
  }
  return v3;
}
