/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x18003A630
 * Callers:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 * Callees:
 *     RtlpWaitOnCriticalSection @ 0x18001D420 (RtlpWaitOnCriticalSection.c)
 *     RtlpInitializeStaticCriticalSection @ 0x18008AFA0 (RtlpInitializeStaticCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(__int64 a1)
{
  unsigned __int64 v2; // rdi
  bool v3; // bp
  char v4; // r15
  char v5; // al
  char v6; // r12
  unsigned int v7; // r8d
  signed __int32 v8; // eax
  volatile signed __int32 *v9; // r9
  int v10; // r14d
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned int v13; // ebx
  signed __int32 v14; // eax
  unsigned int v15; // edi
  __int64 result; // rax
  char v17; // bl
  int v18; // edx
  signed __int32 v19; // ecx
  int v20; // ebx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int i; // edx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r11
  signed __int32 v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax

  if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    RtlpInitializeStaticCriticalSection();
  v2 = 0LL;
  v3 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v2 = *(_QWORD *)(a1 + 32) & 0xFFFFFFLL;
    v3 = (*(_QWORD *)(a1 + 32) & 0x2000000LL) != 0;
  }
  v4 = 0;
  v5 = 1;
  v6 = 0;
LABEL_5:
  v7 = 0;
  while ( 1 )
  {
    if ( v5 )
    {
      v8 = *(_DWORD *)(a1 + 8);
      v9 = (volatile signed __int32 *)(a1 + 8);
      v10 = 3;
      if ( !v6 )
        v10 = 1;
      if ( (v8 & 1) != 0 && v8 == _InterlockedCompareExchange(v9, v8 ^ v10, v8) )
        goto LABEL_18;
      v11 = 10 * v2;
      if ( MEMORY[0x7FFE036A] > 1u )
        break;
    }
LABEL_26:
    v17 = 0;
    _m_prefetchw((const void *)(a1 + 8));
    v18 = *(_DWORD *)(a1 + 8);
    if ( v6 )
    {
      if ( (v18 & 2) != 0 )
        goto LABEL_34;
      if ( (v18 & 1) != 0 )
      {
        v17 = 1;
        v19 = v18 ^ 3;
      }
      else
      {
        v19 = v18 - 2;
      }
    }
    else if ( (v18 & 1) != 0 )
    {
      v17 = 1;
      v19 = v18 ^ 1;
    }
    else
    {
      v19 = v18 - 4;
      if ( (((_BYTE)v18 - 4) & 2) == 0 )
        v19 = v18 - 6;
    }
    if ( v19 == v18 )
      goto LABEL_34;
    if ( v18 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v19, v18) )
    {
      if ( v17 )
        goto LABEL_18;
      v6 = 1;
      v18 = v19;
LABEL_34:
      RtlpWaitOnCriticalSection(a1, v18);
      v4 = 1;
      if ( v3 && v2 > 0x64 )
        --v2;
      v5 = 1;
      goto LABEL_5;
    }
    v20 = v7;
    if ( v7 )
    {
      if ( v7 < 0x1FFF )
        v20 = 2 * v7;
    }
    else
    {
      if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
        goto LABEL_48;
      v20 = 64;
    }
    v7 = v20;
    v21 = __rdtsc();
    v22 = 10 * (((v20 - 1) & (unsigned int)v21) + v20) / MEMORY[0x7FFE02D6];
    for ( i = 0; i < v22; ++i )
      _mm_pause();
LABEL_48:
    v5 = 0;
  }
  if ( a1 != -8 && MEMORY[0x7FFE0297] )
  {
    v24 = __rdtsc();
    v25 = v24 + v11;
    while ( 1 )
    {
      __asm { monitorx rax, rcx, rdx }
      if ( (*v9 & 1) != 0 )
      {
        v26 = *v9;
        if ( v26 == _InterlockedCompareExchange(v9, v26 ^ v10, v26) )
          break;
      }
      v27 = v24;
      v28 = __rdtsc();
      v24 = v28;
      if ( v28 <= v27 || v28 >= v25 )
        goto LABEL_26;
      __asm { mwaitx  rax, rcx, rbx }
    }
  }
  else
  {
    v12 = 0;
    v13 = v11 / MEMORY[0x7FFE02D6];
    while ( 1 )
    {
      if ( (*v9 & 1) != 0 )
      {
        v14 = *v9;
        if ( v14 == _InterlockedCompareExchange(v9, v14 ^ v10, v14) )
          break;
      }
      if ( v12 == v13 )
        goto LABEL_26;
      _mm_pause();
      ++v12;
    }
  }
LABEL_18:
  if ( v3 )
  {
    if ( !v4 && v2 < 0x7D0 )
      LODWORD(v2) = v2 + 1;
    v15 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ v2) & 0xFFFFFF;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v15 &= 0xFF000000;
    *(_QWORD *)(a1 + 32) = v15;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
