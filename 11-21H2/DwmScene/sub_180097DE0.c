/*
 * XREFs of sub_180097DE0 @ 0x180097DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800977BC @ 0x1800977BC (sub_1800977BC.c)
 *     sub_18009A1B4 @ 0x18009A1B4 (sub_18009A1B4.c)
 */

__int64 *sub_180097DE0(__int64 a1, __int64 *a2, int a3, int a4, ...)
{
  __int64 v4; // rax
  int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rcx
  void *v9; // rbx
  int v11; // [rsp+60h] [rbp+8h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF
  __int64 v15; // [rsp+80h] [rbp+28h] BYREF
  va_list va; // [rsp+80h] [rbp+28h]
  __int64 v17; // [rsp+88h] [rbp+30h] BYREF
  va_list va1; // [rsp+88h] [rbp+30h]
  va_list va2; // [rsp+90h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v14 = a4;
  v13 = a3;
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
    v6 = *(_DWORD *)(v4 + 32);
  else
    v6 = -1;
  v11 = v6;
  v7 = sub_1800977BC((__int64 *)&lpMem, &v13, &v14, (__int64 *)va, (int *)va2, (__int64 *)va1, &v11);
  v8 = *v7;
  *v7 = 0LL;
  v9 = lpMem;
  *a2 = v8;
  if ( v9 )
  {
    sub_18009A1B4(v9);
    sub_18000B998(v9);
  }
  return a2;
}
