/*
 * XREFs of sub_140A62458 @ 0x140A62458
 * Callers:
 *     sub_140A621FC @ 0x140A621FC (sub_140A621FC.c)
 * Callees:
 *     sub_140391464 @ 0x140391464 (sub_140391464.c)
 *     sub_1403AAE80 @ 0x1403AAE80 (sub_1403AAE80.c)
 *     sub_1403AEED4 @ 0x1403AEED4 (sub_1403AEED4.c)
 *     sub_1403B043C @ 0x1403B043C (sub_1403B043C.c)
 *     sub_1403B0670 @ 0x1403B0670 (sub_1403B0670.c)
 *     sub_1403B607C @ 0x1403B607C (sub_1403B607C.c)
 *     sub_140A5029C @ 0x140A5029C (sub_140A5029C.c)
 */

__int64 __fastcall sub_140A62458(int *a1, unsigned __int64 *a2)
{
  int v2; // edi
  unsigned __int8 CurrentIrql; // cl
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v15 = 0;
  sub_1403AEED4();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  __writemsr(0x10u, *a2);
  sub_140A5029C(1);
  if ( (dword_140C4C44C & 1) != 0 )
    sub_1403B0670(0LL);
  v8 = (unsigned int)_InterlockedExchangeAdd(a1 + 15, 1u);
  while ( a1[15] < v2 )
    _mm_pause();
  while ( a1[16] < (int)v8 )
    _mm_pause();
  sub_1403B607C(v8, v7);
  v9 = sub_1403AAE80(0LL, 0LL, 0LL, &v15);
  LOBYTE(v11) = v9 != 0 ? v15 : 0;
  v15 = v11;
  if ( (_BYTE)v11 == 1 )
  {
    if ( *((_BYTE *)KeGetCurrentPrcb() + 64) == 15 )
    {
      v11 = 3221291039LL;
      v12 = __readmsr(0xC001001F) & 0xFFFFFFFEFFEFFFFFuLL | 0x100000000LL;
      v10 = HIDWORD(v12);
      __writemsr(0xC001001F, v12);
    }
    if ( *((_BYTE *)KeGetCurrentPrcb() + 64) == 18 )
    {
      v11 = 3221295145LL;
      v13 = __readmsr(0xC0011029) | 0x80000000;
      v10 = HIDWORD(v13);
      __writemsr(0xC0011029, v13);
    }
  }
  _InterlockedIncrement(a1 + 16);
  while ( a1[16] < v2 )
    _mm_pause();
  sub_140391464(v11, v10);
  return sub_1403B043C();
}
