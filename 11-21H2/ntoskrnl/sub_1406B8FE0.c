/*
 * XREFs of sub_1406B8FE0 @ 0x1406B8FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x14023E540 (KeInitializeQueue.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall sub_1406B8FE0(__int64 a1, __int64 a2, int a3, ULONG a4)
{
  _QWORD *v5; // rdi
  char v6; // si
  int v7; // ecx
  ULONG v8; // edx
  PRKQUEUE v9; // rbx
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  PRKQUEUE Queue; // [rsp+60h] [rbp-28h]

  v5 = (_QWORD *)a1;
  v11 = 0LL;
  Queue = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v5;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  LOBYTE(a1) = v6;
  v7 = sub_14072B3B0(a1, (_DWORD)IoCompletionObjectType, a3, v6);
  if ( v7 >= 0 )
  {
    v8 = a4;
    v9 = Queue;
    KeInitializeQueue(Queue, v8);
    *(_QWORD *)&v9[1].Header.Lock = 0LL;
    LOBYTE(v9[1].Header.WaitListHead.Flink) = 0;
    v7 = sub_140729C30(v9, 0LL, 0, 0LL, (__int64)&v11);
    if ( v7 >= 0 )
      *v5 = v11;
  }
  return (unsigned int)v7;
}
