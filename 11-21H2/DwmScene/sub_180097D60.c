/*
 * XREFs of sub_180097D60 @ 0x180097D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180097C48 @ 0x180097C48 (sub_180097C48.c)
 *     sub_18009A1B4 @ 0x18009A1B4 (sub_18009A1B4.c)
 */

__int64 *__fastcall sub_180097D60(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  void *v11; // rbx
  int v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]
  LPVOID lpMem; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
    v8 = *(_DWORD *)(v6 + 32);
  else
    v8 = -1;
  v15 = v8;
  v14 = a6;
  v13 = a5;
  v9 = sub_180097C48(a1, (__int64 *)&lpMem, a3, a4, v13, v14, v15);
  v10 = *v9;
  *v9 = 0LL;
  v11 = lpMem;
  *a2 = v10;
  if ( v11 )
  {
    sub_18009A1B4(v11);
    sub_18000B998(v11);
  }
  return a2;
}
