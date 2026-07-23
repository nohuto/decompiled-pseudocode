/*
 * XREFs of sub_1402ECEB0 @ 0x1402ECEB0
 * Callers:
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1407FABA0 @ 0x1407FABA0 (sub_1407FABA0.c)
 *     sub_1408042A4 @ 0x1408042A4 (sub_1408042A4.c)
 * Callees:
 *     sub_1402ECFD8 @ 0x1402ECFD8 (sub_1402ECFD8.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_1405A862C @ 0x1405A862C (sub_1405A862C.c)
 *     sub_1406C3FB4 @ 0x1406C3FB4 (sub_1406C3FB4.c)
 *     sub_14079D5B4 @ 0x14079D5B4 (sub_14079D5B4.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 *     sub_14097EE0C @ 0x14097EE0C (sub_14097EE0C.c)
 *     sub_14097EE28 @ 0x14097EE28 (sub_14097EE28.c)
 *     sub_1409E4084 @ 0x1409E4084 (sub_1409E4084.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402ECEB0(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  int v9; // ebx
  int v10; // esi
  __int64 result; // rax
  void *v14; // rsi
  __int64 v15; // r14
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_DWORD *)(BugCheckParameter3 + 48);
  v7 = (a4 << 12) | 0xFFF;
  v8 = a3 << 12;
  v20 = 0;
  v9 = a4;
  v10 = a3;
  if ( (v6 & 0x200000) == 0 || (v6 & 0x2000000) != 0 || (v6 & 0x4000000) == 0 )
    goto LABEL_34;
  if ( a3 != (*(unsigned int *)(BugCheckParameter3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 32) << 32))
    || a4 != (*(unsigned int *)(BugCheckParameter3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = sub_1405A862C(BugCheckParameter3);
  if ( (int)result >= 0 )
  {
LABEL_34:
    result = sub_14079D5B4(BugCheckParameter3, a2, v10, v9, (__int64)&v20);
    if ( (int)result >= 0 )
    {
      v14 = 0LL;
      v15 = a5;
      if ( !v20 )
      {
        if ( a6 )
        {
          v17 = sub_1402EE0E0(BugCheckParameter3, 128LL);
          v18 = *(_QWORD *)(v17 + 8);
          *(_QWORD *)(v17 + 8) = 0LL;
          sub_14097EE0C(v18);
          *(_DWORD *)(v18 + 24) = v8 >> 12;
          *(_BYTE *)(v18 + 32) = v8 >> 44;
          *(_DWORD *)(v18 + 28) = v7 >> 12;
          *(_BYTE *)(v18 + 33) = v7 >> 44;
        }
        sub_1407BC0B0((PVOID)BugCheckParameter3);
LABEL_9:
        if ( (WORD2(xmmword_140D06900) & 0x8000) != 0 )
          sub_1409E4084(v8, v7 - v8 + 1, v15, 0x8000LL);
        return 0LL;
      }
      if ( (*(_DWORD *)(a5 + 1124) & 0x20) != 0 )
        return 3221225738LL;
      if ( sub_1402EE0E0(BugCheckParameter3, 2LL) )
        return 3221225541LL;
      if ( a6 )
      {
        result = PsChargeProcessNonPagedPoolQuota(v15, 64LL);
        if ( (int)result < 0 )
          return result;
        v19 = sub_1406C3FB4(v8, v7, 2LL);
        v14 = (void *)v19;
        if ( !v19 )
        {
          PsReturnProcessNonPagedPoolQuota(v15, 64LL);
          return 3221225626LL;
        }
        sub_14097EE0C(v19);
      }
      v16 = sub_1402ECFD8((PVOID)BugCheckParameter3, (__int64)v14);
      if ( v16 >= 0 )
        goto LABEL_9;
      if ( v14 )
      {
        sub_14097EE28(v14);
        ExFreePoolWithTag(v14, 0);
        PsReturnProcessNonPagedPoolQuota(v15, 64LL);
      }
      return (unsigned int)v16;
    }
  }
  return result;
}
