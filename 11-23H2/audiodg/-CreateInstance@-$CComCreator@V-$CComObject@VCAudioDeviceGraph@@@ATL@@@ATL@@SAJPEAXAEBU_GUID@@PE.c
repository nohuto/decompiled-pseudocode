/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140003718
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140003280 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V-$C.c)
 * Callees:
 *     ??0?$CComObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x1400037E4 (--0-$CComObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001EF68 (-SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001F828 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v5; // ebx
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  v6 = operator new(0x198uLL);
  v7 = ATL::CComObject<CAudioDeviceGraph>::CComObject<CAudioDeviceGraph>(v6);
  v8 = v7;
  if ( v7 )
  {
    ATL::SafeIncrementReferenceMultiThread((int *)(v7 + 24));
    v5 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v8 + 32));
    if ( v5 >= 0 )
    {
      *(_BYTE *)(v8 + 72) = 1;
      v5 = 0;
    }
    ATL::SafeDecrementReferenceMultiThread((int *)(v8 + 24));
    if ( v5 || (v5 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v8)(v8, a2, a3)) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 176LL))(v8, 1LL);
  }
  return (unsigned int)v5;
}
