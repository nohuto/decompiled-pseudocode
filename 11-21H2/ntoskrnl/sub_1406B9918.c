/*
 * XREFs of sub_1406B9918 @ 0x1406B9918
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     KeRemoveQueue @ 0x14023FFE0 (KeRemoveQueue.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14078F0FC @ 0x14078F0FC (sub_14078F0FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406B9918(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  void *v5; // rcx
  LARGE_INTEGER v7; // rax
  NTSTATUS v8; // ebx
  PVOID v9; // rbp
  PLIST_ENTRY v10; // rax
  PLIST_ENTRY v11; // rdi
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int Flink_high; // eax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = (void *)*a1;
  v7.QuadPart = -10000LL * a1[1];
  Object = 0LL;
  Timeout = v7;
  v8 = ObReferenceObjectByHandle(v5, 4u, qword_140D06AE8, 1, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = Object;
    if ( (*((_BYTE *)Object + 98) & 4) != 0 )
    {
      v10 = KeRemoveQueue(*((PRKQUEUE *)Object + 6), 1, &Timeout);
      v11 = v10;
      if ( v10 == (PLIST_ENTRY)258 || v10 == (PLIST_ENTRY)192 )
      {
        v8 = (int)v10;
      }
      else
      {
        Flink = v10[1].Flink;
        Flink_high = HIDWORD(Flink->Flink);
        if ( Flink_high > a2 )
        {
          v8 = -1073741789;
        }
        else
        {
          memmove(a1, Flink, Flink_high);
          Flink_high = HIDWORD(Flink->Flink);
          v8 = 0;
        }
        *a3 = Flink_high;
        sub_14078F0FC(Flink);
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      v8 = -1073741816;
    }
    ObfDereferenceObject(v9);
  }
  return (unsigned int)v8;
}
