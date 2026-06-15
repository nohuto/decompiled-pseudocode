/*
 * XREFs of ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x180031324
 * Callers:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18002CDB8 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180030408 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800F0FC8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::SeparateStreamingModes(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        struct CAudioSignalProcessingModeArray *a3,
        struct CAudioSignalProcessingModeArray *a4)
{
  int v4; // eax
  signed int v5; // ebx
  __int64 *v10; // rdx
  int v11; // r9d
  int v12; // eax
  _QWORD *v13; // r8
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)a2 + 2);
  v5 = 0;
  if ( v4 <= 0 )
    return 0LL;
  while ( 1 )
  {
    v10 = (__int64 *)*((_QWORD *)this + 2);
    if ( v10 )
    {
      if ( v5 < 0 || v5 >= v4 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v10);
        JUMPOUT(0x18007F87ELL);
      }
      v11 = *((_DWORD *)v10 + 2);
      v12 = 0;
      v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v5);
      if ( v11 > 0 )
      {
        v14 = *v10;
        while ( 1 )
        {
          v15 = *(_QWORD *)(v14 + 16LL * v12) - *v13;
          if ( !v15 )
            v15 = *(_QWORD *)(v14 + 16LL * v12 + 8) - v13[1];
          if ( !v15 )
            break;
          if ( ++v12 >= v11 )
            goto LABEL_11;
        }
        if ( v12 != -1 )
          break;
      }
    }
LABEL_11:
    v16 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)a2, v5);
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a4, v16) )
    {
      v18 = 255LL;
      goto LABEL_18;
    }
LABEL_15:
    v4 = *((_DWORD *)a2 + 2);
    if ( ++v5 >= v4 )
      return 0LL;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a3, *(_QWORD *)a2 + 16LL * v5) )
    goto LABEL_15;
  v18 = 250LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v19);
  return 2147942414LL;
}
