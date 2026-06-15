/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140091604
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140091590 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008F714 (--0-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CCrossProcessClientInputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r14
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // [rsp+20h] [rbp-38h]
  void *v10; // [rsp+28h] [rbp-30h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v8 = -2147024882;
    v10 = operator new(0x240uLL);
    v7 = ATL::CComAggObject<CCrossProcessClientInputEndpoint>::CComAggObject<CCrossProcessClientInputEndpoint>(
           (__int64)v10,
           a1);
    v9 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v8 = -2147024882;
    v7 = v9;
  }
  if ( v7 )
  {
    v8 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v7 + 528));
    if ( v8 < 0
      || (*(_BYTE *)(v7 + 568) = 1, (v8 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v7)(v7, v4, v3)) != 0) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
    }
  }
  return (unsigned int)v8;
}
