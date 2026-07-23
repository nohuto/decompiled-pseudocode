/*
 * XREFs of sub_14078C9E8 @ 0x14078C9E8
 * Callers:
 *     sub_1406998CC @ 0x1406998CC (sub_1406998CC.c)
 *     sub_1406E32E4 @ 0x1406E32E4 (sub_1406E32E4.c)
 *     sub_1407661D0 @ 0x1407661D0 (sub_1407661D0.c)
 *     sub_140766F84 @ 0x140766F84 (sub_140766F84.c)
 *     sub_14076A520 @ 0x14076A520 (sub_14076A520.c)
 * Callees:
 *     sub_1402E0A04 @ 0x1402E0A04 (sub_1402E0A04.c)
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078C9E8(unsigned __int64 a1, ULONG a2, PVOID *a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r14
  unsigned __int64 *v9; // rdi
  int v10; // ebx
  __int64 v11; // r11
  unsigned __int64 v12; // r15
  _WORD *Pool2; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  __int64 *v16; // rdi
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+60h] BYREF

  v19 = a4;
  v18[0] = 0LL;
  *a3 = 0LL;
  v7 = 1LL;
  v8 = 0LL;
  if ( a4 )
  {
    v9 = &v19;
    do
    {
      if ( *++v9 )
      {
        v10 = sub_1402E0AC4((_WORD *)*v9, a1, v18);
        if ( v10 < 0 )
          goto LABEL_20;
        v7 = v18[0] + v11;
        a4 = v19;
      }
      ++v8;
    }
    while ( v8 < a4 );
  }
  if ( v7 > a1 )
  {
    v10 = -1073741811;
    goto LABEL_20;
  }
  v12 = 2 * v7;
  if ( !is_mul_ok(v7, 2uLL) )
  {
    v10 = -1073741675;
LABEL_20:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, a2);
      *a3 = 0LL;
    }
    return (unsigned int)v10;
  }
  v10 = 0;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 2 * v7, a2);
  *a3 = Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741670;
    goto LABEL_20;
  }
  *Pool2 = 0;
  v14 = v19;
  v15 = 0LL;
  if ( v19 )
  {
    v16 = (__int64 *)&v19;
    do
    {
      if ( *++v16 )
      {
        v10 = sub_1402E0A04(*a3, v12, *v16);
        if ( v10 < 0 )
          goto LABEL_20;
        v14 = v19;
      }
      ++v15;
    }
    while ( v15 < v14 );
  }
  return (unsigned int)v10;
}
