/*
 * XREFs of ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18014EB3C
 * Callers:
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18003083C (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18003CE44 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18014EB0C (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180067992 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800759E8 (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(__int64 a1, int a2)
{
  int v3; // r8d
  int v4; // r8d
  __int64 v5; // rcx
  unsigned __int64 v6; // r9

  if ( a2 < 0 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( a2 >= v3 )
    return 0LL;
  if ( a2 != v3 - 1 )
  {
    v4 = v3 - a2;
    v5 = *(_QWORD *)a1 + 16LL * a2;
    v6 = 16LL * (v4 - 1);
    if ( v6 )
    {
      if ( !v5 || v5 == -16 )
      {
        *(_DWORD *)_o__errno(v5) = 22;
        goto LABEL_10;
      }
      if ( 16LL * v4 < v6 )
      {
        *(_DWORD *)_o__errno(v5) = 34;
LABEL_10:
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0((void *)v5, (const void *)(v5 + 16), 16LL * (v4 - 1));
    }
  }
  --*(_DWORD *)(a1 + 8);
  return 1LL;
}
