/*
 * XREFs of sub_1C0037120 @ 0x1C0037120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0008DB8 @ 0x1C0008DB8 (sub_1C0008DB8.c)
 *     sub_1C0008E14 @ 0x1C0008E14 (sub_1C0008E14.c)
 *     sub_1C000EF50 @ 0x1C000EF50 (sub_1C000EF50.c)
 *     sub_1C00389F4 @ 0x1C00389F4 (sub_1C00389F4.c)
 *     sub_1C003EF50 @ 0x1C003EF50 (sub_1C003EF50.c)
 *     sub_1C003EFA4 @ 0x1C003EFA4 (sub_1C003EFA4.c)
 */

void __fastcall sub_1C0037120(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  int v3; // ebp
  PSLIST_ENTRY EntrySList; // r14
  int v5; // r15d
  unsigned __int64 v8; // rbx
  int v9; // eax
  KIRQL v10; // al
  KIRQL v11; // di
  struct _SLIST_ENTRY *v12; // rbx
  struct _SLIST_ENTRY *Next; // rax
  struct _SLIST_ENTRY *v14; // rbp
  __int64 v15; // rdi
  struct _SLIST_ENTRY *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax

  v3 = 0;
  EntrySList = 0LL;
  v5 = 0;
  if ( Context )
  {
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003EF50(off_1C0093070->AttachedDevice, 70LL, &unk_1C0083210, *Context, *((_DWORD *)Context + 2));
    }
    v8 = *(_QWORD *)(*Context + 5560LL) + ((unsigned __int64)*((unsigned int *)Context + 2) << 6);
    v9 = sub_1C00389F4(*Context, Context, Context + 2);
    v3 = v9;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 1) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003EFA4(off_1C0093070->AttachedDevice, 71LL, IoWorkItem, *Context, *((_DWORD *)Context + 2), v9);
    }
    if ( v3 >= 0 )
    {
      v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*Context + 5568LL));
      *(_DWORD *)(v8 + 44) = 2;
      v11 = v10;
      EntrySList = FirstEntrySList((PSLIST_HEADER)(v8 + 48));
      InitializeSListHead((PSLIST_HEADER)(v8 + 48));
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(*Context + 5568LL), v11);
    }
  }
  v12 = 0LL;
  if ( EntrySList )
  {
    do
    {
      Next = EntrySList->Next;
      EntrySList->Next = v12;
      v12 = EntrySList;
      EntrySList = Next;
    }
    while ( Next );
  }
  if ( v3 >= 0 && v12 )
  {
    do
    {
      v14 = v12->Next;
      v15 = (__int64)&v12[-2];
      v12->Next = 0LL;
      v16 = v12 - 2;
      v17 = *Context;
      v12 = v14;
      if ( *(_BYTE *)(*Context + 4306LL) )
        v18 = sub_1C0008DB8(v17, (__int64)v16);
      else
        v18 = sub_1C0008E14(v17, v16, (__int64)IoWorkItem);
      if ( v18 < 0 )
      {
        *(_BYTE *)(*(_QWORD *)(v15 + 168) + 3LL) = 4;
        sub_1C000EF50(*Context, v15, 1);
      }
      ++v5;
    }
    while ( v14 );
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 1) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003EFA4(off_1C0093070->AttachedDevice, 72LL, IoWorkItem, *Context, *((_DWORD *)Context + 2), v5);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( Context )
    ExFreePoolWithTag(Context, 0x72436152u);
}
