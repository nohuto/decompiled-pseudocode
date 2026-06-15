/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004D9AC
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140017610 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComAggObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z @ 0x14004D2B4 (--0-$CComAggObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CAPOWrapperSrv>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r14
  void *v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // [rsp+20h] [rbp-38h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v8 = -2147024882;
    v6 = operator new(0xA0uLL);
    v7 = ATL::CComAggObject<CAPOWrapperSrv>::CComAggObject<CAPOWrapperSrv>((__int64)v6);
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
    v8 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v7 + 64));
    if ( v8 < 0
      || (*(_BYTE *)(v7 + 104) = 1, (v8 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v7)(v7, v4, v3)) != 0) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
    }
  }
  return (unsigned int)v8;
}
