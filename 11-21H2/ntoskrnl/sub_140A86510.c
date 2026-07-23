/*
 * XREFs of sub_140A86510 @ 0x140A86510
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A83A4C @ 0x140A83A4C (sub_140A83A4C.c)
 *     sub_140A83C18 @ 0x140A83C18 (sub_140A83C18.c)
 *     sub_140A83D24 @ 0x140A83D24 (sub_140A83D24.c)
 *     sub_140A8781C @ 0x140A8781C (sub_140A8781C.c)
 *     sub_140A87944 @ 0x140A87944 (sub_140A87944.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A885FC @ 0x140A885FC (sub_140A885FC.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 *     sub_140A88D98 @ 0x140A88D98 (sub_140A88D98.c)
 *     sub_140A896FC @ 0x140A896FC (sub_140A896FC.c)
 */

__int64 sub_140A86510(__int64 a1, ...)
{
  struct _MDL *v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rax
  char v6; // r13
  __int64 v7; // rbp
  unsigned int *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rbx
  struct _MDL *v15; // [rsp+98h] [rbp+10h] BYREF
  va_list va; // [rsp+98h] [rbp+10h]
  __int64 v17; // [rsp+A0h] [rbp+18h] BYREF
  va_list va1; // [rsp+A0h] [rbp+18h]
  __int64 v19; // [rsp+A8h] [rbp+20h] BYREF
  va_list va2; // [rsp+A8h] [rbp+20h]
  unsigned int *v21; // [rsp+B0h] [rbp+28h]
  __int64 v22; // [rsp+B8h] [rbp+30h]
  va_list va3; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v15 = va_arg(va1, struct _MDL *);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v21 = va_arg(va3, unsigned int *);
  v22 = va_arg(va3, _QWORD);
  v2 = v15;
  v3 = v17;
  sub_140A88738(a1);
  v5 = sub_140A88430(a1);
  v6 = v22;
  v7 = v5;
  v8 = v21;
  if ( v5 )
  {
    sub_140A83D24();
    sub_140A83C18((ULONG_PTR)v2);
    sub_140A8781C(v7);
    if ( *(_DWORD *)(v7 + 192) == 3 )
    {
      v9 = sub_140A87944(v2, 0LL, *v8);
      if ( v9 )
      {
        v10 = v9;
        sub_140A88948(
          byte_140C0D964,
          "The provided MDL is not sufficient to satisfy the requested length",
          36LL,
          v9,
          0LL,
          0LL);
        sub_1405FFA20(0xE6u, 0x24uLL, v10, 0LL, 0LL, byte_140C0D964);
      }
    }
    if ( v3 != -559026163 )
    {
      v11 = sub_140A885FC(v3);
      if ( v11 )
      {
        v12 = sub_140A88D98(v11, v2, v6);
        if ( v12 )
        {
          *v8 = v12;
          sub_140A896FC((__int64 *)va1, (struct _MDL **)va, (__int64 *)va2);
          v2 = v15;
        }
      }
    }
  }
  v13 = sub_14042A5E0(a1, v2);
  if ( v7 )
    sub_140A83A4C(v7, *v8, 0);
  return v13;
}
