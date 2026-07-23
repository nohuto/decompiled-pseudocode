/*
 * XREFs of sub_140B2C7E0 @ 0x140B2C7E0
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 */

__int64 *sub_140B2C7E0()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r8
  __int64 v2; // r10
  _QWORD *v3; // rdx
  const char *v4; // rax
  __int64 v5; // rax
  int v6; // r9d
  __int64 *result; // rax
  __int64 v8; // rax
  _BYTE v9[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+22h] [rbp-16h]

  byte_140C48F3A = 6;
  qword_140C48F28 = 0LL;
  dword_140C48F20.Count = 1;
  qword_140C48F08 = (__int64)&qword_140C48F00;
  qword_140C48F00 = (__int64)&qword_140C48F00;
  qword_140C48F48 = (__int64)&qword_140C48F40;
  qword_140C48F40 = (__int64)&qword_140C48F40;
  stru_140C49100.Event.Header.WaitListHead.Blink = &stru_140C49100.Event.Header.WaitListHead;
  stru_140C49100.Event.Header.WaitListHead.Flink = &stru_140C49100.Event.Header.WaitListHead;
  stru_140C49160.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409194E0;
  qword_140C491C8 = (__int64)&qword_140C491C0;
  qword_140C491C0 = (__int64)&qword_140C491C0;
  dword_140C48F30 = 0;
  word_140C48F38 = 1;
  dword_140C48F3C = 0;
  stru_140C49100.Count = 1;
  stru_140C49100.Owner = 0LL;
  stru_140C49100.Contention = 0;
  LOWORD(stru_140C49100.Event.Header.Lock) = 1;
  stru_140C49100.Event.Header.Size = 6;
  stru_140C49100.Event.Header.SignalState = 0;
  qword_140C49138 = 0LL;
  stru_140C49160.Parameter = 0LL;
  stru_140C49160.List.Flink = 0LL;
  _mm_lfence();
  if ( qword_140C4EEA0 == qword_140C48F28 )
  {
    v0 = __rdtsc();
    v1 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4)) ^ 0x1005LL;
    if ( !v1 )
      v1 = 1LL;
    qword_140C4EEA0 = v1;
    v2 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x557LL;
    qword_140C4EEA8 = v2;
    __sidt(v9);
    v3 = (_QWORD *)v10;
    if ( v10 < v10 + 848 )
    {
      v4 = (const char *)v10;
      do
      {
        _mm_prefetch(v4, 0);
        v4 += 64;
      }
      while ( (unsigned __int64)v4 < v10 + 848 );
    }
    v5 = 106LL;
    v6 = 848;
    do
    {
      v1 = __ROR8__(v1 - *v3++, v2);
      v6 -= 8;
      --v5;
    }
    while ( v5 );
    for ( ; v6; --v6 )
    {
      v8 = *(unsigned __int8 *)v3;
      v3 = (_QWORD *)((char *)v3 + 1);
      v1 = __ROR8__(v1 - v8, v2);
    }
    qword_140C4EEB8 = v1;
    qword_140C4EEB0 = sub_1402F5718() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  qword_140C49180 = 8LL;
  qword_140C491F8 = (__int64)sub_14053F140;
  qword_140C49190 = (__int64)&qword_140C49188;
  qword_140C49188 = (__int64)&qword_140C49188;
  qword_140C48F18 = (__int64)&qword_140C48F10;
  qword_140C48F10 = &qword_140C48F10;
  qword_140C48F88 = (__int64)&qword_140C48F80;
  qword_140C48F80 = (__int64)&qword_140C48F80;
  qword_140C48FB0 = (__int64)sub_1406E5950;
  qword_140C49018 = (__int64)sub_14025E250;
  qword_140C48FC0 = 8LL;
  qword_140C48FD0 = (__int64)&qword_140C48FC8;
  qword_140C48FC8 = (__int64)&qword_140C48FC8;
  result = &qword_140C49140;
  qword_140C49200 = 0LL;
  qword_140C49218 = 0LL;
  qword_140C491F0 = 0LL;
  qword_140C49198 = 0LL;
  dword_140C491BC = 0;
  word_140C491B8 = 0;
  qword_140C48F68 = 0LL;
  dword_140C48F70 = 0;
  dword_140C48F7C = 0;
  qword_140C48FB8 = 0LL;
  qword_140C48FA0.List.Flink = 0LL;
  qword_140C49020 = 0LL;
  qword_140C49038 = 0LL;
  qword_140C49010 = 0LL;
  qword_140C48FD8 = 0LL;
  dword_140C48FFC = 0;
  word_140C48FF8 = 0;
  qword_140C49148 = (__int64)&qword_140C49140;
  qword_140C49140 = (__int64)&qword_140C49140;
  dword_140C491E0 = 275;
  dword_140C48F60.Count = 1;
  word_140C48F78 = 1;
  byte_140C48F7A = 6;
  dword_140C49000 = 275;
  return result;
}
