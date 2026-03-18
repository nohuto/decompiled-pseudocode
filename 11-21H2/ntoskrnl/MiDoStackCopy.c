/*
 * XREFs of MiDoStackCopy @ 0x140200230
 * Callers:
 *     <none>
 * Callees:
 *     MiJumpStackTarget @ 0x1402003C0 (MiJumpStackTarget.c)
 *     MiGetLeafPfnBuddy @ 0x14024A35C (MiGetLeafPfnBuddy.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA8D0 (KeExpandKernelStackAndCalloutInternal.c)
 *     RtlpGetStackLimits @ 0x1402AB970 (RtlpGetStackLimits.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeGetCurrentStackPointer @ 0x14041FAB0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, unsigned __int64 *a2, ULONG_PTR a3, ULONG_PTR a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 *v5; // rdi
  __int64 v6; // rcx
  bool v7; // cf
  __int16 v8; // dx
  __int64 v9; // r10
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF

  v4 = *a2;
  v5 = a2;
  v6 = 6 * *a2;
  BugCheckParameter3[0] = (ULONG_PTR)a2;
  v7 = a2[7] != 0;
  BugCheckParameter3[1] = a3;
  BugCheckParameter3[2] = a4;
  if ( v4 > qword_140C50840
    || ((*(_QWORD *)(8 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
    || ((*(_QWORD *)(8 * v6 - 0x220000000000LL + 40) >> 60) & 7) != 2
    || (LOWORD(a2) = v7 + 1, MiGetLeafPfnBuddy(8 * v6 - 0x220000000000LL, a2) == -32)
    || (*(_BYTE *)(v9 + 34) & 7) != 6
    || *(_WORD *)(v9 + 32) != v8 )
  {
    *((_DWORD *)v5 + 10) = -1073740748;
    return MiJumpStackTarget(BugCheckParameter3);
  }
  v14 = 0LL;
  v15 = 0LL;
  if ( (unsigned __int8)RtlpGetStackLimits(&v14, &v15) && (v14 != 0xFFFF800000000000uLL || v15 != -1) )
  {
    v10 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = (((unsigned __int64)KeGetCurrentStackPointer() >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( v10 <= v11 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(v10);
      if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFFLL) == v4 )
        goto LABEL_16;
      v10 += 8LL;
    }
    return MiJumpStackTarget(BugCheckParameter3);
  }
LABEL_16:
  result = KeExpandKernelStackAndCalloutInternal((ULONG_PTR)MiJumpStackTarget, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (int)result < 0 )
  {
    *((_DWORD *)v5 + 10) = result;
    return MiJumpStackTarget(BugCheckParameter3);
  }
  return result;
}
