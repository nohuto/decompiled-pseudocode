/*
 * XREFs of NtUnlockVirtualMemory @ 0x1402833F0
 * Callers:
 *     <none>
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiUnlockVa @ 0x140350EE4 (MiUnlockVa.c)
 *     MiVadPagesTradable @ 0x1403520DC (MiVadPagesTradable.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiRotatedToFrameBuffer @ 0x1406333A4 (MiRotatedToFrameBuffer.c)
 *     MiUnlockVadRange @ 0x1406AFF94 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0064 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1407B8560 (MiLockUnlockCommon.c)
 */

NTSTATUS __cdecl NtUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax
  unsigned __int64 v6; // r12
  int v7; // edi
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rsi
  bool v11; // zf
  char *v12; // r14
  _QWORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  unsigned __int64 k; // r12
  unsigned __int64 v26; // r13
  __int64 v27; // r15
  void *v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // r15
  __int64 v31; // rbx
  __int64 v32; // r9
  unsigned __int64 valid; // rax
  unsigned __int64 Address; // rbx
  unsigned __int64 v35; // rcx
  _QWORD **v36; // rax
  _QWORD *i; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v39; // rax
  __int64 v40; // r8
  struct _LIST_ENTRY *v41; // rax
  __int64 v42; // rax
  char v43; // rdx^7
  unsigned __int64 v44; // rcx
  _QWORD **v45; // rax
  _QWORD *j; // rcx
  unsigned __int8 v47; // [rsp+40h] [rbp-1A8h]
  __int64 v48; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v49; // [rsp+50h] [rbp-198h]
  unsigned __int64 v50; // [rsp+50h] [rbp-198h]
  NTSTATUS v51; // [rsp+58h] [rbp-190h]
  char v52; // [rsp+5Ch] [rbp-18Ch]
  __int64 v53; // [rsp+60h] [rbp-188h] BYREF
  _QWORD *v54; // [rsp+68h] [rbp-180h]
  PVOID Object; // [rsp+70h] [rbp-178h] BYREF
  __int64 v56; // [rsp+78h] [rbp-170h] BYREF
  __int64 v57; // [rsp+80h] [rbp-168h] BYREF
  unsigned __int64 v58; // [rsp+88h] [rbp-160h]
  __int64 v59; // [rsp+90h] [rbp-158h]
  unsigned __int64 v60; // [rsp+98h] [rbp-150h]
  PSIZE_T v61; // [rsp+A0h] [rbp-148h]
  PVOID *v62; // [rsp+A8h] [rbp-140h]
  $115DCDF994C6370D29323EAB0E0C9502 v63; // [rsp+B0h] [rbp-138h] BYREF
  int v64; // [rsp+E0h] [rbp-108h] BYREF
  __int16 v65; // [rsp+E4h] [rbp-104h]
  __int16 v66; // [rsp+E6h] [rbp-102h]
  __int64 v67; // [rsp+E8h] [rbp-100h]
  __int64 v68; // [rsp+F0h] [rbp-F8h]
  __int64 v69; // [rsp+F8h] [rbp-F0h]
  _BYTE v70[152]; // [rsp+100h] [rbp-E8h] BYREF

  v61 = RegionSize;
  v62 = BaseAddress;
  v53 = 0LL;
  v56 = 0LL;
  Object = 0LL;
  memset(&v63, 0, sizeof(v63));
  v66 = 0;
  memset(v70, 0, sizeof(v70));
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v56, (__int64)&v53, (__int64)&Object);
  v51 = result;
  if ( result < 0 )
    return result;
  v6 = 0LL;
  v58 = 0LL;
  v7 = 0;
  v52 = 0;
  v8 = v56;
  v9 = (v56 + v53 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v53 = v9;
  v60 = v56 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v56 & 0xFFFFFFFFFFFFF000uLL;
  v11 = (char *)ProcessHandle + 1 == 0LL;
  v12 = (char *)Object;
  if ( !v11 )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v63);
    v7 = 2;
    v52 = 2;
  }
  v67 = 20LL;
  v64 = 1;
  v65 = 4;
  v68 = 0LL;
  v69 = 0LL;
  v13 = 0LL;
  v54 = 0LL;
  v14 = MiLockVadRange(v12, v10, v9, 0LL);
  v59 = v14;
  if ( !v14 )
    goto LABEL_64;
  v49 = 0LL;
  v48 = (__int64)(v12 + 1664);
  v47 = MiLockWorkingSetShared(v12 + 1664);
  if ( v10 > v9 )
    goto LABEL_17;
  v16 = 0xFFFFF68000000000uLL;
  v17 = 0xFFFFF6FB40000000uLL;
  v18 = 0LL;
  do
  {
    if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 )
    {
      if ( !(unsigned int)MiWorkingSetIsContended(v48) )
      {
        if ( (!v18 || !(unsigned int)MiPageTableLockIsContended(v32, v18)) && !KeShouldYieldProcessor() )
        {
LABEL_54:
          v17 = 0xFFFFF6FB40000000uLL;
          v16 = 0xFFFFF68000000000uLL;
          goto LABEL_8;
        }
        v32 = v48;
      }
      if ( HIDWORD(v67) )
        MiFreeWsleList(v32, (__int64)&v64, 0);
      if ( v18 )
      {
        MiUnlockPageTableInternal(v48, v18);
        v18 = 0LL;
        v49 = 0LL;
      }
      MiUnlockWorkingSetShared(v48, v47);
      MiLockWorkingSetShared(v48);
      goto LABEL_54;
    }
