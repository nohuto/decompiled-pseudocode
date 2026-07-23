/*
 * XREFs of sub_14022CA54 @ 0x14022CA54
 * Callers:
 *     sub_1406A377C @ 0x1406A377C (sub_1406A377C.c)
 * Callees:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_14029F580 @ 0x14029F580 (sub_14029F580.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14022CA54(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile LONG *v5; // r13
  __int64 v6; // rbp
  KIRQL v7; // al
  __int64 *v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 result; // rax
  __int64 *v12; // r12
  __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  struct _KPRCB *v19; // r9
  __int64 v20; // r8

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a2 + 8) == 16 )
    --*((_WORD *)CurrentThread + 243);
  else
    --*((_WORD *)CurrentThread + 242);
  v5 = (volatile LONG *)(BugCheckParameter2 + 72);
  while ( 1 )
  {
    v6 = 0LL;
    v7 = ExAcquireSpinLockExclusive(v5);
    v8 = *(__int64 **)(BugCheckParameter2 + 80);
    v9 = v7;
    if ( v8 )
    {
      while ( 1 )
      {
        v12 = v8;
        if ( (*(_DWORD *)(a2 + 8) & (_DWORD)v8[1]) != 0 )
          break;
        v8 = (__int64 *)*v8;
        if ( !v8 )
          goto LABEL_5;
      }
      v13 = sub_140347C10(BugCheckParameter2, 0LL, 0LL);
      v6 = v13;
      v8 = v12;
      if ( v13 )
      {
        sub_14029F580(v13);
        v8 = v12;
      }
    }
LABEL_5:
    *(_DWORD *)(a2 + 20) = 0;
    *(_QWORD *)(a2 + 32) = a2 + 24;
    *(_QWORD *)(a2 + 24) = a2 + 24;
    *(_WORD *)(a2 + 16) = 263;
    *(_BYTE *)(a2 + 18) = 6;
    *(_QWORD *)a2 = *(_QWORD *)(BugCheckParameter2 + 80);
    *(_QWORD *)(BugCheckParameter2 + 80) = a2;
    if ( !v8 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    sub_140217454(a2 + 16, 0x12u);
    if ( v6 )
    {
      sub_140347C10(BugCheckParameter2, v6, 0LL);
      sub_140353BB0(BugCheckParameter2);
    }
  }
  v10 = sub_140347C10(BugCheckParameter2, 0LL, 0LL);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v20 = *((_QWORD *)v19 + 4375);
        v18 = ((unsigned int)result & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= result;
        if ( v18 )
          result = sub_140418E4C(v19);
      }
    }
  }
  __writecr8(v9);
  return result;
}
