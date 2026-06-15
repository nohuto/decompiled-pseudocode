/*
 * XREFs of ?QueryHardwareSupport@CVolumeStrip@@UEAAJPEAK@Z @ 0x1800D0A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::QueryHardwareSupport(CVolumeStrip *this, unsigned int *a2)
{
  unsigned int v5; // ebx

  if ( !a2 )
    return 2147500035LL;
  v5 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 56LL))(*((_QWORD *)this + 20)) == 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 48LL))(*((_QWORD *)this + 21)) )
    v5 |= 2u;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 56LL))(*((_QWORD *)this + 22)) )
    v5 |= 4u;
  *a2 = v5;
  return 0LL;
}
