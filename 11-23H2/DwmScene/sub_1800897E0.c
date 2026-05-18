/*
 * XREFs of sub_1800897E0 @ 0x1800897E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008925C @ 0x18008925C (sub_18008925C.c)
 *     sub_1800895A0 @ 0x1800895A0 (sub_1800895A0.c)
 */

__int64 *sub_1800897E0(__int64 a1, __int64 *a2, int a3, int a4, ...)
{
  __int64 v4; // rax
  int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  void *v11; // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+28h] BYREF
  va_list va; // [rsp+70h] [rbp+28h]
  __int64 v16; // [rsp+78h] [rbp+30h] BYREF
  va_list va1; // [rsp+78h] [rbp+30h]
  va_list va2; // [rsp+80h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v13 = a4;
  v12 = a3;
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
    v6 = *(_DWORD *)(v4 + 32);
  else
    v6 = -1;
  v10 = v6;
  v7 = sub_18008925C((__int64 *)&v11, &v12, &v13, (__int64 *)va, (int *)va2, (__int64 *)va1, &v10);
  v8 = *v7;
  *v7 = 0LL;
  *a2 = v8;
  sub_1800895A0(&v11);
  return a2;
}
