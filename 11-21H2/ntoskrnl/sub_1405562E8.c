/*
 * XREFs of sub_1405562E8 @ 0x1405562E8
 * Callers:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     sub_1402AA860 @ 0x1402AA860 (sub_1402AA860.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 * Callees:
 *     sub_14020C4B8 @ 0x14020C4B8 (sub_14020C4B8.c)
 *     IoInitializeIrp @ 0x140229D70 (IoInitializeIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 */

PIRP __fastcall sub_1405562E8(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // di
  __int16 v4; // si
  PIRP v5; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PIRP v8; // rcx
  struct _IO_STACK_LOCATION *v9; // rax
  PIRP v10; // rcx
  struct _IO_STACK_LOCATION *v11; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140C470E0 )
    return 0LL;
  v3 = a2 + 2;
  v4 = (char)(a2 + 2);
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140C47008, 1) == 1 )
      KeWaitForSingleObject(&word_140C47010, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_140C47000, 8 * (8 * v3 + v4) + 208, v3);
    qword_140C47000->AllocationFlags = 33;
    v5 = qword_140C47000;
    qword_140C47000->Tail.Overlay.CurrentStackLocation -= 2;
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    v5->CurrentLocation -= 2;
    v5->StackCount -= 2;
    *((_QWORD *)&v5->Tail.CompletionKey + 10) = CurrentStackLocation;
    if ( sub_14020C4B8() )
      sub_140556BE4(qword_140C47000);
    return qword_140C47000;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange(&dword_140C47030, 1) == 1 )
      KeWaitForSingleObject(&word_140C47038, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_140C47028, 72 * v3 + 208, v3);
    qword_140C47028->AllocationFlags = 33;
    v8 = qword_140C47028;
    qword_140C47028->Tail.Overlay.CurrentStackLocation -= 2;
    v9 = v8->Tail.Overlay.CurrentStackLocation;
    v8->CurrentLocation -= 2;
    v8->StackCount -= 2;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v9;
    if ( sub_14020C4B8() )
      sub_140556BE4(qword_140C47028);
    return qword_140C47028;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_140C47058, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_140C47060, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_140C47050, 72 * v3 + 208, v3);
  qword_140C47050->AllocationFlags = 33;
  v10 = qword_140C47050;
  qword_140C47050->Tail.Overlay.CurrentStackLocation -= 2;
  v11 = v10->Tail.Overlay.CurrentStackLocation;
  v10->CurrentLocation -= 2;
  v10->StackCount -= 2;
  *((_QWORD *)&v10->Tail.CompletionKey + 10) = v11;
  if ( sub_14020C4B8() )
    sub_140556BE4(qword_140C47050);
  return qword_140C47050;
}
