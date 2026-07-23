/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x14075BD80
 * Callers:
 *     sub_140371378 @ 0x140371378 (sub_140371378.c)
 *     sub_14063AFCC @ 0x14063AFCC (sub_14063AFCC.c)
 *     sub_140660E0C @ 0x140660E0C (sub_140660E0C.c)
 *     sub_1406D75F4 @ 0x1406D75F4 (sub_1406D75F4.c)
 *     sub_14075BCC0 @ 0x14075BCC0 (sub_14075BCC0.c)
 *     sub_1407F7D3C @ 0x1407F7D3C (sub_1407F7D3C.c)
 *     sub_140842AF4 @ 0x140842AF4 (sub_140842AF4.c)
 *     sub_14086423C @ 0x14086423C (sub_14086423C.c)
 *     sub_1409FC784 @ 0x1409FC784 (sub_1409FC784.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     RtlRunOnceBeginInitialize @ 0x14075BE60 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x14075BF10 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  int v9; // ebx
  PVOID v11; // r8
  NTSTATUS v12; // eax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v8 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v9 = v8;
  if ( v8 < 0 )
    goto LABEL_12;
  if ( v8 == 259 )
  {
    if ( (unsigned int)sub_14042A5E0(RunOnce, Parameter) )
    {
      if ( Context )
        v11 = *Context;
      else
        v11 = 0LL;
      v9 = RtlRunOnceComplete(RunOnce, 0, v11);
      if ( v9 >= 0 )
      {
        v9 = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v9 = -1073741823;
      v12 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v12 >= 0 )
        goto LABEL_3;
      v9 = v12;
    }
LABEL_12:
    sub_1402AC800((__int64)KeGetCurrentThread());
    RtlRaiseStatus(v9);
  }
LABEL_3:
  sub_1402AC800((__int64)KeGetCurrentThread());
  return v9;
}
