/*
 * XREFs of sub_1405E00E4 @ 0x1405E00E4
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_14025D01C @ 0x14025D01C (sub_14025D01C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ?precision@ios_base@std@@QEBA_JXZ @ 0x14096DD9C (-precision@ios_base@std@@QEBA_JXZ.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405E00E4(unsigned __int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  __int64 v4; // rdi
  __int64 v7; // rdi
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v9; // r14
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 i; // r8
  int v13; // eax
  NTSTATUS v14; // ebx
  __int64 j; // rsi
  void *v16; // rcx
  std::ios_base *v17; // rcx
  __int64 v18; // rax
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  if ( !byte_140D068E0 )
    return 3221225473LL;
  if ( a2 < 0x10 || (a2 & 0xF) != 0 )
    return 3221225476LL;
  if ( a3 )
  {
    if ( !SeSinglePrivilegeCheck(stru_140D3CAF0, a3) )
      return 3221225569LL;
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + v4 > 0x7FFFFFFF0000LL || a1 + v4 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v7 = (unsigned int)v4 >> 4;
  if ( (unsigned __int64)(24 * v7) > 0xFFFFFFFF )
    return 3221225621LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, (unsigned int)(24 * v7), 0x63537350u);
  v9 = PoolWithQuotaTag;
  Object = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v10 = (__int64)&PoolWithQuotaTag[v7];
  v11 = v10 + 8 * v7;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
  {
    v9[i] = *(_QWORD *)(a1 + 16LL * (unsigned int)i);
    *(_DWORD *)(v11 + 8 * i + 4) = 0;
    v13 = *(_DWORD *)(a1 + 16LL * (unsigned int)i + 8);
    *(_DWORD *)(v11 + 8 * i) = v13;
    if ( (unsigned __int16)(v13 - 1) > 8u )
    {
      v14 = -1073740712;
      goto LABEL_32;
    }
  }
  v14 = 0;
  for ( j = 0LL; (unsigned int)j < (unsigned int)v7; j = (unsigned int)(j + 1) )
  {
    v16 = (void *)v9[j];
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(v16, 2u, qword_140D06BB0, a3, &Object, 0LL);
    v17 = (std::ios_base *)Object;
    v9[j] = Object;
    if ( v14 < 0 )
      goto LABEL_30;
    v18 = std::ios_base::precision(v17);
    *(_QWORD *)(v10 + 8 * j) = v18;
    if ( !v18 )
    {
      v14 = -1073740715;
      goto LABEL_30;
    }
  }
  sub_14025D01C(v7, v10, v10 + 8 * v7);
LABEL_30:
  while ( (_DWORD)j )
  {
    j = (unsigned int)(j - 1);
    ObfDereferenceObjectWithTag((PVOID)v9[j], 0x746C6644u);
  }
LABEL_32:
  ExFreePoolWithTag(v9, 0x63537350u);
  return (unsigned int)v14;
}
