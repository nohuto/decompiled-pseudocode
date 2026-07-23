/*
 * XREFs of sub_14042C940 @ 0x14042C940
 * Callers:
 *     sub_140AB5180 @ 0x140AB5180 (sub_140AB5180.c)
 * Callees:
 *     sub_14054EA40 @ 0x14054EA40 (sub_14054EA40.c)
 */

__int64 __fastcall sub_14042C940(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  bool v8; // zf
  __int64 v9; // rcx
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v17; // [rsp+C0h] [rbp+8h]

  v8 = (v17 & 1) == 0;
  if ( (v17 & 1) != 0 )
  {
LABEL_6:
    if ( v8 )
    {
      _mm_lfence();
      __asm { rdsspq  rdx }
      if ( _RDX )
        sub_14054EA40(2, (_DWORD)_RDX, 0, *_RDX, 0LL, 4);
    }
    else if ( (byte_140E01840 & 1) != 0 )
    {
      _mm_lfence();
    }
    else
    {
      __asm { swapgs }
      _mm_lfence();
      __asm { swapgs }
      __asm { rdsspq  rdx }
      if ( _RDX )
      {
        __asm
        {
          clrssbsy qword ptr [rdx]
          setssbsy
        }
      }
    }
    return sub_14042CB00(a1, a2, retaddr, a4);
  }
  else
  {
    v9 = 8LL;
    while ( retaddr != *((void **)&unk_140E01910 + v9 - 1) )
    {
      if ( !--v9 )
      {
        v8 = 1;
        goto LABEL_6;
      }
    }
    if ( (dword_140C2BD48 & 2) != 0 )
      __writemsr(0x1D9u, __readmsr(0x1D9u) | 1);
    if ( (byte_140E01840 & 1) == 0 )
      __asm { iretq }
    return sub_140AB6C40(a1, a2, a3, a4, a5, a6, a7, a8);
  }
}
