/*
 * XREFs of ?Release@SystemButtonProcessor@@UEAAKXZ @ 0x180011980
 * Callers:
 *     ?Release@SystemButtonProcessor@@W7EAAKXZ @ 0x180051180 (-Release@SystemButtonProcessor@@W7EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemButtonProcessor::Release(SystemButtonProcessor *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = (char *)this + 8;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    v4 = *(_QWORD *)v1;
    *((_DWORD *)this + 4) = 1;
    (*(void (__fastcall **)(char *))(v4 + 32))((char *)this + 8);
    v5 = *(_QWORD *)v1;
    *((_DWORD *)v1 + 2) = 0;
    (*(void (__fastcall **)(char *, __int64))(v5 + 24))(v1, 1LL);
  }
  return v2;
}
