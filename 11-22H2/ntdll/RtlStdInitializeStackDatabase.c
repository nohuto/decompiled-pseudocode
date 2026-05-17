/*
 * XREFs of RtlStdInitializeStackDatabase @ 0x18010DF10
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x18010E2D0 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x180070CF0 (RtlInitializeSListHead.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlStdInitializeStackDatabase(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  int VirtualMemory; // r14d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 i; // rcx
  __int64 v16; // rax
  unsigned __int64 v18; // [rsp+78h] [rbp+38h]

  v18 = a2;
  if ( a2 && (a2 != a3 || !a1) )
    return 3221225485LL;
  v6 = a1;
  v7 = a3 < 0x1000000 ? 5569 : 9551;
  v8 = 16 * (v7 + 47LL);
  if ( a3 <= v8 )
    return 3221225485LL;
  if ( !a1 )
  {
    result = ZwAllocateVirtualMemory();
    if ( (int)result < 0 )
      return result;
    a2 = v18;
    v6 = a1;
  }
  if ( a2 )
  {
    *(_BYTE *)(v6 + 128) = 1;
LABEL_16:
    *(_QWORD *)(a1 + 136) = a1;
    *(_DWORD *)(a1 + 720) = v7;
    *(_QWORD *)(a1 + 168) = a1 + a3;
    *(_QWORD *)(a1 + 184) = a1 + a3;
    if ( *(_BYTE *)(a1 + 128) )
    {
      memset_thunk_772440563353939046((void *)(a1 + 728), 0, 16LL * *(unsigned int *)(a1 + 720));
    }
    else
    {
      *(_QWORD *)(a1 + 144) = a1 + v18;
      *(_QWORD *)(a1 + 152) = a1 + a3;
    }
    v11 = 208LL;
    v12 = v8 + a1;
    v13 = 32LL;
    *(_QWORD *)(a1 + 160) = v12;
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a1 + 160);
    do
    {
      RtlInitializeSListHead((PSLIST_HEADER)(v11 + a1));
      v11 += 16LL;
      --v13;
    }
    while ( v13 );
    v14 = 0;
    *(_QWORD *)a1 = 0LL;
    for ( i = a1; v14 < *(_DWORD *)(a1 + 720); i = a1 )
    {
      v16 = v14++;
      *(_QWORD *)(i + 16 * (v16 + 46)) = 0LL;
    }
    *a4 = i;
    return 0LL;
  }
  v18 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    *(_BYTE *)(a1 + 128) = 0;
    goto LABEL_16;
  }
  if ( !a1 )
    ZwFreeVirtualMemory();
  return (unsigned int)VirtualMemory;
}
