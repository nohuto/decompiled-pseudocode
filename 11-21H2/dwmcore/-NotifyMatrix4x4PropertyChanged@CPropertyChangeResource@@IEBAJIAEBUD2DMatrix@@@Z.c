/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1800477A4
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180047FBC (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180048504 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800483E8 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DMatrix *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r10
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r11
  unsigned int v10; // ecx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  unsigned int v16; // ecx
  _QWORD v17[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int128 v19; // [rsp+60h] [rbp-38h]
  __int128 v20; // [rsp+70h] [rbp-28h]
  __int128 v21; // [rsp+80h] [rbp-18h]

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
    v11 = *v5;
    v12 = v5[1];
    v17[0] = v10;
    v17[1] = v7;
    v18 = v11;
    v13 = v5[2];
    v19 = v12;
    v14 = v5[3];
    v20 = v13;
    v21 = v14;
    v15 = CoreUICallSend(v9, v17, 2LL, 15LL, 8, &unk_18032C449);
    v3 = v15;
    if ( v15 == -2018375675 )
    {
      return 0;
    }
    else if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x228u, 0LL);
    }
  }
  return v3;
}
