/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x180021B80
 * Callers:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180026F50 (LdrpGetFileSizeFromLoadAsDataTable.c)
 * Callees:
 *     RtlpWaitOnCriticalSection @ 0x180033F90 (RtlpWaitOnCriticalSection.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180086D70 (RtlpInitializeStaticCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(__int64 a1)
{
  unsigned __int64 v2; // rdi
  char v3; // si
  char v4; // bp
  signed __int32 v5; // eax
  volatile signed __int32 *v6; // r12
  int v7; // r15d
  char v8; // r10
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  int i; // ecx
  signed __int32 v14; // eax
  unsigned int v15; // ebx
  __int64 result; // rax
  char v17; // r11
  __int64 v18; // rdx
  unsigned __int32 v19; // ecx
  unsigned int v20; // r9d
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // r9d
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rbp
  signed __int32 v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char v29; // [rsp+80h] [rbp+8h]
  bool v30; // [rsp+88h] [rbp+10h]

  if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    RtlpInitializeStaticCriticalSection();
  v2 = 0LL;
  v30 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v2 = *(_QWORD *)(a1 + 32) & 0xFFFFFFLL;
    v30 = (*(_QWORD *)(a1 + 32) & 0x2000000LL) != 0;
  }
  v3 = 0;
  v4 = 0;
  v29 = 0;
LABEL_5:
  v5 = *(_DWORD *)(a1 + 8);
  v6 = (volatile signed __int32 *)(a1 + 8);
  v7 = 3;
  if ( !v4 )
    v7 = 1;
  v8 = v3;
  v9 = v2;
  if ( (v5 & 1) != 0 )
  {
    v29 = v4;
    v10 = 0LL;
    if ( v5 == _InterlockedCompareExchange(v6, v5 ^ v7, v5) )
      goto LABEL_19;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 10 * v2;
  if ( MEMORY[0x7FFE036A] <= 1u )
    goto LABEL_27;
  if ( a1 != -8 && MEMORY[0x7FFE0297] )
  {
    v24 = __rdtsc();
    v25 = v24 + v11;
    while ( 1 )
    {
      v8 = v3;
      __asm { monitorx rax, rcx, rdx }
      v9 = v2;
      if ( (*v6 & 1) != 0 )
      {
        v26 = *v6;
        if ( v26 == _InterlockedCompareExchange(v6, v26 ^ v7, v26) )
          goto LABEL_19;
      }
      v27 = v24;
      v28 = __rdtsc();
      v24 = v28;
      if ( v28 <= v27 || v28 >= v25 )
        break;
      __asm { mwaitx  rax, rcx, rbx }
    }
    v4 = v29;
    while ( 1 )
    {
LABEL_27:
      v17 = 0;
      _m_prefetchw((const void *)v6);
      v18 = *(unsigned int *)v6;
      if ( v29 )
      {
        if ( (v18 & 2) != 0 )
        {
          v4 = v29;
          goto LABEL_35;
        }
        v29 = v4;
        if ( (v18 & 1) != 0 )
        {
          v17 = 1;
          v19 = v18 ^ 3;
        }
        else
        {
          v19 = v18 - 2;
          v29 = v4;
        }
      }
      else if ( (v18 & 1) != 0 )
      {
        v4 = 0;
        v19 = v18 ^ 1;
        v17 = 1;
      }
      else
      {
        v19 = v18 - 4;
        v29 = v4;
        if ( (((_BYTE)v18 - 4) & 2) != 0 )
          v29 = v4;
        else
          v19 = v18 - 6;
      }
      if ( v19 == (_DWORD)v18 )
        goto LABEL_36;
      v8 = v3;
      v9 = v2;
      if ( (_DWORD)v18 == _InterlockedCompareExchange(v6, v19, v18) )
      {
        if ( v17 )
          goto LABEL_19;
        v4 = 1;
        v18 = v19;
LABEL_35:
        v29 = v4;
LABEL_36:
        RtlpWaitOnCriticalSection(a1, v18, v10);
        v3 = 1;
        if ( v30 && v2 > 0x64 )
          --v2;
        goto LABEL_5;
      }
      v20 = v10;
      if ( (_DWORD)v10 )
      {
        if ( (unsigned int)v10 < 0x1FFF )
          v20 = 2 * v10;
      }
      else
      {
        if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
          goto LABEL_52;
        v20 = 64;
      }
      v10 = v20;
      v21 = __rdtsc();
      v22 = 0;
      v23 = 10 * (((v20 - 1) & (unsigned int)v21) + v20) / MEMORY[0x7FFE02D6];
      if ( v23 )
      {
        do
        {
          _mm_pause();
          ++v22;
        }
        while ( v22 < v23 );
      }
LABEL_52:
      v6 = (volatile signed __int32 *)(a1 + 8);
    }
  }
  if ( MEMORY[0x7FFE02D6] == 142 )
    v12 = v11 / 0x8E;
  else
    v12 = v11 / MEMORY[0x7FFE02D6];
  for ( i = 0; ; ++i )
  {
    v8 = v3;
    v9 = v2;
    if ( (*v6 & 1) != 0 )
    {
      v29 = v4;
      v14 = *v6;
      if ( v14 == _InterlockedCompareExchange(v6, v14 ^ v7, v14) )
        break;
    }
    if ( i == v12 )
      goto LABEL_27;
    _mm_pause();
  }
LABEL_19:
  if ( v30 )
  {
    if ( !v8 && v9 < 0x7D0 )
      LODWORD(v9) = v9 + 1;
    v15 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ v9) & 0xFFFFFF;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v15 &= 0xFF000000;
    *(_QWORD *)(a1 + 32) = v15;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