LABEL_8:
    if ( v10 > v6 || !v13 )
    {
      if ( v13 )
      {
        v35 = (unsigned __int64)v13;
        v36 = (_QWORD **)v13[1];
        if ( v36 )
        {
          Address = v13[1];
          v54 = v36;
          for ( i = *v36; i; i = (_QWORD *)*i )
          {
            Address = (unsigned __int64)i;
            v54 = i;
          }
        }
        else
        {
          Address = v13[2] & 0xFFFFFFFFFFFFFFFCuLL;
          v54 = (_QWORD *)Address;
          if ( Address )
          {
            do
            {
              if ( *(_QWORD *)Address == v35 )
                break;
              v35 = Address;
              Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            }
            while ( Address );
            v54 = (_QWORD *)Address;
          }
        }
      }
      else
      {
        Address = (unsigned __int64)MiLocateAddress(v10);
        v54 = (_QWORD *)Address;
      }
      v7 &= ~4u;
      v52 = v7;
      if ( (*(_DWORD *)(Address + 48) & 0x70) == 0x40 )
      {
        v7 |= 4u;
        v52 = v7;
      }
      else if ( !(unsigned int)MiVadPagesTradable(Address) )
      {
        break;
      }
      v58 = (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12;
    }
    v19 = v16 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
    v20 = v17 + ((v10 >> 18) & 0x3FFFFFF8);
    if ( v18 == v20 )
      goto LABEL_11;
    if ( v18 )
    {
      if ( HIDWORD(v67) )
        MiFreeWsleList(v48, (__int64)&v64, 0);
      MiUnlockPageTableInternal(v48, v18);
    }
    valid = MiLockLowestValidPageTable(v48, v19, (unsigned __int64 *)&v57, v15);
    v18 = valid;
    v49 = valid;
    if ( valid == v20 )
    {
LABEL_11:
      v21 = *(_QWORD *)v19;
      if ( v19 >= 0xFFFFF6FB7DBED000uLL
        && v19 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v39 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
          v40 = v21 | 0x20;
          if ( (v39 & 0x20) == 0 )
            v40 = *(_QWORD *)v19;
          v21 = v40;
          if ( (v39 & 0x42) != 0 )
            v21 = v40 | 0x42;
        }
      }
      v57 = v21;
      if ( (v21 & 1) != 0 )
      {
        v29 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v30 = *(_QWORD *)(v29 + 8);
        if ( (v7 & 4) == 0 || !(unsigned int)MiRotatedToFrameBuffer(v19) )
        {
          if ( (*(_QWORD *)(v29 + 40) & 0x10000000000LL) == 0 && v30 >= 0 && v30 )
            MiDemoteCombinedPte(v48, v19, v30 | 0x8000000000000000uLL);
          v31 = *(_QWORD *)v19;
          if ( MiPteInShadowRange(v19)
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v31 & 1) != 0
            && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
          {
            v41 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v41 )
            {
              v42 = *((_QWORD *)&v41->Flink + ((v19 >> 3) & 0x1FF));
              v43 = HIBYTE(v31);
              if ( (v42 & 0x20) == 0 )
                v43 = HIBYTE(v31);
              HIBYTE(v31) = v43;
              if ( (v42 & 0x42) != 0 )
                HIBYTE(v31) = v43;
            }
          }
          if ( (HIBYTE(v31) & 0xF) != 8 )
          {
            MiInsertTbFlushEntry((__int64)&v64, v10, 1LL, 0);
            if ( HIDWORD(v67) == (_DWORD)v67 )
              MiFreeWsleList(v48, (__int64)&v64, 0);
            v51 = -1073741782;
          }
        }
        v9 = v53;
      }
      else
      {
        v51 = -1073741782;
      }
      v16 = 0xFFFFF68000000000uLL;
      v10 += 4096LL;
    }
    else
    {
      MiUnlockPageTableInternal(v48, valid);
      v18 = 0LL;
      v49 = 0LL;
      v16 = 0xFFFFF68000000000uLL;
      v10 = (__int64)((v20 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v51 = -1073741782;
    }
    v6 = v58;
    v13 = v54;
    v17 = 0xFFFFF6FB40000000uLL;
  }
  while ( v10 <= v9 );
  v12 = (char *)Object;
  v8 = v56;
LABEL_17:
  if ( HIDWORD(v67) )
    MiFreeWsleList(v48, (__int64)&v64, 0);
  v22 = v49;
  if ( v49 )
  {
    MiUnlockPageTableInternal(v48, v49);
    v22 = 0LL;
    v49 = 0LL;
  }
  if ( v51 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v48, v47);
    v14 = v59;
LABEL_64:
    MiUnlockVadRange(v12, v8, v14, 0LL);
    if ( (v7 & 2) != 0 )
      KiUnstackDetachProcess(&v63);
    ObfDereferenceObjectWithTag(v12, 0x6D566D4Du);
    return -1073741782;
  }
  v23 = v60;
  v24 = 0LL;
  k = 0LL;
  if ( v60 > v9 )
    goto LABEL_36;
  v26 = v49;
  while ( 2 )
  {
    if ( v23 <= v24 && k )
    {
LABEL_29:
      if ( v26 == ((v23 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        v27 = v48;
      }
      else
      {
        if ( v26 )
          MiUnlockPageTableInternal(v48, v26);
        v27 = v48;
        v26 = MiLockLowestValidPageTable(
                v48,
                ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                (unsigned __int64 *)&v57,
                v15);
      }
      MiUnlockVa(v27, v23);
      v23 += 4096LL;
      if ( (v23 & 0xF000) == 0
        && ((unsigned int)MiWorkingSetIsContended(v27)
         || (unsigned int)MiPageTableLockIsContended(v27, v26)
         || KeShouldYieldProcessor()) )
      {
        MiUnlockPageTableInternal(v27, v26);
        v26 = 0LL;
        MiUnlockWorkingSetShared(v27, v47);
        MiLockWorkingSetShared(v27);
      }
      v9 = v53;
      if ( v23 > v53 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  if ( k )
  {
    v44 = k;
    v45 = *(_QWORD ***)(k + 8);
    if ( v45 )
    {
      k = *(_QWORD *)(k + 8);
      for ( j = *v45; j; j = (_QWORD *)*j )
        k = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v44 )
          break;
        v44 = k;
      }
    }
  }
  else
  {
    k = (unsigned __int64)MiLocateAddress(v23);
  }
  if ( (unsigned int)MiVadPagesTradable(k) )
  {
    v24 = (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12;
    goto LABEL_29;
  }
LABEL_35:
  v50 = v26;
  LOBYTE(v7) = v52;
  v12 = (char *)Object;
  v8 = v56;
  v22 = v50;
LABEL_36:
  if ( v22 )
    MiUnlockPageTableInternal(v48, v22);
  MiUnlockWorkingSetShared(v48, v47);
  MiUnlockVadRange(v12, v8, v59, 0LL);
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess(&v63);
  ObfDereferenceObjectWithTag(v12, 0x6D566D4Du);
  v28 = (void *)v60;
  *v61 = v9 - v60 + 4096;
  *v62 = v28;
  return 0;
}
