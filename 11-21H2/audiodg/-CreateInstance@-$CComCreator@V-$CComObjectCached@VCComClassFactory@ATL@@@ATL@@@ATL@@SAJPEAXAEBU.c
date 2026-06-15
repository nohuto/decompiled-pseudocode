/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140029600
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14004D78C (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v6; // edi
  _BYTE *v7; // rbx

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = operator new(0x48uLL);
  *((_DWORD *)v7 + 2) = 0;
  *((_OWORD *)v7 + 1) = 0LL;
  *((_OWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 6) = 0LL;
  v7[56] = 0;
  *(_QWORD *)v7 = &ATL::CComObjectCached<ATL::CComClassFactory>::`vftable';
  if ( v7 )
  {
    *((_QWORD *)v7 + 8) = a1;
    v6 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v7 + 16));
    if ( v6 < 0 || (v7[56] = 1, (v6 = (**(__int64 (__fastcall ***)(_BYTE *, __int64, _QWORD *))v7)(v7, a2, a3)) != 0) )
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v7);
  }
  return (unsigned int)v6;
}
