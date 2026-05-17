/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x180033048
 * Callers:
 *     RtlGuardRestoreContext @ 0x180035390 (RtlGuardRestoreContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1)
{
  struct _TEB *v1; // rdx
  char *StackLimit; // rax
  void *StackBase; // [rsp+10h] [rbp+10h]

  v1 = NtCurrentTeb();
  StackBase = v1->NtTib.StackBase;
  StackLimit = (char *)v1->NtTib.StackLimit;
  if ( a1 >= (unsigned __int64)StackLimit && a1 <= (unsigned __int64)StackBase )
    return 1LL;
  return StackLimit != v1->DeallocationStack
      && a1 >= (unsigned __int64)(StackLimit - 4096)
      && a1 <= (unsigned __int64)StackBase;
}
