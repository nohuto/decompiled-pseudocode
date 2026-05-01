/*
 * XREFs of ??1CThreadRefTaker@@UEAA@XZ @ 0x1800A4460
 * Callers:
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x1800A3F50 (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1803C30C0 (--_GCThreadRefTaker@@UEAAPEAXI@Z.c)
 *     ??1StartupTaskActivatedEventArgsImpl@@EEAA@XZ @ 0x1805716D4 (--1StartupTaskActivatedEventArgsImpl@@EEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
