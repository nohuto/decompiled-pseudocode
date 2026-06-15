/*
 * XREFs of ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180047DE4
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004816C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180047EC8 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemEffectChainDescriptor::MarkAsUnresolved(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rcx

  v4 = operator new(0x50uLL);
  v6 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
    std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
      v4 + 4,
      a2);
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = v6 + 4;
  v7 = *(std::_Ref_count_base **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v6;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  *(_DWORD *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 20) = 1;
  v8 = *(_QWORD *)(a2 + 56);
  if ( v8 )
  {
    LOBYTE(v5) = v8 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v5);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return 0LL;
}
