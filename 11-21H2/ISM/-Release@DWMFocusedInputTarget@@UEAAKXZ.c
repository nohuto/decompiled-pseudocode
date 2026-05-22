/*
 * XREFs of ?Release@DWMFocusedInputTarget@@UEAAKXZ @ 0x18000D840
 * Callers:
 *     ?Release@DWMFocusedInputTarget@@W7EAAKXZ @ 0x1800533C0 (-Release@DWMFocusedInputTarget@@W7EAAKXZ.c)
 *     ?Release@DWMFocusedInputTarget@@WBA@EAAKXZ @ 0x1800533E0 (-Release@DWMFocusedInputTarget@@WBA@EAAKXZ.c)
 *     ?Release@DWMFocusedInputTarget@@WBI@EAAKXZ @ 0x180053400 (-Release@DWMFocusedInputTarget@@WBI@EAAKXZ.c)
 *     ?Release@DWMFocusedInputTarget@@WCA@EAAKXZ @ 0x180053420 (-Release@DWMFocusedInputTarget@@WCA@EAAKXZ.c)
 *     ?Release@DWMFocusedInputTarget@@WCI@EAAKXZ @ 0x180053440 (-Release@DWMFocusedInputTarget@@WCI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMFocusedInputTarget::Release(DWMFocusedInputTarget *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = (char *)this + 40;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 12);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 12) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 40);
    v5 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(v5 + 24))(v1, 1LL);
  }
  return v2;
}
