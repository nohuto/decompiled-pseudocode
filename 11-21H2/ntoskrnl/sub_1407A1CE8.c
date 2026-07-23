/*
 * XREFs of sub_1407A1CE8 @ 0x1407A1CE8
 * Callers:
 *     sub_14066B204 @ 0x14066B204 (sub_14066B204.c)
 *     sub_140681CB0 @ 0x140681CB0 (sub_140681CB0.c)
 *     sub_1406C1810 @ 0x1406C1810 (sub_1406C1810.c)
 *     sub_1406C5878 @ 0x1406C5878 (sub_1406C5878.c)
 *     sub_1407A347C @ 0x1407A347C (sub_1407A347C.c)
 *     sub_140966C80 @ 0x140966C80 (sub_140966C80.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402F3510 @ 0x1402F3510 (sub_1402F3510.c)
 *     sub_1407A28C0 @ 0x1407A28C0 (sub_1407A28C0.c)
 *     sub_1407A2BDC @ 0x1407A2BDC (sub_1407A2BDC.c)
 *     sub_1409F9244 @ 0x1409F9244 (sub_1409F9244.c)
 *     sub_1409F92FC @ 0x1409F92FC (sub_1409F92FC.c)
 */

__int64 __fastcall sub_1407A1CE8(__int64 a1, __int64 a2, int a3, unsigned int a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h]
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF

  v11 = a2 << 16;
  v12 = a3 & 0x1FFFFFF;
  sub_1402F3510((__int64)&v11, a4, 15);
  CurrentThread = KeGetCurrentThread();
  v11 |= 1uLL;
  --*((_WORD *)CurrentThread + 242);
  v13 = 0LL;
  v7 = sub_1407A28C0(a1, &v13);
  v8 = v13;
  v9 = (_QWORD *)v7;
  if ( v7 )
  {
    if ( a5 && (*a5 || a5[1]) && (unsigned int)sub_1409F9244(a1, v13, a5) )
    {
      sub_1407A2BDC(a1, v8, v9);
      v8 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        sub_1409F92FC(a1, CurrentThread, v8, 1LL);
      v9[1] = v12;
      *v9 = v11;
    }
  }
  sub_1402AC800((__int64)CurrentThread);
  return v8;
}
