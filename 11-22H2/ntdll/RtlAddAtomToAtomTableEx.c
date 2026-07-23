/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x1800035FC
 * Callers:
 *     RtlAddAtomToAtomTable @ 0x1800035F0 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlpHashStringToAtom @ 0x180003960 (RtlpHashStringToAtom.c)
 *     RtlpLockAtomTable @ 0x180003A9C (RtlpLockAtomTable.c)
 *     RtlGetIntegerAtom @ 0x180003AD0 (RtlGetIntegerAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x180003BAC (RtlpAllocateAtomTableEntry.c)
 *     RtlpInsertStringAtom @ 0x180003C08 (RtlpInsertStringAtom.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(_RTL_SRWLOCK *a1, WCHAR *a2, _WORD *a3, unsigned int a4)
{
  __int64 v7; // r8
  int v8; // ebx
  _WORD *v9; // rdx
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int16 v14; // ax
  __int16 v15; // cx
  PVOID BaseAddress; // [rsp+48h] [rbp-40h] BYREF
  _WORD *v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-30h] BYREF
  unsigned int IntegerAtom; // [rsp+A8h] [rbp+20h] BYREF

  IntegerAtom = a4;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( RtlGetIntegerAtom(a2, (PUSHORT)&IntegerAtom) )
    {
      v15 = IntegerAtom;
      if ( (unsigned __int16)IntegerAtom < 0xC000u )
      {
        v8 = 0;
      }
      else
      {
        v15 = 0;
        LOWORD(IntegerAtom) = 0;
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
    v8 = RtlpHashStringToAtom(a1, a2, v7, &v19, &IntegerAtom, &v18, &BaseAddress);
    if ( v8 >= 0 )
    {
      v9 = BaseAddress;
      if ( BaseAddress )
      {
        if ( *v18 == 0xFFFF )
          v18[1] |= 1u;
        else
          ++*v18;
        if ( !a3 )
          goto LABEL_12;
        v14 = v9[5];
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
      v11 = RtlpAllocateAtomTableEntry(IntegerAtom, &v18);
      v12 = v11;
      BaseAddress = (PVOID)v11;
      if ( v11 )
      {
        v13 = IntegerAtom;
        memmove((void *)(v11 + 18), a2, IntegerAtom);
        v13 >>= 1;
        *(_BYTE *)(v12 + 16) = v13;
        *(_WORD *)(v12 + 2LL * (unsigned __int8)v13 + 18) = 0;
        if ( !(unsigned __int8)RtlpInsertStringAtom(a1, v12) )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
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
    RtlReleaseSRWLockExclusive(a1 + 1);
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
