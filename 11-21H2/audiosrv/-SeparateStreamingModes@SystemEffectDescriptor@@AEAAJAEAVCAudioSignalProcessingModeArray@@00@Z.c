/*
 * XREFs of ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x18004921C
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004816C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180048610 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180048F04 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::SeparateStreamingModes(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        struct CAudioSignalProcessingModeArray *a3,
        struct CAudioSignalProcessingModeArray *a4)
{
  unsigned int v4; // ebx
  __int64 *v9; // rdi
  __int64 v10; // rax
  int v11; // r8d
  int v12; // ecx
  _QWORD *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  _OWORD *v16; // rax
  _OWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  if ( *((int *)a2 + 2) <= 0 )
    return 0LL;
  while ( 1 )
  {
    v9 = (__int64 *)*((_QWORD *)this + 2);
    if ( v9 )
    {
      v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a2, v4);
      v11 = *((_DWORD *)v9 + 2);
      v12 = 0;
      v13 = (_QWORD *)v10;
      if ( v11 > 0 )
      {
        v14 = *v9;
        while ( 1 )
        {
          v15 = *(_QWORD *)(v14 + 16LL * v12) - *v13;
          if ( !v15 )
            v15 = *(_QWORD *)(v14 + 16LL * v12 + 8) - v13[1];
          if ( !v15 )
            break;
          if ( ++v12 >= v11 )
            goto LABEL_13;
        }
        if ( v12 != -1 )
          break;
      }
    }
LABEL_13:
    v18 = (_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a2, v4);
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)a4, v18) )
    {
      v19 = 257LL;
      goto LABEL_16;
    }
LABEL_10:
    if ( (signed int)++v4 >= *((_DWORD *)a2 + 2) )
      return 0LL;
  }
  v16 = (_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a2, v4);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)a3, v16) )
    goto LABEL_10;
  v19 = 252LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v20);
  return 2147942414LL;
}
