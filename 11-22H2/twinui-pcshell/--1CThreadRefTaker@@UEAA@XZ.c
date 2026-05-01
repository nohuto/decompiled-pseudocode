/*
 * XREFs of ??1CThreadRefTaker@@UEAA@XZ @ 0x1800EB344
 * Callers:
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x1800EB38C (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x18049C5E0 (--_GCThreadRefTaker@@UEAAPEAXI@Z.c)
 *     ??1StartupTaskActivatedEventArgsImpl@@EEAA@XZ @ 0x18062F4B8 (--1StartupTaskActivatedEventArgsImpl@@EEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CThreadRefTaker::~CThreadRefTaker(CThreadRefTaker *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
