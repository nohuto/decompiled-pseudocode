/*
 * XREFs of sub_140A805EC @ 0x140A805EC
 * Callers:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 * Callees:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140559770 @ 0x140559770 (sub_140559770.c)
 *     sub_140A80FC8 @ 0x140A80FC8 (sub_140A80FC8.c)
 *     sub_140A8C08C @ 0x140A8C08C (sub_140A8C08C.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

void __fastcall sub_140A805EC(IRP *BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  ULONG_PTR CancelRoutine; // r8
  ULONG_PTR Status; // rax
  bool v7; // sf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char Control; // al
  __int64 v10; // [rsp+30h] [rbp-59h] BYREF
  __int128 v11; // [rsp+38h] [rbp-51h]
  __int64 v12; // [rsp+48h] [rbp-41h]
  void *v13; // [rsp+50h] [rbp-39h]
  _QWORD v14[3]; // [rsp+58h] [rbp-31h] BYREF
  PIO_COMPLETION_ROUTINE CompletionRoutine; // [rsp+70h] [rbp-19h]
  __int128 v16; // [rsp+78h] [rbp-11h]
  __int128 v17; // [rsp+88h] [rbp-1h]
  __int128 v18; // [rsp+98h] [rbp+Fh]
  __int128 v19; // [rsp+A8h] [rbp+1Fh]
  PVOID Context; // [rsp+B8h] [rbp+2Fh]
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  sub_140A80FC8(BugCheckParameter1);
  if ( (dword_140C29FC0 & 0x10) != 0 && !dword_140D018F8 )
  {
    if ( BugCheckParameter1->CurrentLocation > (char)(BugCheckParameter1->StackCount + 1)
      || BugCheckParameter1->Type != 6 )
    {
      sub_140A8C924(0x44u, (ULONG_PTR)BugCheckParameter1, 0x489uLL, 0LL, 0LL);
    }
    CancelRoutine = (ULONG_PTR)BugCheckParameter1->CancelRoutine;
    if ( CancelRoutine )
      sub_140A8C924(0xC9u, 7uLL, CancelRoutine, (ULONG_PTR)BugCheckParameter1, 0LL);
    Status = BugCheckParameter1->IoStatus.Status;
    if ( (_DWORD)Status == 259 || (_DWORD)Status == -1 )
      sub_140A8C924(0xC9u, 6uLL, Status, (ULONG_PTR)BugCheckParameter1, 0LL);
    if ( KeGetCurrentIrql() > 2u )
      sub_140A8C924(0xC9u, 0xEuLL, KeGetCurrentIrql(), (ULONG_PTR)BugCheckParameter1, 0LL);
  }
  LOBYTE(v4) = a2;
  v13 = retaddr;
  sub_140A8C08C(BugCheckParameter1, v4, &v10);
  if ( (!dword_140D018F8 || v10) && BugCheckParameter1->CurrentLocation <= BugCheckParameter1->StackCount )
  {
    v7 = BugCheckParameter1->IoStatus.Status < 0;
    CurrentStackLocation = BugCheckParameter1->Tail.Overlay.CurrentStackLocation;
    v14[2] = &v10;
    v14[1] = CurrentStackLocation->Context;
    v14[0] = CurrentStackLocation;
    v16 = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    v17 = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    v18 = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota + 6);
    v19 = *(_OWORD *)&CurrentStackLocation->FileObject;
    Context = CurrentStackLocation->Context;
    Control = CurrentStackLocation->Control;
    if ( v7 )
    {
      if ( Control < 0 )
        goto LABEL_18;
    }
    else if ( (Control & 0x40) != 0 )
    {
      goto LABEL_18;
    }
    if ( !BugCheckParameter1->Cancel || (Control & 0x20) == 0 )
    {
      CompletionRoutine = 0LL;
      CurrentStackLocation->Control |= 0xE0u;
      goto LABEL_19;
    }
LABEL_18:
    CompletionRoutine = CurrentStackLocation->CompletionRoutine;
LABEL_19:
    CurrentStackLocation->CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_140A80D10;
    CurrentStackLocation->Context = v14;
  }
  if ( (dword_140D0110C & 2) != 0 )
    sub_140559770((__int64)BugCheckParameter1, a2);
  else
    sub_1402B59D0(BugCheckParameter1, a2);
}
