/*
 * XREFs of ?GetClientReleaseEvent@CAudioPump@@UEAAJPEAPEAUICrossProcessEvent@@0@Z @ 0x140073C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioPump::GetClientReleaseEvent(
        CAudioPump *this,
        struct ICrossProcessEvent **a2,
        struct ICrossProcessEvent **a3)
{
  struct ICrossProcessEvent *v5; // rcx
  struct ICrossProcessEvent *v6; // rcx

  v5 = (struct ICrossProcessEvent *)*((_QWORD *)this + 48);
  if ( v5 )
  {
    *a2 = v5;
    (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    *a2 = 0LL;
  }
  v6 = (struct ICrossProcessEvent *)*((_QWORD *)this + 50);
  if ( v6 )
  {
    *a3 = v6;
    (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    *a3 = 0LL;
  }
  return 0LL;
}
