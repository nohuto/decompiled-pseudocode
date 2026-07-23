/*
 * XREFs of sub_14059D070 @ 0x14059D070
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 */

LONG __fastcall sub_14059D070(PRKEVENT Event)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 Flink_high; // r8
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)&Event[1].Header.Lock;
  v3 = *(_QWORD *)(v1 + 8LL * LODWORD(Event[1].Header.WaitListHead.Flink) + 16736);
  v4 = sub_1402CCC50((unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) << 32);
  Flink_high = HIDWORD(Event[1].Header.WaitListHead.Flink);
  v13 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | v4 & 0xFFFFFFFFFFFF0FFFuLL;
  v6 = sub_14025F6B0(v1, &v13, Flink_high, 0xABu);
  v7 = v6;
  if ( v6 >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
  {
    v8 = v13;
    if ( qword_140C50780 && (v13 & 0x10) == 0 )
      v8 = v13 & ~qword_140C50780;
    v9 = HIDWORD(v8);
    LODWORD(Event[1].Header.WaitListHead.Blink) = v9;
    v10 = sub_1402CCC50((unsigned __int64)(v6 + (unsigned int)v9) << 32);
    v11 = *(_QWORD *)v3;
    v13 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | v10 & 0xFFFFFFFFFFFF0FFFuLL;
    HIDWORD(Event[1].Header.WaitListHead.Blink) = v7 + sub_14025F6B0(v1, &v13, v11, 0x6Bu);
  }
  return KeSetEvent(Event, 0, 0);
}
