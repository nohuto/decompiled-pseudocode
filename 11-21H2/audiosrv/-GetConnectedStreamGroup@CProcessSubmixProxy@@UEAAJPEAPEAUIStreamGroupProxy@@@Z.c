/*
 * XREFs of ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18000AF10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::GetConnectedStreamGroup(
        CProcessSubmixProxy *this,
        struct IStreamGroupProxy **a2)
{
  struct IStreamGroupProxy *v2; // rcx

  v2 = (struct IStreamGroupProxy *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
