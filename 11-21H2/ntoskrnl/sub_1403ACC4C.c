/*
 * XREFs of sub_1403ACC4C @ 0x1403ACC4C
 * Callers:
 *     sub_140398190 @ 0x140398190 (sub_140398190.c)
 *     sub_1403AC9F8 @ 0x1403AC9F8 (sub_1403AC9F8.c)
 *     sub_1403ACB14 @ 0x1403ACB14 (sub_1403ACB14.c)
 * Callees:
 *     sub_1403ACE38 @ 0x1403ACE38 (sub_1403ACE38.c)
 */

__int64 __fastcall sub_1403ACC4C(unsigned int a1, _DWORD *a2)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // r8d
  unsigned __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = (unsigned __int64)a1 << 7;
  v4 = *((_DWORD *)KeGetCurrentPrcb() + 9);
  v5 = (unsigned __int64)v4 << 7;
  v6 = *(_QWORD **)(v3 + qword_140C4C770 + 16);
  *(_DWORD *)(v3 + qword_140C4C770 + 4) = v4;
  *v6 = 0LL;
  **(_QWORD **)(v5 + qword_140C4C770 + 16) = -1LL;
  _InterlockedExchange((volatile __int32 *)(v3 + qword_140C4C770), 4);
  while ( *(_DWORD *)(v3 + qword_140C4C770) == 4 )
    _mm_pause();
  v7 = sub_1403ACE38(*(_QWORD *)(v5 + qword_140C4C770 + 16), *(_QWORD *)(v3 + qword_140C4C770 + 16));
  while ( *(_DWORD *)(v3 + qword_140C4C770) )
    _mm_pause();
  _InterlockedOr(v10, 0);
  v8 = *(_QWORD *)(v3 + qword_140C4C770 + 8);
  if ( a2 )
    *a2 = v7 + v8;
  return (v8 - v7) / 2;
}
