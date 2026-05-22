/*
 * XREFs of ?Release@ContextualProcessorBuffer@@UEAAKXZ @ 0x180006F40
 * Callers:
 *     ?Release@ContextualProcessorBuffer@@W7EAAKXZ @ 0x180053700 (-Release@ContextualProcessorBuffer@@W7EAAKXZ.c)
 *     ?Release@ContextualProcessorBuffer@@WBA@EAAKXZ @ 0x180053720 (-Release@ContextualProcessorBuffer@@WBA@EAAKXZ.c)
 *     ?Release@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x180053740 (-Release@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextualProcessorBuffer::Release(ContextualProcessorBuffer *this)
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
