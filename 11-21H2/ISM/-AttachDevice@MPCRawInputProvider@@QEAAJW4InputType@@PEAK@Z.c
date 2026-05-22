/*
 * XREFs of ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800B613C
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800B7164 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002DBC0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEAV21@@Z @ 0x1800B5710 (--$_Emplace_reallocate@AEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@@-$vector@V-$shared_ptr@ULegacy.c)
 *     ??$make_shared@ULegacyDeviceInfo@@$$V@std@@YA?AV?$shared_ptr@ULegacyDeviceInfo@@@0@XZ @ 0x1800B5BBC (--$make_shared@ULegacyDeviceInfo@@$$V@std@@YA-AV-$shared_ptr@ULegacyDeviceInfo@@@0@XZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800B5CC8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x1800B6264 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCRawInputProvider::AttachDevice(__int64 a1, int a2, _DWORD *a3)
{
  int v6; // eax
  _DWORD *v7; // rcx
  _QWORD *v8; // rcx
  void *v9; // rdx
  __int64 v10; // r9
  _DWORD *v12; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-10h]

  std::make_shared<LegacyDeviceInfo,>(&v12);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  v7 = v12;
  *v12 = v6;
  v7[1] = a2;
  if ( GetCurrentThreadId() == *(_DWORD *)(a1 + 88) && *(_BYTE *)(a1 + 80) )
  {
    MPCRawInputProvider::AttachDeviceImpl(a1, &v12);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
    v8 = *(_QWORD **)(a1 + 144);
    if ( v8 == *(_QWORD **)(a1 + 152) )
    {
      std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Emplace_reallocate<std::shared_ptr<LegacyDeviceInfo> &>(
        (__int64 *)(a1 + 136),
        *(_QWORD *)(a1 + 144),
        (__int64)&v12);
    }
    else
    {
      std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v8, &v12);
      *(_QWORD *)(v10 + 8) += 16LL;
    }
    wil::details::SetEvent(*(wil::details **)(a1 + 72), v9);
    if ( a1 != -96 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  }
  *a3 = *v12;
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return 0LL;
}
