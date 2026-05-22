/*
 * XREFs of ??_EDockProcessor@@UEAAPEAXI@Z @ 0x1801E63C8
 * Callers:
 *     ??_EDockProcessor@@WBA@EAAPEAXI@Z @ 0x18007E990 (--_EDockProcessor@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x1801C0974 (--1NonPointerProcessor@@MEAA@XZ.c)
 */

DockProcessor *__fastcall DockProcessor::`vector deleting destructor'(DockProcessor *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 8LL))(v4 + 16);
  NonPointerProcessor::~NonPointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
