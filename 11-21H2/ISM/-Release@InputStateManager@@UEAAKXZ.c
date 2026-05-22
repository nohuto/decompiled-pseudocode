/*
 * XREFs of ?Release@InputStateManager@@UEAAKXZ @ 0x180011520
 * Callers:
 *     ?Release@InputStateManager@@W7EAAKXZ @ 0x18004F2E0 (-Release@InputStateManager@@W7EAAKXZ.c)
 *     ?Release@InputStateManager@@WBA@EAAKXZ @ 0x18004F300 (-Release@InputStateManager@@WBA@EAAKXZ.c)
 *     ?Release@InputStateManager@@WBI@EAAKXZ @ 0x18004F320 (-Release@InputStateManager@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::Release(InputStateManager *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = (char *)this + 24;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 8) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 24);
    v5 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(v5 + 24))(v1, 1LL);
  }
  return v2;
}
