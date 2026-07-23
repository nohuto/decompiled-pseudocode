/*
 * XREFs of PopGenerateUnHibernatedMdl @ 0x140AA2BDC
 * Callers:
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x1402E0530 (RtlSetBits.c)
 *     PopGenerateScratchMdl @ 0x14058EC04 (PopGenerateScratchMdl.c)
 */

PMDL __fastcall PopGenerateUnHibernatedMdl(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  PMDL ScratchMdl; // rax
  int v5; // r8d
  PMDL v6; // rbx
  ULONG *v7; // rdi
  ULONG v8; // r8d
  _RTL_BITMAP *v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rax

  v3 = __rdtsc();
  ScratchMdl = PopGenerateScratchMdl(a1, a2);
  v5 = 0;
  v6 = ScratchMdl;
  if ( ScratchMdl )
  {
    v7 = (ULONG *)&ScratchMdl[1];
    LOBYTE(v5) = (ScratchMdl->ByteCount & 0xFFF) != 0;
    v8 = (ScratchMdl->ByteCount >> 12) + v5;
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
  qword_140C3D3A8 += (((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) - v3;
  return v6;
}
