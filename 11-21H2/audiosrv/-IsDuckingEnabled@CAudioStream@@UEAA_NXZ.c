/*
 * XREFs of ?IsDuckingEnabled@CAudioStream@@UEAA_NXZ @ 0x1800E4CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CAudioStream::IsDuckingEnabled(CAudioStream *this)
{
  return !_InterlockedCompareExchange((volatile signed __int32 *)this + 130, 1, 1)
      && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 120LL))(*((_QWORD *)this + 6));
}
