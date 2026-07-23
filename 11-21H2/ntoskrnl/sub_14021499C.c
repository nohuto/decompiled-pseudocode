/*
 * XREFs of sub_14021499C @ 0x14021499C
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403B28D0 (MmAllocateContiguousMemoryEx.c)
 * Callees:
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 */

__int64 __fastcall sub_14021499C(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int16 a4,
        unsigned int a5,
        unsigned int a6,
        _OWORD *a7)
{
  unsigned int v7; // eax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8

  *a7 = 0LL;
  a7[1] = 0LL;
  if ( a1 )
  {
    *(_QWORD *)a7 = a2 >> 12;
    if ( (a2 & 0xFFF) != 0 )
      *(_QWORD *)a7 = (a2 >> 12) + 1;
    if ( (a4 & 0xFFF) == 0 )
    {
      v7 = sub_14032BCC0(a5);
      *(_DWORD *)(v10 + 24) = v7;
      if ( (a5 & 0x100) == 0
        && v7 != -1
        && (v7 & 5) == 4
        && ((v7 & 2) == 0 || v7 >> 3 != 1 && (v7 >> 3 != 3 || (v7 & 7) == 0)) )
      {
        v12 = qword_140C50840;
        v13 = v8 >> 12;
        *(_QWORD *)(v10 + 16) = v9 >> 12;
        *(_QWORD *)(v10 + 8) = v13;
        if ( v13 > v12 )
        {
          *(_QWORD *)(v10 + 8) = v12;
          v13 = v12;
        }
        if ( v11 > v13 )
          return 3221225626LL;
        if ( a6 == 0x80000000 || a6 < (unsigned __int16)word_140D05000 )
          return 0LL;
      }
    }
  }
  return 3221225485LL;
}
