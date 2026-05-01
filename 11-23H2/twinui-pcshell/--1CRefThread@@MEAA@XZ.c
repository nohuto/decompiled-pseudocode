/*
 * XREFs of ??1CRefThread@@MEAA@XZ @ 0x1801AD7B0
 * Callers:
 *     ??1CDuiRefThread@@MEAA@XZ @ 0x1801AD6DC (--1CDuiRefThread@@MEAA@XZ.c)
 *     ??_ECRefThread@@MEAAPEAXI@Z @ 0x18048A310 (--_ECRefThread@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRefThread::~CRefThread(CRefThread *this)
{
  CRefThread *v2; // rcx
  CRefThread *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CRefThread::`vftable';
  **((_DWORD **)this + 1) = 1000;
  GetProcessReference(&v3);
  v2 = v3;
  if ( v3 == this )
  {
    SetProcessReference(0LL);
    v2 = v3;
  }
  if ( v2 )
    (*(void (__fastcall **)(CRefThread *))(*(_QWORD *)v2 + 16LL))(v2);
  **((_DWORD **)this + 1) = 0;
}
