/*
 * XREFs of sub_1409EF190 @ 0x1409EF190
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_14041AAB8 @ 0x14041AAB8 (sub_14041AAB8.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_140460DBA @ 0x140460DBA (sub_140460DBA.c)
 *     sub_140636708 @ 0x140636708 (sub_140636708.c)
 *     sub_14088399A @ 0x14088399A (sub_14088399A.c)
 *     sub_1409F209C @ 0x1409F209C (sub_1409F209C.c)
 */

void __fastcall __noreturn sub_1409EF190(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  PSLIST_ENTRY v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // ecx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  PVOID Object[2]; // [rsp+40h] [rbp-78h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-68h] BYREF

  Object[0] = (PVOID)(a1 + 848);
  Object[1] = (PVOID)(a1 + 784);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v2 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray);
          v3 = v2;
        }
        while ( v2 >= 2 );
        KeResetEvent((PRKEVENT)Object[v2]);
        if ( v3 )
          break;
        v4 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 832));
        while ( v4 )
        {
          v5 = (__int64)v4;
          v4 = v4->Next;
          v6 = *(_QWORD *)(v5 + 16);
          switch ( v6 )
          {
            case 1342288122LL:
              sub_1409F209C(a1, v5);
              sub_140460DBA(a1, a1 + 624, (_SLIST_ENTRY *)v5);
              break;
            case 3401298175LL:
              sub_14088399A(a1, v5);
              sub_14041AAB8(a1, v5);
              break;
            case 4054171642LL:
              KeSetEvent((PRKEVENT)(v5 + 48), 0, 0);
              break;
          }
        }
      }
      if ( v3 == 1 )
      {
        v7 = MEMORY[0xFFFFF78000000320];
        if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 808)) >= 0x40 )
        {
          *(_DWORD *)(a1 + 808) = MEMORY[0xFFFFF78000000320];
          v8 = *(_QWORD **)(a1 + 688);
          *(_DWORD *)(a1 + 812) = v7;
          if ( v8 != (_QWORD *)(a1 + 688) )
            break;
        }
      }
    }
    do
    {
      v9 = (__int64)(v8 - 2);
      if ( *((_DWORD *)v8 + 8) )
      {
        *(_DWORD *)(v9 + 48) = 0;
        sub_140636708(a1, v9);
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != (_QWORD *)(a1 + 688) );
  }
}
