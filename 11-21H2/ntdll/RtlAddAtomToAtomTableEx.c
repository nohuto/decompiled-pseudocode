/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x18006267C
 * Callers:
 *     RtlAddAtomToAtomTable @ 0x180062670 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpHashStringToAtom @ 0x1800629D0 (RtlpHashStringToAtom.c)
 *     RtlGetIntegerAtom @ 0x180062B10 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x180062B48 (RtlpLockAtomTable.c)
 *     RtlpInsertStringAtom @ 0x180062C20 (RtlpInsertStringAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x180062E64 (RtlpAllocateAtomTableEntry.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, _WORD *a2, _WORD *a3, int a4)
{
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int16 v14; // ax
  __int16 v15; // ax
  __int64 v17; // [rsp+48h] [rbp-40h] BYREF
  _WORD *v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-30h] BYREF
  size_t Size; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(Size) = a4;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( (unsigned __int8)RtlGetIntegerAtom(a2, &Size) )
    {
      v15 = Size;
      if ( (unsigned __int16)Size < 0xC000u )
      {
        v8 = 0;
      }
      else
      {
        v15 = 0;
        LOWORD(Size) = 0;
        v8 = -1073741811;
      }
      if ( a3 )
        *a3 = v15;
      goto LABEL_26;
    }
    if ( !*a2 )
    {
      v8 = -1073741773;
      goto LABEL_26;
    }
    v8 = RtlpHashStringToAtom(a1, a2, v7, &v19, &Size, &v18, &v17);
    if ( v8 >= 0 )
    {
      v9 = v17;
      if ( v17 )
      {
        if ( *v18 == 0xFFFF )
          v18[1] |= 1u;
        else
          ++*v18;
        if ( !a3 )
          goto LABEL_12;
        v14 = *(_WORD *)(v9 + 10);
LABEL_11:
        *a3 = v14;
LABEL_12:
        v8 = 0;
        goto LABEL_26;
      }
      v10 = v19;
      if ( !v19 )
      {
        v8 = -1073741811;
        goto LABEL_26;
      }
      v8 = -1073741801;
      v11 = RtlpAllocateAtomTableEntry((unsigned int)Size, &v18);
      v12 = v11;
      v17 = v11;
      if ( v11 )
      {
        v13 = (unsigned int)Size;
        memmove((void *)(v11 + 18), a2, (unsigned int)Size);
        v13 >>= 1;
        *(_BYTE *)(v12 + 16) = v13;
        *(_WORD *)(v12 + 2LL * (unsigned __int8)v13 + 18) = 0;
        if ( !(unsigned __int8)RtlpInsertStringAtom(a1, v12) )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
          v8 = -1073741801;
          goto LABEL_26;
        }
        *(_WORD *)(v12 + 10) = *(_WORD *)(v12 + 8) | 0xC000;
        *v10 = v12;
        if ( !a3 )
          goto LABEL_12;
        v14 = *(_WORD *)(v12 + 10);
        goto LABEL_11;
      }
    }
LABEL_26:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
