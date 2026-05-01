/*
 * XREFs of SdbpCheckAllAttributes @ 0x18009320C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x180094DD0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095CE0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     SdbpCheckAttribute @ 0x1800934DC (SdbpCheckAttribute.c)
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180094294 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x1800944E8 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x180094584 (SdbReadQWORDTag.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslFileAllocAndGetAttributes @ 0x18009A750 (AslFileAllocAndGetAttributes.c)
 *     AslFileFreeAttributes @ 0x18009AB74 (AslFileFreeAttributes.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(unsigned int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  _BYTE *Heap; // rbp
  unsigned int v10; // edi
  int *v11; // r12
  unsigned int v12; // r13d
  unsigned __int16 v13; // bx
  unsigned int FirstTag; // eax
  int v15; // ecx
  __int64 *p_DWORDTag; // r14
  unsigned int v17; // r15d
  __int64 StringTagPtr; // rax
  __int64 v19; // rcx
  int Attributes; // eax
  void (__fastcall *v21)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  __int64 v23; // [rsp+20h] [rbp-68h]
  unsigned int v24; // [rsp+30h] [rbp-58h] BYREF
  int DWORDTag; // [rsp+34h] [rbp-54h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v31; // [rsp+B0h] [rbp+28h]

  v6 = 0;
  *a1 = 0;
  v7 = a4;
  v24 = 1;
  v8 = a3;
  if ( !a5 )
    return v6;
  if ( *(_DWORD *)(a5 + 72) )
  {
    if ( !*(_QWORD *)(a5 + 32) )
      return v6;
  }
  else if ( !*(_QWORD *)(a5 + 8) )
  {
    return v6;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x440uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  v10 = v24;
  v11 = dword_1800DB7E4;
  v12 = 0;
  while ( 1 )
  {
    v13 = *((_WORD *)v11 - 2);
    v31 = v13;
    FirstTag = SdbFindFirstTag(v8, v7, v13);
    if ( !FirstTag )
      goto LABEL_25;
    v15 = v13 & 0xF000;
    p_DWORDTag = 0LL;
    v17 = 0;
    switch ( v15 )
    {
      case 16384:
        DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0LL);
        p_DWORDTag = (__int64 *)&DWORDTag;
        v17 = 4;
        break;
      case 20480:
        QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
        p_DWORDTag = &QWORDTag;
        v17 = 8;
        break;
      case 24576:
        StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
        p_DWORDTag = (__int64 *)StringTagPtr;
        v19 = -1LL;
        do
          ++v19;
        while ( *(_WORD *)(StringTagPtr + 2 * v19) );
        v17 = 2 * v19 + 2;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes(Heap, a5, 1LL << *v11);
    v6 = Attributes;
    if ( Attributes < 0 )
      break;
    if ( (Heap[32 * *v11 + 24] & 1) == 0 )
    {
      v6 = 0;
      goto LABEL_27;
    }
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v24, v31, (_DWORD)p_DWORDTag, v17, (__int64)&Heap[32 * *v11]) )
    {
      v6 = -1073741595;
      LODWORD(v23) = -1073741595;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckAllAttributes",
        864,
        (unsigned int)"SdbpCheckAttribute failed [%x]",
        v23);
      goto LABEL_27;
    }
    v10 = v24;
    v21 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 1752);
    if ( v21 )
      v21(v31, p_DWORDTag, v17, v24);
    if ( !v10 )
    {
LABEL_26:
      v6 = 0;
      *a1 = v10;
      goto LABEL_27;
    }
    v8 = a3;
    v7 = a4;
LABEL_25:
    ++v12;
    v11 += 2;
    if ( v12 >= 0x26 )
      goto LABEL_26;
  }
  LODWORD(v23) = dword_1800DB7E4[2 * v12];
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCheckAllAttributes",
    841,
    (unsigned int)"Failed to get attribute %d [%x]",
    v23,
    Attributes);
LABEL_27:
  AslFileFreeAttributes(Heap);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v6;
}
