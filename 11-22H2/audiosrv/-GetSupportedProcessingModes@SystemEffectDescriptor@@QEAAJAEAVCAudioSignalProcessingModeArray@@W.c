/*
 * XREFs of ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002FE8C
 * Callers:
 *     ?GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x18000DDE8 (-GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18014D018 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180032188 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180033E70 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18003CE44 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800F0FC8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSupportedProcessingModes(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rax
  int j; // edi
  _QWORD *v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rdx
  signed int i; // ebp
  __int64 *v15; // rax
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)a1);
    v6 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      while ( 2 )
      {
        for ( i = 0;
              i < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                           a1 + 32,
                                           v6)
                            + 8LL);
              ++i )
        {
          v15 = (__int64 *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                             a1 + 32,
                             v6);
          v16 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v15, i);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)a2, v16) == -1 )
          {
            v17 = (__int64 *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                               a1 + 32,
                               v6);
            v18 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v17, i);
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a2, v18) )
            {
              v13 = 582LL;
LABEL_20:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v13,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL,
                v19);
              return 2147942414LL;
            }
          }
        }
        if ( (signed int)++v6 < *(_DWORD *)(a1 + 40) )
          continue;
        break;
      }
    }
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 )
    {
      for ( j = 0; j < *(_DWORD *)(v7 + 8); ++j )
      {
        if ( j < 0 || j >= *(_DWORD *)(v7 + 8) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v5);
          JUMPOUT(0x180097604LL);
        }
        v9 = (_QWORD *)(*(_QWORD *)v7 + 16LL * j);
        v10 = 0;
        if ( *(int *)(a2 + 8) <= 0 )
          goto LABEL_14;
        while ( 1 )
        {
          v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v10);
          v11 = *v5 - *v9;
          if ( *v5 == *v9 )
            v11 = v5[1] - v9[1];
          if ( !v11 )
            break;
          if ( ++v10 >= *(_DWORD *)(a2 + 8) )
            goto LABEL_14;
        }
        if ( v10 == -1 )
        {
LABEL_14:
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a2, v9) )
          {
            v13 = 594LL;
            goto LABEL_20;
          }
        }
        v7 = *(_QWORD *)(a1 + 16);
      }
    }
  }
  else
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a2, a1);
    if ( *(_DWORD *)(a2 + 8) != *(_DWORD *)(a1 + 8) )
    {
      v13 = 568LL;
      goto LABEL_20;
    }
  }
  return 0LL;
}
