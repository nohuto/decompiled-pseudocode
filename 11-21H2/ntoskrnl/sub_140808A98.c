/*
 * XREFs of sub_140808A98 @ 0x140808A98
 * Callers:
 *     sub_140A540E0 @ 0x140A540E0 (sub_140A540E0.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140808A98(__int64 a1, PETHREAD *a2)
{
  void *v3; // rcx
  unsigned int v5; // ebx
  NTSTATUS v7; // eax
  PETHREAD v8; // rdi
  __int64 Pool2; // rax
  PETHREAD Thread; // [rsp+30h] [rbp+8h] BYREF

  Thread = 0LL;
  v3 = *(void **)(a1 + 72);
  if ( v3 )
  {
    v7 = PsLookupThreadByThreadId(v3, &Thread);
    v8 = Thread;
    v5 = v7;
    if ( v7 >= 0 )
    {
      if ( *((_QWORD *)Thread + 144) == *(_QWORD *)(a1 + 80) )
      {
        Pool2 = ExAllocatePool2(64LL, 168LL, 1146119760LL);
        if ( Pool2 )
        {
          *a2 = v8;
          v5 = 0;
          a2[1] = (PETHREAD)Pool2;
          return v5;
        }
        v5 = -1073741670;
      }
      else
      {
        v5 = -1073741735;
      }
    }
    if ( v8 )
      ObDereferenceObjectDeferDelete(v8);
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v5;
}
