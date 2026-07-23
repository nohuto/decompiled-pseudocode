/*
 * XREFs of sub_14097D7F8 @ 0x14097D7F8
 * Callers:
 *     sub_140983B80 @ 0x140983B80 (sub_140983B80.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x14030ACF0 (RtlFindSetBitsEx.c)
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     sub_1405AB970 @ 0x1405AB970 (sub_1405AB970.c)
 *     sub_1405AB9B8 @ 0x1405AB9B8 (sub_1405AB9B8.c)
 *     sub_1405AC670 @ 0x1405AC670 (sub_1405AC670.c)
 *     sub_1405AC8D4 @ 0x1405AC8D4 (sub_1405AC8D4.c)
 *     sub_1405AC950 @ 0x1405AC950 (sub_1405AC950.c)
 *     sub_1405C4E28 @ 0x1405C4E28 (sub_1405C4E28.c)
 *     sub_1405C4F88 @ 0x1405C4F88 (sub_1405C4F88.c)
 */

char __fastcall sub_14097D7F8(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  ULONG64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  ULONG64 SetBits; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  ULONG_PTR i; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = *((_QWORD *)CurrentThread + 23);
  sub_1405AB9B8((__int64)CurrentThread);
  v4 = *(_QWORD *)(v3 + 1680);
  v5 = *(_QWORD *)(v4 + 376);
  if ( v5 )
  {
    v6 = 0LL;
    v7 = sub_1405AAF90(*(_QWORD *)(v4 + 376));
    sub_1405AB970(v8, (__int64)CurrentThread);
    do
    {
      if ( sub_1405C4F88(a1) )
        break;
      SetBits = RtlFindSetBitsEx((PRTL_BITMAP_EX)(v5 + 24), 1uLL, v6);
      v10 = SetBits;
      if ( SetBits < v6 || SetBits == -1LL )
        break;
      v11 = 0LL;
      for ( i = SetBits * v7; v11 < v7; ++v11 )
      {
        if ( (int)sub_1405AC670(a1, i, v5) < 0 )
          sub_1405C4E28(i, 1);
        sub_1405AC8D4(v5, (__int64)CurrentThread);
        sub_1405AC950((__int64)CurrentThread);
        ++i;
        sub_1405AB9B8((__int64)CurrentThread);
        sub_1405AB970(v5, (__int64)CurrentThread);
        if ( !_bittest64(*(const signed __int64 **)(v5 + 32), v10) )
          break;
      }
      v6 = v10 + 1;
    }
    while ( v10 + 1 < *(_QWORD *)(v5 + 24) );
    sub_1405AC8D4(v5, (__int64)CurrentThread);
  }
  return sub_1405AC950((__int64)CurrentThread);
}
