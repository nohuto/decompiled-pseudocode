/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004DAB0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140006200 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V-$C.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400175D4 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x14004D338 (--0-$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>::CreateInstance(
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
    v7 = operator new(0x1B8uLL);
    v8 = ATL::CComAggObject<CAudioDeviceGraph>::CComAggObject<CAudioDeviceGraph>((__int64)v7, a1);
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
    v9 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v8 + 56));
    if ( v9 < 0
      || (*(_BYTE *)(v8 + 96) = 1, (v9 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v8)(v8, v4, v3)) != 0) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
    }
  }
  return (unsigned int)v9;
}
