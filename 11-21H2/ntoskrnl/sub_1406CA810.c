/*
 * XREFs of sub_1406CA810 @ 0x1406CA810
 * Callers:
 *     <none>
 * Callees:
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 */

__int64 __fastcall sub_1406CA810(__int64 a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r9
  __int64 v4; // rbx
  KSPIN_LOCK *i; // rdx
  __int64 v7; // rax
  KSPIN_LOCK *v8; // rdi
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = a1;
  v10 = 0LL;
  v11 = 0LL;
  if ( !*(_DWORD *)(a1 + 1052) )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    while ( 1 )
    {
      v4 = sub_1406CA970(a1, CurrentThread, &v10, v3);
      if ( !v4 )
        break;
      for ( i = 0LL; ; i = v8 )
      {
        v7 = sub_1407E7750(v4, i);
        v8 = (KSPIN_LOCK *)v7;
        if ( !v7 )
          break;
        v9 = sub_14033D760(v7);
        sub_140280754(v8, v9, 0);
      }
      v3 = v4;
      a1 = v1;
    }
  }
  return 0LL;
}
