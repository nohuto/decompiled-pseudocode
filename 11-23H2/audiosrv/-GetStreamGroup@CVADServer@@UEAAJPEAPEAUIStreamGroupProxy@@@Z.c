/*
 * XREFs of ?GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18011E160
 * Callers:
 *     AudioServerGetStreamVpoContext @ 0x180122F00 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::GetStreamGroup(CVADServer *this, struct IStreamGroupProxy **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v5 = (*(__int64 (__fastcall **)(__int64, struct IStreamGroupProxy **))(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL)
                                                                       + 112LL))(
         *((_QWORD *)this + 21) + 8LL,
         a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
