/*
 * XREFs of ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048304
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180047FBC (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180048504 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800483E8 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r11
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r10
  unsigned int v10; // ecx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  int v13; // eax
  unsigned int v14; // ecx
  _QWORD v15[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-18h]

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
    v12 = *((_QWORD *)v5 + 2);
    v15[0] = v10;
    v15[1] = v7;
    v16 = v11;
    v17 = v12;
    v13 = CoreUICallSend(v9, v15, 2LL, 15LL, 7, &unk_18032C443);
    v3 = v13;
    if ( v13 == -2018375675 )
    {
      return 0;
    }
    else if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1FBu, 0LL);
    }
  }
  return v3;
}
