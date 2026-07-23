/*
 * XREFs of sub_14097CC1C @ 0x14097CC1C
 * Callers:
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 *     sub_14097CD04 @ 0x14097CD04 (sub_14097CD04.c)
 * Callees:
 *     sub_1405AB9B8 @ 0x1405AB9B8 (sub_1405AB9B8.c)
 *     sub_1405AC950 @ 0x1405AC950 (sub_1405AC950.c)
 *     sub_14097BBE0 @ 0x14097BBE0 (sub_14097BBE0.c)
 *     sub_14097CFDC @ 0x14097CFDC (sub_14097CFDC.c)
 */

__int64 __fastcall sub_14097CC1C(KPROCESSOR_MODE a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edi
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = *((_QWORD *)CurrentThread + 23);
  v5 = *(_QWORD *)(v4 + 1680);
  v6 = *(_QWORD *)(v5 + 376);
  v9 = v6;
  if ( !v6 )
  {
    result = sub_14097BBE0(0LL, 1, 0, a1, &v9);
    if ( (int)result < 0 )
      return result;
    v8 = 0;
    sub_1405AB9B8((__int64)CurrentThread);
    v6 = v9;
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 1680) + 376LL) )
    {
      *(_QWORD *)(v5 + 376) = v9;
      v8 = 1;
    }
    sub_1405AC950((__int64)CurrentThread);
    if ( !v8 )
    {
      sub_14097CFDC(*((_QWORD *)KeGetCurrentThread() + 23), v9);
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 1680) + 376LL);
    }
  }
  *a2 = v6;
  return 0LL;
}
