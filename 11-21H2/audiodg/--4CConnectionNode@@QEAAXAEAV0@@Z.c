/*
 * XREFs of ??4CConnectionNode@@QEAAXAEAV0@@Z @ 0x14000BD8C
 * Callers:
 *     ??0CConnectionNode@@QEAA@AEAV0@@Z @ 0x14000A5BC (--0CConnectionNode@@QEAA@AEAV0@@Z.c)
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000C580 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CConnectionNode::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *v8; // r15
  volatile __int64 *v9; // r14
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx

  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  v4 = *(_QWORD *)(a1 + 112);
  v5 = *(_QWORD *)(a2 + 112);
  if ( v4 != v5 )
  {
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(a2 + 112));
      v4 = *(_QWORD *)(a1 + 112);
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *(_QWORD *)(a1 + 112) = v5;
  }
  v6 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 120) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 128) = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (__int64 *)(a2 + 160);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  v9 = (volatile __int64 *)(a1 + 160);
  result = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 152) = result;
  if ( a1 + 160 != a2 + 160 )
  {
    v11 = _InterlockedExchange64(v9, 0LL);
    if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
    {
      CloseHandle(*(HANDLE *)v11);
      operator delete((void *)v11);
    }
    result = *v8;
    if ( *v8 )
      _InterlockedIncrement((volatile signed __int32 *)(result + 8));
    *v9 = result;
  }
  v12 = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 136) = v12;
  if ( v12 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  return result;
}
