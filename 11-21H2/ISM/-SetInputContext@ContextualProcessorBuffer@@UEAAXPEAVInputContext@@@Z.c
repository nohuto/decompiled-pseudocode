/*
 * XREFs of ?SetInputContext@ContextualProcessorBuffer@@UEAAXPEAVInputContext@@@Z @ 0x1800076B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextualProcessorBuffer::SetInputContext(ContextualProcessorBuffer *this, struct InputContext *a2)
{
  struct InputContext *v4; // rcx

  v4 = (struct InputContext *)*((_QWORD *)this + 17);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct InputContext *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct InputContext *)*((_QWORD *)this + 17);
    }
    *((_QWORD *)this + 17) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct InputContext *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
