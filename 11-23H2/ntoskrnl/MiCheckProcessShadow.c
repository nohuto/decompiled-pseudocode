/*
 * XREFs of MiCheckProcessShadow @ 0x14023F1D0
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MmCheckProcessShadow @ 0x1403D0420 (MmCheckProcessShadow.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiCheckRelevantKernelShadows @ 0x1403CFF48 (MiCheckRelevantKernelShadows.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckProcessShadow(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // r14
  bool v8; // zf
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // r15d
  __int64 v12; // rbp
  ULONG_PTR v13; // r10
  int v14; // r11d
  unsigned __int64 Process; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // rcx
  ULONG_PTR v19; // r9
  ULONG_PTR v20; // rcx
  ULONG_PTR v21; // r9
  ULONG_PTR BugCheckParameter4; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  struct _LIST_ENTRY *v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax

  if ( (MiFlags & 0x600000) == 0 || (*(_BYTE *)(a1 + 184) & 7) != 0 || *(_BYTE *)(a1 - 752) == 1 )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) != 0 )
  {
    v8 = (*(_DWORD *)(a1 - 540) & 0x4000000) == 0;
    v7 = *(_QWORD *)(a1 + 264);
  }
  else
  {
    if ( (__rdtsc() & 0x3FF0) != 0 )
      return 0xFFFFFFFFLL;
    v7 = *(_QWORD *)(a1 + 264);
    v8 = v7 == 0;
  }
  if ( v8 || !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  if ( (a2 & 4) == 0 )
  {
    if ( !(unsigned int)MiWorkingSetIsContended(a1) )
    {
      v11 = a2 & 1;
      if ( (a2 & 1) == 0 || (unsigned int)MiLockPageTableInternal(a1, v9, 1, v10) )
        goto LABEL_15;
    }
    return 0xFFFFFFFFLL;
  }
  v11 = a2 & 1;
  if ( (a2 & 1) != 0 )
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0, a4);
LABEL_15:
  v12 = 0LL;
  v13 = 0xFFFFF6FB7DBED000uLL;
  v14 = 256;
  Process = 0x8000000000000000uLL;
  v16 = 0xCFFFFFFFFFFFFFFFuLL;
  do
  {
    v17 = *(_QWORD *)v13;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v24 = *((_QWORD *)&Flink->Flink + ((v13 >> 3) & 0x1FF));
        v25 = v17 | 0x20;
        if ( (v24 & 0x20) == 0 )
          v25 = *(_QWORD *)v13;
        v17 = v25;
        if ( (v24 & 0x42) != 0 )
          v17 = v25 | 0x42;
      }
      Process = 0x8000000000000000uLL;
    }
    v18 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v26 )
        {
          v27 = *((_QWORD *)&v26->Flink + ((v7 >> 3) & 0x1FF));
          v28 = v18 | 0x20;
          if ( (v27 & 0x20) == 0 )
            v28 = *(_QWORD *)v7;
          v18 = v28;
          if ( (v27 & 0x42) != 0 )
            v18 = v28 | 0x42;
        }
        v16 = 0xCFFFFFFFFFFFFFFFuLL;
      }
      Process = 0x8000000000000000uLL;
    }
    if ( (v17 & 1) != 0 )
    {
      v21 = v17 & 0xCFFFFFFFFFFFFFDFuLL | 0x20;
      if ( !HIBYTE(word_140C66CFC) )
        v18 |= 0x8000000000000000uLL;
      BugCheckParameter4 = v18 | 0x20;
      if ( v21 != BugCheckParameter4 )
      {
        if ( (a2 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x3600uLL, v13, v21, BugCheckParameter4);
        goto LABEL_34;
      }
    }
    else if ( v18 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3601uLL, v13, v18, v18);
      goto LABEL_34;
    }
    v13 += 8LL;
    v7 += 8LL;
    ++v12;
    --v14;
  }
  while ( v14 );
  if ( (v13 & 0xFFF) == 0 )
    goto LABEL_33;
  while ( 1 )
  {
    v19 = *(_QWORD *)v13;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL
      && v13 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Process )
      {
        v29 = *(_QWORD *)(Process + 8 * ((v13 >> 3) & 0x1FF));
        Process = v19 | 0x20;
        if ( (v29 & 0x20) == 0 )
          Process = *(_QWORD *)v13;
        v19 = Process;
        if ( (v29 & 0x42) != 0 )
          v19 = Process | 0x42;
      }
    }
    v20 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 && (v20 & 1) != 0 && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v16 = *(_QWORD *)(Process + 1928);
        if ( v16 )
        {
          v30 = *(_QWORD *)(v16 + 8 * ((v7 >> 3) & 0x1FF));
          v16 = v20 | 0x20;
          if ( (v30 & 0x20) == 0 )
            v16 = *(_QWORD *)v7;
          v20 = v16;
          if ( (v30 & 0x42) != 0 )
            v20 = v16 | 0x42;
        }
      }
    }
    if ( (v19 & 1) != 0 && (v19 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x3604uLL, v13, v19, v20);
      goto LABEL_32;
    }
    if ( (v20 & 1) != 0 && (v20 & 4) != 0 )
      break;
    v13 += 8LL;
    v7 += 8LL;
    ++v12;
    if ( (v13 & 0xFFF) == 0 )
      goto LABEL_32;
  }
  if ( (a2 & 8) == 0 )
    KeBugCheckEx(0x1Au, 0x3605uLL, v13, v19, v20);
LABEL_32:
  if ( (v13 & 0xFFF) == 0 )
LABEL_33:
    v12 = 0xFFFFFFFFLL;
LABEL_34:
  if ( v11 )
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
  if ( v12 == 0xFFFFFFFFLL && (a2 & 0x10) != 0 )
    return MiCheckRelevantKernelShadows(a2, Process, v16);
  return v12;
}
