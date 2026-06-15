/*
 * XREFs of ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180042160
 * Callers:
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800318F0 (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180033E70 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$shared_ptr@VEffectPack@@@std@@QEAA@XZ @ 0x1800CBDF0 (--1-$shared_ptr@VEffectPack@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemEffectChainDescriptor::Resolve(
        SystemEffectChainDescriptor *this,
        struct SystemEffectDescriptor *a2)
{
  int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rsi
  std::_Ref_count_base *v7; // rdi
  __int64 v8; // rcx
  int v10[2]; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  SystemEffectChainDescriptor *v13; // [rsp+50h] [rbp+8h] BYREF
  struct SystemEffectDescriptor *v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)v10 = *((_QWORD *)this + 3);
  v5 = *(_QWORD *)v10;
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  v7 = v6;
  v11 = v6;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  v13 = this;
  v14 = a2;
  v8 = *(_QWORD *)(v5 + 56);
  if ( !v8 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, struct SystemEffectDescriptor **, SystemEffectChainDescriptor **))(*(_QWORD *)v8 + 16LL))(
         v8,
         &v14,
         &v13);
  if ( v2 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v2);
    std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(v10);
    return (unsigned int)v2;
  }
  if ( !*((_DWORD *)this + 4) )
  {
    v7 = 0LL;
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    *((_BYTE *)this + 20) = 1;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return 0LL;
}
