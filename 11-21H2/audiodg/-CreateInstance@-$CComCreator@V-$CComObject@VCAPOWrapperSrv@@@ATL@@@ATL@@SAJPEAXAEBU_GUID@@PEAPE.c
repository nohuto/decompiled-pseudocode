/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140017508
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140017610 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ??0?$CComObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z @ 0x14001744C (--0-$CComObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x140027754 (-SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1400293E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v5; // ebx
  CAPOWrapperSrv *v6; // rax
  CAPOWrapperSrv *v7; // rax
  CAPOWrapperSrv *v8; // rdi

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  v6 = (CAPOWrapperSrv *)operator new(0x88uLL);
  v7 = ATL::CComObject<CAPOWrapperSrv>::CComObject<CAPOWrapperSrv>(v6);
  v8 = v7;
  if ( v7 )
  {
    ATL::SafeIncrementReferenceMultiThread((int *)v7 + 8);
    v5 = ATL::CComCriticalSection::Init((CAPOWrapperSrv *)((char *)v8 + 40));
    if ( v5 >= 0 )
    {
      *((_BYTE *)v8 + 80) = 1;
      v5 = 0;
    }
    ATL::SafeDecrementReferenceMultiThread((int *)v8 + 8);
    if ( v5 || (v5 = (**(__int64 (__fastcall ***)(CAPOWrapperSrv *, __int64, _QWORD *))v8)(v8, a2, a3)) != 0 )
      (*(void (__fastcall **)(CAPOWrapperSrv *, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
  }
  return (unsigned int)v5;
}
