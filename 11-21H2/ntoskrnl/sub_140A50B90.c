/*
 * XREFs of sub_140A50B90 @ 0x140A50B90
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_140394AB4 @ 0x140394AB4 (sub_140394AB4.c)
 */

PMDL __fastcall sub_140A50B90(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  PMDL v4; // rax
  int v5; // r8d
  PMDL v6; // rbx
  ULONG *v7; // rdi
  ULONG v8; // r8d
  _RTL_BITMAP *v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rax

  v3 = __rdtsc();
  v4 = sub_140394AB4(a1, a2);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = (ULONG *)&v4[1];
    LOBYTE(v5) = (v4->ByteCount & 0xFFF) != 0;
    v8 = (v4->ByteCount >> 12) + v5;
    if ( v8 )
    {
      v9 = (_RTL_BITMAP *)(a1 + 32);
      v10 = v8;
      do
      {
        RtlSetBits(v9, *v7, 1u);
        v7 += 2;
        --v10;
      }
      while ( v10 );
    }
  }
  v11 = __rdtsc();
  qword_140C22D28 += (((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) - v3;
  return v6;
}
