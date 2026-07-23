/*
 * XREFs of sub_140918BC4 @ 0x140918BC4
 * Callers:
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 */

__int64 __fastcall sub_140918BC4(__int64 a1, __int64 a2, ULONG a3, _QWORD *a4)
{
  __int64 v6; // rdi
  PLOOKASIDE_LIST_EX v7; // r9
  PVOID v8; // rax
  unsigned int v9; // ebx
  PVOID v10; // rsi

  v6 = sub_140721BF0(a1, a2, 0LL);
  v8 = Allocate(PagedPool, *(unsigned int *)(v6 + 24), a3, v7);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    memmove(v8, (const void *)(v6 + 32), *(unsigned int *)(v6 + 24));
    *a4 = v10;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
