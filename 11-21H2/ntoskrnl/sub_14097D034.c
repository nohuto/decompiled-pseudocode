/*
 * XREFs of sub_14097D034 @ 0x14097D034
 * Callers:
 *     sub_1405AA5E8 @ 0x1405AA5E8 (sub_1405AA5E8.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 * Callees:
 *     sub_1402C3410 @ 0x1402C3410 (sub_1402C3410.c)
 *     RtlFindSetBitsEx @ 0x14030ACF0 (RtlFindSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x14045EF10 (RtlFindNextForwardRunClearEx.c)
 *     sub_1405AAEC8 @ 0x1405AAEC8 (sub_1405AAEC8.c)
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     sub_1405AB970 @ 0x1405AB970 (sub_1405AB970.c)
 *     sub_1405AC8D4 @ 0x1405AC8D4 (sub_1405AC8D4.c)
 */

__int64 __fastcall sub_14097D034(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v2; // rbx
  ULONG64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // ecx
  _RTL_BITMAP_EX *v8; // r12
  ULONG64 SetBits; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 SizeOfBitMap; // rsi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  int v19; // r8d
  __int64 v20; // r12
  __int64 v22; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  __int64 v26; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v25 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v23 = CurrentThread;
  v5 = a1;
  v22 = sub_1405AAEC8(a1);
  sub_1405AB970(v5, (__int64)CurrentThread);
  v6 = sub_1405AAF90(v5);
  v7 = *(_DWORD *)(v5 + 8);
  v8 = (_RTL_BITMAP_EX *)(v5 + 24);
  v26 = v6;
  if ( (v7 & 1) == 0 || *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2032LL) )
  {
    do
    {
      SetBits = RtlFindSetBitsEx(v8, 1uLL, v3);
      v10 = SetBits;
      if ( SetBits < v3 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v8, SetBits, &v25);
      SizeOfBitMap = v25;
      v13 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        SizeOfBitMap = v8->SizeOfBitMap;
      v14 = SizeOfBitMap - v10;
      RtlClearBitsEx((__int64)v8, v10, v14);
      v15 = v26;
      v3 = v10 + v14 + v13;
      v16 = v26 * v10;
      v4 += v26 * v14;
      v17 = 0LL;
      v18 = 48 * v16 - 0x220000000000LL;
      v19 = *(unsigned __int8 *)(v18 + 34) >> 6;
      if ( v14 )
      {
        v20 = 48 * v26;
        do
        {
          if ( *(unsigned __int8 *)(v18 + 34) >> 6 != v19 )
          {
            sub_1402C3410(v16, v17, 0);
            v19 = *(unsigned __int8 *)(v18 + 34) >> 6;
            v15 = v26;
            v17 = 0LL;
            v16 = 0xAAAAAAAAAAAAAAABuLL * ((v18 + 0x220000000000LL) >> 4);
          }
          v17 += v15;
          v18 += v20;
          --v14;
        }
        while ( v14 );
        v5 = a1;
        v8 = (_RTL_BITMAP_EX *)(a1 + 24);
      }
      sub_1402C3410(v16, v17, 0);
    }
    while ( v3 < v8->SizeOfBitMap );
    if ( v4 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 17512), -v4);
      if ( (ULONG_PTR *)v22 == &StartContext )
        _InterlockedExchangeAdd64(&qword_140C53530, -v4);
    }
    CurrentThread = v23;
    v2 = v4;
  }
  sub_1405AC8D4(v5, (__int64)CurrentThread);
  return v2;
}
