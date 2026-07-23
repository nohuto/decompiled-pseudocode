/*
 * XREFs of SdbpCheckAllAttributes @ 0x1407578E4
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140756AF0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140A505F0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbReadDWORDTag @ 0x140755648 (SdbReadDWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140757558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140757B94 (SdbFindFirstTag.c)
 *     AslAlloc @ 0x140758688 (AslAlloc.c)
 *     AslFileAllocAndGetAttributes @ 0x140758FD8 (AslFileAllocAndGetAttributes.c)
 *     SdbpCheckAttribute @ 0x140759170 (SdbpCheckAttribute.c)
 *     SdbReadQWORDTag @ 0x140808F84 (SdbReadQWORDTag.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int Attributes; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  char *v10; // rbp
  unsigned int v11; // r13d
  int *v12; // r12
  unsigned __int16 v13; // bx
  unsigned int FirstTag; // eax
  __int64 v15; // r8
  __int64 *p_QWORDTag; // r14
  int v17; // ecx
  unsigned int v18; // r15d
  __int64 StringTagPtr; // rax
  __int64 v20; // rcx
  void (__fastcall *v21)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  char *v22; // rdi
  __int64 v23; // rsi
  int v24; // eax
  int DWORDTag; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-54h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v33; // [rsp+B0h] [rbp+28h]

  Attributes = 0;
  DWORDTag = 0;
  v7 = a4;
  QWORDTag = 0LL;
  v8 = a3;
  *a1 = 0;
  v9 = 1;
  v27 = 1;
  if ( !a5 )
    return Attributes;
  if ( *(_DWORD *)(a5 + 80) )
  {
    if ( !*(_QWORD *)(a5 + 32) )
      return Attributes;
  }
  else if ( !*(_QWORD *)(a5 + 8) )
  {
    return Attributes;
  }
  v10 = (char *)AslAlloc(a1, 1088LL);
  if ( !v10 )
    return (unsigned int)-1073741801;
  v11 = 0;
  v12 = (int *)&unk_140C0CB84;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 - 2);
    v33 = v13;
    FirstTag = SdbFindFirstTag(v8, v7, v13);
    if ( !FirstTag )
      goto LABEL_7;
    p_QWORDTag = 0LL;
    v17 = v13 & 0xF000;
    v18 = 0;
    switch ( v17 )
    {
      case 20480:
        QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
        p_QWORDTag = &QWORDTag;
        v18 = 8;
        break;
      case 16384:
        DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0LL);
        p_QWORDTag = (__int64 *)&DWORDTag;
        v18 = 4;
        break;
      case 24576:
        StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v15);
        v20 = -1LL;
        p_QWORDTag = (__int64 *)StringTagPtr;
        do
          ++v20;
        while ( *(_WORD *)(StringTagPtr + 2 * v20) );
        v18 = 2 * v20 + 2;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes(v10, a5, 1LL << *v12);
    if ( (Attributes & 0x80000000) != 0 )
      break;
    if ( (*(_DWORD *)&v10[32 * *v12 + 24] & 1) == 0 )
      goto LABEL_22;
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v27, v33, (_DWORD)p_QWORDTag, v18, (__int64)&v10[32 * *v12]) )
    {
      Attributes = -1073741595;
      AslLogCallPrintf(1LL);
      goto LABEL_23;
    }
    v9 = v27;
    v21 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 1752);
    if ( v21 )
      v21(v33, p_QWORDTag, v18, v27);
    if ( !v9 )
    {
LABEL_21:
      *a1 = v9;
LABEL_22:
      Attributes = 0;
      goto LABEL_23;
    }
    v8 = a3;
    v7 = a4;
LABEL_7:
    ++v11;
    v12 += 2;
    if ( v11 >= 0x26 )
      goto LABEL_21;
  }
  AslLogCallPrintf(1LL);
LABEL_23:
  v22 = v10 + 16;
  v23 = 34LL;
  do
  {
    v24 = *((_DWORD *)v22 + 2);
    if ( (v24 & 1) != 0 && *((_DWORD *)v22 - 4) == 4 && (v24 & 4) != 0 && *(_QWORD *)v22 )
      ExFreePoolWithTag(*(PVOID *)v22, 0x74705041u);
    v22 += 32;
    --v23;
  }
  while ( v23 );
  memset(v10, 0, 0x440uLL);
  ExFreePoolWithTag(v10, 0x74705041u);
  return Attributes;
}
