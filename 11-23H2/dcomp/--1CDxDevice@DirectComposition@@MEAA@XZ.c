/*
 * XREFs of ??1CDxDevice@DirectComposition@@MEAA@XZ @ 0x18001B0CC
 * Callers:
 *     ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4 (--1CSurfaceFactory@DirectComposition@@MEAA@XZ.c)
 *     ??_ECDxDevice@DirectComposition@@MEAAPEAXI@Z @ 0x1800F74F0 (--_ECDxDevice@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDxDevice::~CDxDevice(DirectComposition::CDxDevice *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DirectComposition::CDxDevice::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 248);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 208);
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
