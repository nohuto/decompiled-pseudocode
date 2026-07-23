/*
 * XREFs of sub_1402AA9B0 @ 0x1402AA9B0
 * Callers:
 *     ntoskrnl_7 @ 0x1402AA8D0 (ntoskrnl_7.c)
 * Callees:
 *     sub_14024E3F0 @ 0x14024E3F0 (sub_14024E3F0.c)
 *     sub_1402AB9C0 @ 0x1402AB9C0 (sub_1402AB9C0.c)
 *     sub_1402F4850 @ 0x1402F4850 (sub_1402F4850.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 */

__int64 __fastcall sub_1402AA9B0(int a1, int a2, unsigned __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18[6]; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF

  v17 = 0LL;
  v18[0] = 0LL;
  v19 = 0;
  if ( a3 > 0x11800 )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v10 = sub_14041FAB0();
  v11 = *((_QWORD *)CurrentThread + 6);
  v12 = v10;
  v13 = *(_QWORD *)(*((_QWORD *)CurrentThread + 5) + 8LL) & 0xFFFFFFFFFFFFFFFEuLL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 2 )
  {
    if ( (a4 & 2) != 0 )
      return 3221225714LL;
    v16 = sub_14041FAB0();
    if ( !(unsigned __int8)sub_1402AB9C0(v16, &v19, &v17, v18) )
      __fastfail(4u);
    if ( v19 == 1 || v19 == 10 )
    {
      v11 = v17;
      v13 = v17;
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xAu, 2uLL, CurrentIrql, 0LL, 0LL);
    if ( a3 == (unsigned int)dword_140D05050 || a3 == 24576 && (unsigned int)dword_140D05050 >= 0x6000 )
      a4 |= 5u;
  }
  if ( v12 - v13 < a3 || (a4 & 1) != 0 || v12 - v11 < a3 && (int)sub_14024E3F0(v12, a3) < 0 )
    return sub_1402F4850(a1, a2, a3, a4, a5);
  else
    return 3221226635LL;
}
