/*
 * XREFs of ?Release@DWMCursor@@UEAAKXZ @ 0x180048310
 * Callers:
 *     ?Release@DWMCursor@@W7EAAKXZ @ 0x180054420 (-Release@DWMCursor@@W7EAAKXZ.c)
 *     ?Release@DWMCursor@@WBA@EAAKXZ @ 0x180054440 (-Release@DWMCursor@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursor::Release(DWMCursor *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = (char *)this + 16;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 6) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 16);
    v5 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(v5 + 24))(v1, 1LL);
  }
  return v2;
}
