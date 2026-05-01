/*
 * XREFs of AslEnvExpandStrings2 @ 0x1800EDD8C
 * Callers:
 *     AslRegistryGetStringExpand @ 0x1800EDB74 (AslRegistryGetStringExpand.c)
 * Callees:
 *     AslpEnvResolveVars @ 0x1800EDEB0 (AslpEnvResolveVars.c)
 *     AslEnvExpandStrings @ 0x1800EF658 (AslEnvExpandStrings.c)
 *     AslLogCallPrintf @ 0x180738B40 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvExpandStrings2(int a1, wchar_t *a2, _WORD *a3, __int64 a4, _QWORD *a5, __int16 a6, __int16 a7)
{
  int v7; // r15d
  __int64 v8; // rbp
  __int64 v9; // rbx
  wchar_t *v10; // rdi
  PVOID Heap; // rsi
  int v12; // ebx
  __int64 v13; // r14
  __int16 v14; // r12
  __int16 v15; // r13
  unsigned int v16; // ebx
  const char *v18; // r9
  int v19; // r8d
  __int64 v20; // rax
  int v21; // eax
  char v22; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v7 = (int)a3;
  v8 = -1LL;
  LODWORD(v24) = 0;
  v9 = -1LL;
  v10 = a2;
  Heap = 0LL;
  do
    ++v9;
  while ( a2[v9] );
  v12 = v9 + 1;
  if ( a3 )
    *a3 = 0;
  v13 = (__int64)a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = a7;
  v15 = a6;
  if ( (unsigned int)AslpEnvResolveVars(a2, a6, a7, (__int64)&v24) != -1073741789 )
  {
    v16 = -1073741595;
    v18 = "AslpEnvResolveVars failed to fail properly for null buffer";
    v19 = 775;
LABEL_17:
    AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", v19, (_DWORD)v18, v22);
    return v16;
  }
  if ( v12 == (_DWORD)v24 )
    goto LABEL_9;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)v24);
  if ( !Heap )
  {
    v16 = -1073741801;
    v18 = "Out of memory";
    v19 = 783;
    goto LABEL_17;
  }
  v20 = -1LL;
  do
    ++v20;
  while ( v10[v20] );
  v21 = AslpEnvResolveVars(v10, v15, v14, (__int64)&v24);
  v16 = v21;
  if ( v21 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", 795, (unsigned int)"AslpEnvResolveVars failed [%x]", v21);
LABEL_23:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return v16;
  }
  v10 = (wchar_t *)Heap;
  do
LABEL_9:
    ++v8;
  while ( v10[v8] );
  v16 = AslEnvExpandStrings(a1, (_DWORD)v10, v8, v7, v25, v13);
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741789 )
    AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", 810, (unsigned int)"AslEnvExpandStrings failed [%x]", v16);
  if ( Heap )
    goto LABEL_23;
  return v16;
}
