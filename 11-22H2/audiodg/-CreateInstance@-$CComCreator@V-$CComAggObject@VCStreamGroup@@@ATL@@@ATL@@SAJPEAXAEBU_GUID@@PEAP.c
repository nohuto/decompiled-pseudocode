/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140050D30
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140003240 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140050250 (--0-$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r14
  void *v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // [rsp+20h] [rbp-38h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v9 = -2147024882;
    v7 = operator new(0x1A8uLL);
    v8 = ATL::CComAggObject<CStreamGroup>::CComAggObject<CStreamGroup>((__int64)v7, a1);
    v10 = v8;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v9 = -2147024882;
    v8 = v10;
  }
  if ( v8 )
  {
    v9 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v8 + 376));
    if ( v9 < 0
      || (*(_BYTE *)(v8 + 416) = 1, (v9 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v8)(v8, v4, v3)) != 0) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
    }
  }
  return (unsigned int)v9;
}
