/*
 * XREFs of sub_180089780 @ 0x180089780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800895A0 @ 0x1800895A0 (sub_1800895A0.c)
 *     sub_1800896D8 @ 0x1800896D8 (sub_1800896D8.c)
 */

__int64 *__fastcall sub_180089780(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
    v8 = *(_DWORD *)(v6 + 32);
  else
    v8 = -1;
  v14 = v8;
  v13 = a6;
  v12 = a5;
  v9 = sub_1800896D8(a1, (__int64 *)&v15, a3, a4, v12, v13, v14);
  v10 = *v9;
  *v9 = 0LL;
  *a2 = v10;
  sub_1800895A0(&v15);
  return a2;
}
