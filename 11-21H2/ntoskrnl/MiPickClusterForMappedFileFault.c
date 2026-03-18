/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x140282D10
 * Callers:
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiObtainFaultCharges @ 0x140329630 (MiObtainFaultCharges.c)
 *     MiStartingOffset @ 0x1403342D0 (MiStartingOffset.c)
 */

__int64 __fastcall MiPickClusterForMappedFileFault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // rbx
  __int64 *v10; // r15
  unsigned int v11; // r12d
  unsigned __int64 v12; // rsi
  __int64 v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  int v15; // edi
  unsigned int v16; // edx
  unsigned __int64 v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // r14
  __int64 v20; // r10
  unsigned int v21; // r11d
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 i; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 result; // rax
  int v31; // ecx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  struct _KTHREAD *v36; // [rsp+20h] [rbp-48h]
  __int64 v37; // [rsp+20h] [rbp-48h]
  __int64 v38; // [rsp+28h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 168);
  v10 = *(__int64 **)(a2 + 208);
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 232);
  v13 = 1LL;
  CurrentThread = KeGetCurrentThread();
  v38 = *v10;
  v36 = CurrentThread;
  if ( (v8 & 0x400) == 0 )
    goto LABEL_46;
  if ( BYTE5(CurrentThread[1].Queue) )
    goto LABEL_46;
  v15 = *(_DWORD *)(*v10 + 56);
  if ( (v15 & 8) != 0 || *(__int64 *)(a1 + 16960) < 160 )
    goto LABEL_46;
  if ( dword_140C531D8 )
  {
    --dword_140C531D8;
LABEL_46:
    i = v12;
    v19 = v12;
    goto LABEL_33;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, 320LL) )
    goto LABEL_46;
  v16 = *(_DWORD *)(a2 + 184);
  if ( v16 == 1 )
    goto LABEL_46;
  v17 = a4;
  v18 = a3;
  v19 = a4 + 8 * (*((unsigned int *)v10 + 11) - (unsigned __int64)(*((_DWORD *)v10 + 13) & 0x3FFFFFFF) - 1);
  if ( !a3 )
  {
    if ( (v15 & 0x20) != 0 )
    {
      v16 = 4;
      if ( (v10[4] & 4) != 0 )
        v16 = 8;
    }
    else if ( !v16 )
    {
      v16 = LODWORD(v36[1].WaitListEntry.Flink) + 1;
    }
  }
  v20 = 8LL * v16;
  v37 = v20;
  if ( v19 > v20 + v12 - 8 )
    v19 = v20 + v12 - 8;
  if ( !a3 && (v15 & 0x40000000) != 0 )
  {
    v21 = MiStartingOffset(v10, v12, a5);
    v18 = 0LL;
    v17 = a4;
    v20 = v37;
    v31 = v21 & (dword_140C53260 - 1);
    if ( v19 > v12 + 8 * (((unsigned int)(dword_140C53260 - v31) >> 12) - 1LL) )
      v19 = v12 + 8 * (((unsigned int)(dword_140C53260 - v31) >> 12) - 1LL);
  }
  else
  {
    v21 = 0;
  }
  if ( v19 > (v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v19 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v22 = v19;
  if ( v19 > v12 )
  {
    do
    {
      v23 = *(_QWORD *)v22;
      if ( v22 >= 0xFFFFF6FB7DBED000uLL
        && v22 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v23 & 1) != 0
        && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v33 = *((_QWORD *)&Flink->Flink + ((v22 >> 3) & 0x1FF));
          v34 = v23 | 0x20;
          if ( (v33 & 0x20) == 0 )
            v34 = *(_QWORD *)v22;
          v23 = v34;
          if ( (v33 & 0x42) != 0 )
            v23 = v34 | 0x42;
        }
      }
      if ( v23 == v8 )
      {
        ++v13;
      }
      else if ( v22 == v19 )
      {
        v19 -= 8LL;
      }
      v22 -= 8LL;
    }
    while ( v22 > v12 );
    v18 = a3;
    v17 = a4;
  }
  v24 = v19 - v20 + 8;
  if ( v24 < v17 )
    v24 = v17;
  v25 = v12 & 0xFFFFFFFFFFFFF000uLL;
  if ( v24 >= (v12 & 0xFFFFFFFFFFFFF000uLL) )
    v25 = v24;
  if ( v18 || (*(_DWORD *)(a2 + 192) & 0x40) != 0 )
  {
    v26 = v12;
  }
  else
  {
    v26 = v25;
    if ( (*(_DWORD *)(v38 + 56) & 0x40000000) != 0 )
    {
      v35 = (v21 >> 12) & ((unsigned int)(dword_140C53260 - 1) >> 12);
      if ( v25 < v12 - 8 * v35 )
        v26 = v12 - 8 * v35;
    }
  }
  for ( i = v26; v26 < v12; v26 += 8LL )
  {
    if ( MI_READ_PTE_LOCK_FREE(v26) == v8 )
    {
      ++v13;
    }
    else if ( v26 == i )
    {
      i += 8LL;
    }
  }
LABEL_33:
  v28 = v13 - 1;
  if ( a6 == -1 )
    v28 = v13;
  if ( v28 )
  {
    if ( a6 == -1 )
      v11 = 3;
    v29 = MiObtainFaultCharges(a1, v28, v11);
  }
  else
  {
    v29 = 0LL;
  }
  result = v29 + 1;
  if ( a6 == -1 )
    result = v29;
  *a7 = i;
  *a8 = v19;
  return result;
}
