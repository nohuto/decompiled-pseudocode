/*
 * XREFs of sub_14020B000 @ 0x14020B000
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402E1140 @ 0x1402E1140 (sub_1402E1140.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_14068A6A0 @ 0x14068A6A0 (sub_14068A6A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_14020B000()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  PSLIST_ENTRY v7; // rax
  PSLIST_ENTRY v8; // rax

  if ( qword_140D05008 && !*(_DWORD *)(qword_140D05008 + 4068) )
  {
    sub_1402E1140();
    v1 = 0LL;
    while ( 1 )
    {
      LOBYTE(v0) = 1;
      v2 = sub_14068A6A0(v1, v0);
      v3 = v2;
      if ( !v2 )
        break;
      CurrentThread = KeGetCurrentThread();
      v5 = *((_QWORD *)CurrentThread + 203);
      *((_QWORD *)CurrentThread + 203) = v2;
      v6 = *(_QWORD *)(sub_140347DB0() + 864);
      if ( v6 && !*(_DWORD *)(v6 + 4068) )
        sub_1402E1140();
      v1 = v3;
      *((_QWORD *)KeGetCurrentThread() + 203) = v5;
    }
    if ( dword_140C5A6C4 > 2 * (int)dword_140D06884 * dword_140C5A6C0 )
    {
      do
      {
        v7 = ExpInterlockedPopEntrySList(&stru_140C5A6B0);
        if ( !v7 )
          break;
        ExFreePoolWithTag(v7, 0);
      }
      while ( _InterlockedDecrement(&dword_140C5A6C4) > 2 * (int)dword_140D06884 * dword_140C5A6C0 );
    }
    if ( dword_140C5A6A4 > 2 * (int)dword_140D06884 * dword_140C5A6A0 )
    {
      do
      {
        v8 = ExpInterlockedPopEntrySList(&stru_140C5A690);
        if ( !v8 )
          break;
        ExFreePoolWithTag(v8, 0);
      }
      while ( _InterlockedDecrement(&dword_140C5A6A4) > 2 * (int)dword_140D06884 * dword_140C5A6A0 );
    }
    _InterlockedExchange(&dword_140C15FA0, 0);
  }
}
