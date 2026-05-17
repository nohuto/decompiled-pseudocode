/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x18003A630
 * Callers:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 * Callees:
 *     RtlpWaitOnCriticalSection @ 0x18001D420 (RtlpWaitOnCriticalSection.c)
 *     RtlpInitializeStaticCriticalSection @ 0x18008AFA0 (RtlpInitializeStaticCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(__int64 a1, __int64 a2, __int64 a3, volatile signed __int32 *a4)
{
  unsigned __int64 v5; // rdi
  bool v6; // bp
  char v7; // r15
  char v8; // al
  char v9; // r12
  __int64 v10; // r8
  signed __int32 v11; // eax
  int v12; // r14d
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int v15; // ebx
  signed __int32 v16; // eax
  unsigned int v17; // edi
  __int64 result; // rax
  char v19; // bl
  int v20; // edx
  signed __int32 v21; // ecx
  unsigned int v22; // ebx
  unsigned __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int i; // edx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r11
  signed __int32 v28; // eax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax

  if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    RtlpInitializeStaticCriticalSection();
  v5 = 0LL;
  v6 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v5 = *(_QWORD *)(a1 + 32) & 0xFFFFFFLL;
    v6 = (*(_QWORD *)(a1 + 32) & 0x2000000LL) != 0;
  }
  v7 = 0;
  v8 = 1;
  v9 = 0;
LABEL_5:
  v10 = 0LL;
  while ( 1 )
  {
    if ( v8 )
    {
      v11 = *(_DWORD *)(a1 + 8);
      a4 = (volatile signed __int32 *)(a1 + 8);
      v12 = 3;
      if ( !v9 )
        v12 = 1;
      if ( (v11 & 1) != 0 && v11 == _InterlockedCompareExchange(a4, v11 ^ v12, v11) )
        goto LABEL_18;
      v13 = 10 * v5;
      if ( MEMORY[0x7FFE036A] > 1u )
        break;
    }
LABEL_26:
    v19 = 0;
    _m_prefetchw((const void *)(a1 + 8));
    v20 = *(_DWORD *)(a1 + 8);
    if ( v9 )
    {
      if ( (v20 & 2) != 0 )
        goto LABEL_34;
      if ( (v20 & 1) != 0 )
      {
        v19 = 1;
        v21 = v20 ^ 3;
      }
      else
      {
        v21 = v20 - 2;
      }
    }
    else if ( (v20 & 1) != 0 )
    {
      v19 = 1;
      v21 = v20 ^ 1;
    }
    else
    {
      v21 = v20 - 4;
      if ( (((_BYTE)v20 - 4) & 2) == 0 )
        v21 = v20 - 6;
    }
    if ( v21 == v20 )
      goto LABEL_34;
    if ( v20 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v21, v20) )
    {
      if ( v19 )
        goto LABEL_18;
      v9 = 1;
      v20 = v21;
LABEL_34:
      RtlpWaitOnCriticalSection(a1, v20, v10, (__int64)a4);
      v7 = 1;
      if ( v6 && v5 > 0x64 )
        --v5;
      v8 = 1;
      goto LABEL_5;
    }
    v22 = v10;
    if ( (_DWORD)v10 )
    {
      if ( (unsigned int)v10 < 0x1FFF )
        v22 = 2 * v10;
    }
    else
    {
      if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
        goto LABEL_48;
      v22 = 64;
    }
    v10 = v22;
    v23 = __rdtsc();
    v24 = 10 * (((v22 - 1) & (unsigned int)v23) + v22) / MEMORY[0x7FFE02D6];
    for ( i = 0; i < v24; ++i )
      _mm_pause();
LABEL_48:
    v8 = 0;
  }
  if ( a1 != -8 && MEMORY[0x7FFE0297] )
  {
    v26 = __rdtsc();
    v27 = v26 + v13;
    while ( 1 )
    {
      __asm { monitorx rax, rcx, rdx }
      if ( (*a4 & 1) != 0 )
      {
        v28 = *a4;
        if ( v28 == _InterlockedCompareExchange(a4, v28 ^ v12, v28) )
          break;
      }
      v29 = v26;
      v30 = __rdtsc();
      v26 = v30;
      if ( v30 <= v29 || v30 >= v27 )
        goto LABEL_26;
      __asm { mwaitx  rax, rcx, rbx }
    }
  }
  else
  {
    v14 = 0;
    v15 = v13 / MEMORY[0x7FFE02D6];
    while ( 1 )
    {
      if ( (*a4 & 1) != 0 )
      {
        v16 = *a4;
        if ( v16 == _InterlockedCompareExchange(a4, v16 ^ v12, v16) )
          break;
      }
      if ( v14 == v15 )
        goto LABEL_26;
      _mm_pause();
      ++v14;
    }
  }
LABEL_18:
  if ( v6 )
  {
    if ( !v7 && v5 < 0x7D0 )
      LODWORD(v5) = v5 + 1;
    v17 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ v5) & 0xFFFFFF;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v17 &= 0xFF000000;
    *(_QWORD *)(a1 + 32) = v17;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
