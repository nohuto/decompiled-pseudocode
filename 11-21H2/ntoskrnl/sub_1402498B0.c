/*
 * XREFs of sub_1402498B0 @ 0x1402498B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 */

__int64 __fastcall sub_1402498B0(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  ULONG_PTR v5; // r9
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbx
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = ((__int64 (__fastcall *)(__int64, struct _KTHREAD *, __int128 *, ULONG_PTR))sub_1406CA970)(
           a1,
           CurrentThread,
           &v10,
           v5);
    v7 = v6;
    if ( !v6 )
      break;
    v9 = sub_140687754(v6);
    if ( v9 < 0 )
      *a2 = v9;
    v5 = v7;
    a1 = v4;
  }
  return 0LL;
}
