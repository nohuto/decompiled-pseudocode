/*
 * XREFs of ??$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Z @ 0x1800414E4
 * Callers:
 *     ?HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x1800413A4 (-HampSystemBamStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ??0CBackgroundAccessStateChangedListener@@QEAA@XZ @ 0x1800416AC (--0CBackgroundAccessStateChangedListener@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800494E4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VCBackgroundAccessStateChangedListener@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008DB5C (--1-$MakeAllocator@VCBackgroundAccessStateChangedListener@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBackgroundAccessStateChangedListener,IBackgroundAccessStateChangeHandler,_HOST_ACTIVITY_MANAGER * &,unsigned long &>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  CBackgroundAccessStateChangedListener *v6; // rax
  CBackgroundAccessStateChangedListener *v7; // rdi
  int v8; // edx
  unsigned int v9; // ebx
  CBackgroundAccessStateChangedListener *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (CBackgroundAccessStateChangedListener *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( v6 )
  {
    v7 = CBackgroundAccessStateChangedListener::CBackgroundAccessStateChangedListener(v6);
    v8 = *a3;
    *((_QWORD *)v7 + 5) = *a2;
    *((_DWORD *)v7 + 12) = v8;
    v9 = (**(__int64 (__fastcall ***)(CBackgroundAccessStateChangedListener *, GUID *, _QWORD *))v7)(
           v7,
           &GUID_43c6b434_c1be_4ad2_af03_c0deaccebd1f,
           a1);
    (*(void (__fastcall **)(CBackgroundAccessStateChangedListener *))(*(_QWORD *)v7 + 16LL))(v7);
    return v9;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBackgroundAccessStateChangedListener>::~MakeAllocator<CBackgroundAccessStateChangedListener>(&v11);
    return 2147942414LL;
  }
}
