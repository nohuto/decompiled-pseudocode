/*
 * XREFs of ??1MagnifierToggleTarget@@UEAA@XZ @ 0x1801DB2FC
 * Callers:
 *     ??_EMagnifierGestureTarget@@UEAAPEAXI@Z @ 0x1801DB420 (--_EMagnifierGestureTarget@@UEAAPEAXI@Z.c)
 *     ??_GMagnifierToggleTarget@@UEAAPEAXI@Z @ 0x1801DB4E0 (--_GMagnifierToggleTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MagnifierToggleTarget::~MagnifierToggleTarget(MagnifierToggleTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 8LL))(v3 + 16);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
