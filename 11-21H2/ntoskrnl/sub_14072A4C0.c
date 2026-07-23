/*
 * XREFs of sub_14072A4C0 @ 0x14072A4C0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeSemaphore @ 0x1402A4940 (KeInitializeSemaphore.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

__int64 __fastcall sub_14072A4C0(unsigned __int64 a1, int a2, int a3, LONG a4, int Limit)
{
  _QWORD *v7; // rdi
  unsigned __int8 v8; // si
  int v9; // ecx
  __int64 v11; // [rsp+58h] [rbp-20h] BYREF

  v7 = (_QWORD *)a1;
  v11 = 0LL;
  v8 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v8 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  if ( Limit <= 0 || a4 < 0 || a4 > Limit )
    return 3221225485LL;
  v9 = sub_14072B3B0(v8, (_DWORD)ExSemaphoreObjectType, a3, v8);
  if ( v9 >= 0 )
  {
    KeInitializeSemaphore(0LL, a4, Limit);
    v9 = sub_140729C30(0LL, 0LL, a2, 0, 0, 0LL, &v11);
    if ( v9 >= 0 )
      *v7 = v11;
  }
  return (unsigned int)v9;
}
