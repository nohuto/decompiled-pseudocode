/*
 * XREFs of ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180033E70
 * Callers:
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002FE8C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800322F0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA.c)
 *     ?ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033DE4 (-ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180032188 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180042160 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18004B0A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800F0FC8 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x180154544 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::ResolveAllOverridingChains(SystemEffectDescriptor *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r12
  _QWORD *v3; // rdx
  signed int v4; // ebx
  volatile signed __int32 **v5; // rbp
  __int64 v6; // rdi
  unsigned int v7; // r14d
  int v8; // r15d
  __int64 v9; // r12
  unsigned int v10; // r13d
  __int64 v11; // rax
  volatile signed __int32 **v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  volatile signed __int32 **v15; // r14
  volatile signed __int32 **v16; // rsi
  volatile signed __int32 *v17; // rbx
  SystemEffectChainDescriptor **v19; // rax
  int v20; // eax
  unsigned int v21; // r15d
  int v22[2]; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+28h] [rbp-40h]
  unsigned int v24; // [rsp+2Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _QWORD *v26; // [rsp+70h] [rbp+8h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+78h] [rbp+10h]

  if ( !*((_BYTE *)this + 52) )
    return 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v4 = 0;
  v5 = 0LL;
  *(_QWORD *)v22 = 0LL;
  v6 = 0LL;
  v23 = 0;
  v7 = 0;
  v24 = 0;
  v8 = 0;
  if ( *((int *)this + 10) > 0 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 < 0 || v8 >= *((_DWORD *)this + 10) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v3);
        __debugbreak();
      }
      v3 = (_QWORD *)(v9 + *((_QWORD *)this + 4));
      v26 = v3;
      if ( (_DWORD)v6 == v7 )
      {
        if ( v7 )
        {
          v10 = 2 * v6;
          if ( (v6 & 0x40000000) != 0 )
            goto LABEL_39;
        }
        else
        {
          v10 = 1;
        }
        LODWORD(v3) = v10;
        if ( v10 > 0x7FFFFFFuLL || (v11 = _o__recalloc(v5, v10, 16LL)) == 0 )
        {
LABEL_39:
          v14 = 0;
          goto LABEL_17;
        }
        v7 = v10;
        v24 = v10;
        v5 = (volatile signed __int32 **)v11;
        *(_QWORD *)v22 = v11;
        v3 = v26;
      }
      v12 = &v5[2 * (int)v6];
      if ( v12 )
      {
        *v12 = 0LL;
        v12[1] = 0LL;
        v13 = v3[1];
        if ( v13 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
          v7 = v24;
          LODWORD(v6) = v23;
          v5 = *(volatile signed __int32 ***)v22;
        }
        *v12 = (volatile signed __int32 *)*v3;
        v12[1] = (volatile signed __int32 *)v3[1];
      }
      v6 = (unsigned int)(v6 + 1);
      v23 = v6;
      v14 = 1;
LABEL_17:
      if ( !v14 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F4,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(v22);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return 2147942414LL;
      }
      ++v8;
      v9 += 16LL;
      if ( v8 >= *((_DWORD *)this + 10) )
      {
        v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
        break;
      }
    }
  }
  if ( (int)v6 <= 0 )
  {
LABEL_26:
    if ( v5 )
    {
      if ( (int)v6 > 0 )
      {
        v16 = v5 + 1;
        do
        {
          v17 = *v16;
          if ( *v16 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v17);
          }
          v16 += 2;
          --v6;
        }
        while ( v6 );
        v5 = *(volatile signed __int32 ***)v22;
      }
      free(v5);
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v15 = v5;
  while ( 1 )
  {
    if ( v4 < 0 || v4 >= (int)v6 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v3);
      __debugbreak();
    }
    if ( *((_BYTE *)*v15 + 20) )
    {
      v19 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                              (__int64)v22,
                                              v4);
      v20 = SystemEffectChainDescriptor::Resolve(*v19, this);
      v21 = v20;
      if ( v20 < 0 )
        break;
    }
    ++v4;
    v15 += 2;
    if ( v4 >= (int)v6 )
      goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FA,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v20);
  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(v22);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v21;
}
