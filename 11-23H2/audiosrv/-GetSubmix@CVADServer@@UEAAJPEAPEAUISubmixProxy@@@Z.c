/*
 * XREFs of ?GetSubmix@CVADServer@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x18011E350
 * Callers:
 *     AudioServerGetStreamVpoContext @ 0x180122F00 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::GetSubmix(CVADServer *this, struct ISubmixProxy **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v5 = (*(__int64 (__fastcall **)(__int64, struct ISubmixProxy **))(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL) + 120LL))(
         *((_QWORD *)this + 21) + 8LL,
         a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
