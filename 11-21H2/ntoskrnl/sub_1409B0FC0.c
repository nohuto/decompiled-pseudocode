/*
 * XREFs of sub_1409B0FC0 @ 0x1409B0FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 *     sub_1409B196C @ 0x1409B196C (sub_1409B196C.c)
 */

__int64 __fastcall sub_1409B0FC0(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  void *v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = sub_1406CA970(a1, (__int64)CurrentThread, &v9, v5);
    v7 = v6;
    if ( !v6 )
      break;
    if ( (*((_DWORD *)v6 + 543) & 0x40) == 0 && v6 != *((_QWORD **)KeGetCurrentThread() + 23) )
    {
      *(_BYTE *)(a2 + 4) |= 2u;
      sub_1409B196C(v6);
    }
    v5 = v7;
    a1 = v4;
  }
  return 0LL;
}
