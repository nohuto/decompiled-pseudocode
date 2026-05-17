/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x180054DF0
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001E3CC (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18001E860 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180020160 (RtlUnwindEx.c)
 *     RtlUnwind @ 0x1800547E0 (RtlUnwind.c)
 *     RtlInitializeExtendedContext @ 0x1800548E0 (RtlInitializeExtendedContext.c)
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x180054F94 (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x180055064 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800550C4 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlInitializeExtendedContext2(__int64 a1, unsigned int a2, _QWORD *a3, unsigned __int64 a4)
{
  size_t v5; // rbp
  _DWORD *v8; // rbx
  __int64 result; // rax
  unsigned int v10; // r11d
  _DWORD *v11; // rcx
  int v12; // ecx
  char v13; // r14
  _DWORD *v14; // r8
  int v15; // ecx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  _DWORD v18[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v5) = 0;
  v8 = 0LL;
  result = RtlpValidateContextFlags(a2, v18);
  if ( (int)result < 0 )
    return result;
  if ( (v10 & 0x10000) != 0 )
  {
    v11 = (_DWORD *)((a1 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v8 = v11 + 179;
LABEL_20:
    *v11 = v10;
    goto LABEL_5;
  }
  if ( (v10 & 0x100000) == 0 )
  {
    if ( (v10 & 0x200000) != 0 )
    {
      v11 = (_DWORD *)((a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v8 = v11 + 104;
    }
    else
    {
      if ( (v10 & 0x400000) == 0 )
        goto LABEL_6;
      v11 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v8 = v11 + 228;
    }
    goto LABEL_20;
  }
  v11 = (_DWORD *)((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v11[12] = v10;
  v8 = v11 + 308;
LABEL_5:
  v8[3] = (_DWORD)v8 - (_DWORD)v11;
LABEL_6:
  v12 = v8[3];
  v8[2] = -v12;
  *v8 = -v12;
  v8[1] = v12 + 32;
  if ( (v10 & 0x10020) != 65568 && (v10 & 0x10000) != 0 )
    v8[3] = 204;
  v13 = v18[0];
  v14 = v8 + 8;
  if ( (v18[0] & 2) != 0 )
  {
    v16 = ((unsigned __int64)v8 + 95) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v19 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL) & a4;
      RtlpRemoveArchDisallowedXStateFeatures(v10, &v19);
      a4 = v19;
    }
    v5 = (unsigned int)RtlpGetEntireXStateAreaLength(a4) - 512;
    memset_thunk_772440563353939046((void *)(((unsigned __int64)v8 + 95) & 0xFFFFFFFFFFFFFFC0uLL), 0, v5);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v8 + 95) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a4 | 0x8000000000000000uLL;
    v14 = (_DWORD *)(v16 + v5);
    v15 = v16 - (_DWORD)v8;
    v8[1] = v5 + v16 - (_DWORD)v8 - *v8;
  }
  else
  {
    v15 = 33;
  }
  v8[4] = v15;
  v8[5] = v5;
  if ( (v13 & 4) != 0 )
  {
    v17 = ((unsigned __int64)v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_OWORD *)v17 = 0LL;
    *(_QWORD *)(v17 + 16) = 0LL;
    LODWORD(v17) = v17 - (_DWORD)v8;
    v8[6] = v17;
    LODWORD(v17) = v17 - *v8;
    v8[7] = 24;
    v8[1] = v17 + 24;
  }
  *a3 = v8;
  return 0LL;
}
