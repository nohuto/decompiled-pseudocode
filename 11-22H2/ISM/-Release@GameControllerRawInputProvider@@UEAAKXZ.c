/*
 * XREFs of ?Release@GameControllerRawInputProvider@@UEAAKXZ @ 0x18001AAB0
 * Callers:
 *     ?Release@GameControllerRawInputProvider@@W7EAAKXZ @ 0x180079E30 (-Release@GameControllerRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBA@EAAKXZ @ 0x180079E50 (-Release@GameControllerRawInputProvider@@WBA@EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x180079E70 (-Release@GameControllerRawInputProvider@@WBI@EAAKXZ.c)
 *     ?Release@GameControllerRawInputProvider@@WCA@EAAKXZ @ 0x180079E90 (-Release@GameControllerRawInputProvider@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GameControllerRawInputProvider::Release(GameControllerRawInputProvider *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (_DWORD *)((char *)this + 32);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    *((_DWORD *)this + 10) = 1;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 32);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
