/*
 * XREFs of ?Cancel@CSynchronizationContext11Driver@@UEAAJU_LUID@@_K1@Z @ 0x1801B1AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSynchronizationContext11Driver::Cancel(
        CSynchronizationContext11Driver *this,
        struct _LUID a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 144LL))(*((_QWORD *)this + 2));
      v3 = v4;
      if ( v4 < 0 )
        DoStackCaptureDirect(v4, 0x60u);
    }
  }
  return v3;
}
