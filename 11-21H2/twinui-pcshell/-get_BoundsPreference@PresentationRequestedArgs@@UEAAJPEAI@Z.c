/*
 * XREFs of ?get_BoundsPreference@PresentationRequestedArgs@@UEAAJPEAI@Z @ 0x1802ECE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PresentationRequestedArgs::get_BoundsPreference(PresentationRequestedArgs *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  *a2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
  if ( v3 < 0 )
    return (unsigned int)v3;
  return v2;
}
