/*
 * XREFs of ?SetInputHandler@CDropFeedback@@UEAAXPEAUIDropFeedbackInputHandler@@@Z @ 0x1805EA650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDropFeedback::SetInputHandler(CDropFeedback *this, struct IDropFeedbackInputHandler *a2)
{
  __int64 v4; // rcx

  if ( *((struct IDropFeedbackInputHandler **)this + 16) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IDropFeedbackInputHandler *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
