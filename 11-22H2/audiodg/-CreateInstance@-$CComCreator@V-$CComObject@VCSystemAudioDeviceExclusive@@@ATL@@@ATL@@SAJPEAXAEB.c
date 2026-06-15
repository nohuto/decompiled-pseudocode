/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005760C
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400574F0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140016128 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001EF68 (-SafeIncrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001F828 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x140056EF0 (--0-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceExclusive>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r14
  CSystemAudioDeviceExclusive *v6; // rax
  CSystemAudioDeviceExclusive *v7; // rdi
  int v8; // ebx
  CSystemAudioDeviceExclusive *v11; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v8 = -2147024882;
    v6 = (CSystemAudioDeviceExclusive *)operator new(0x188uLL);
    v7 = ATL::CComObject<CSystemAudioDeviceExclusive>::CComObject<CSystemAudioDeviceExclusive>(v6);
    v11 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v8 = -2147024882;
    v7 = v11;
  }
  if ( v7 )
  {
    ATL::SafeIncrementReferenceMultiThread((int *)v7 + 74);
    v8 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v7 + 304));
    if ( v8 >= 0 )
    {
      *((_BYTE *)v7 + 344) = 1;
      v8 = 0;
    }
    ATL::SafeDecrementReferenceMultiThread((int *)v7 + 74);
    if ( v8
      || (v8 = (**(__int64 (__fastcall ***)(CSystemAudioDeviceExclusive *, __int64, _QWORD *))v7)(v7, v4, v3)) != 0 )
    {
      (*(void (__fastcall **)(CSystemAudioDeviceExclusive *, __int64))(*(_QWORD *)v7 + 176LL))(v7, 1LL);
    }
  }
  return (unsigned int)v8;
}
