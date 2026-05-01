/*
 * XREFs of AslEnvExpandStrings2 @ 0x1800A01D0
 * Callers:
 *     SdbpResolveMatchingFile @ 0x180096F58 (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslEnvExpandStrings @ 0x1800A0000 (AslEnvExpandStrings.c)
 *     AslpEnvResolveVars @ 0x1800A097C (AslpEnvResolveVars.c)
 */

__int64 __fastcall AslEnvExpandStrings2(
        __int64 a1,
        unsigned __int16 *a2,
        _WORD *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int16 a6,
        __int16 a7)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned __int16 *v10; // rdi
  PVOID Heap; // rsi
  int v12; // ebx
  _QWORD *v13; // r14
  __int16 v14; // r12
  __int16 v15; // r13
  unsigned int v16; // ebx
  __int64 v17; // rax
  int v18; // eax
  __int16 v20[4]; // [rsp+20h] [rbp-58h]
  __int16 v21[4]; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v8 = -1LL;
  LODWORD(v23) = 0;
  v9 = -1LL;
  v10 = a2;
  Heap = 0LL;
  do
    ++v9;
  while ( a2[v9] );
  v12 = v9 + 1;
  if ( a3 )
    *a3 = 0;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = a7;
  v15 = a6;
  if ( (unsigned int)AslpEnvResolveVars(a2, a6, a7, (__int64)&v23) != -1073741789 )
  {
    v16 = -1073741595;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslEnvExpandStrings2",
      775,
      (unsigned int)"AslpEnvResolveVars failed to fail properly for null buffer");
    return v16;
  }
  if ( v12 != (_DWORD)v23 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)v23);
    if ( !Heap )
    {
      v16 = -1073741801;
      AslLogCallPrintf(1LL, (unsigned int)"AslEnvExpandStrings2", 783, (unsigned int)"Out of memory");
      return v16;
    }
    v17 = -1LL;
    do
      ++v17;
    while ( v10[v17] );
    v18 = AslpEnvResolveVars(v10, v15, v14, (__int64)&v23);
    v16 = v18;
    if ( v18 < 0 )
    {
      *(_DWORD *)v20 = v18;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslEnvExpandStrings2",
        795,
        (unsigned int)"AslpEnvResolveVars failed [%x]",
        *(_QWORD *)v20);
LABEL_22:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v16;
    }
    v10 = (unsigned __int16 *)Heap;
  }
  do
    ++v8;
  while ( v10[v8] );
  v16 = AslEnvExpandStrings(a1, v10, v8, a3, v24, v13);
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741789 )
  {
    *(_DWORD *)v21 = v16;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslEnvExpandStrings2",
      810,
      (unsigned int)"AslEnvExpandStrings failed [%x]",
      *(_QWORD *)v21);
  }
  if ( Heap )
    goto LABEL_22;
  return v16;
}
