/*
 * XREFs of ?Opacity@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800A2660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentTransitionAnimatedVisual::Opacity(
        CAccentTransitionAnimatedVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rcx

  v2 = 0;
  if ( *((_DWORD *)this + 8) == 1 )
  {
    v3 = (_DWORD *)*((_QWORD *)this + 3);
    v3[94] = *((_DWORD *)a2 + 5);
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 0x2000LL);
  }
  else if ( *((_DWORD *)this + 8) != 2
         && *((_DWORD *)this + 8) != 3
         && *((_DWORD *)this + 8) != 4
         && (unsigned int)(*((_DWORD *)this + 8) - 5) >= 2 )
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
