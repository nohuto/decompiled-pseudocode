/*
 * XREFs of NtUnlockVirtualMemory @ 0x140283160
 * Callers:
 *     <none>
 * Callees:
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14025A290 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271360 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x14027F570 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140280C20 (MiFreeWsleList.c)
 *     MiLockWorkingSetShared @ 0x140283C90 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1402E69F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6A30 (MiPageTableLockIsContended.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTableInternal @ 0x1403195C0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333C70 (KeShouldYieldProcessor.c)
 *     MiUnlockVa @ 0x140350D44 (MiUnlockVa.c)
 *     MiVadPagesTradable @ 0x140351F3C (MiVadPagesTradable.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 *     MiRotatedToFrameBuffer @ 0x140632E54 (MiRotatedToFrameBuffer.c)
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1407B8280 (MiLockUnlockCommon.c)
 */

__int64 __fastcall NtUnlockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  int v6; // edi
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  bool v10; // zf
  char *v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rsi
  unsigned __int64 k; // r12
  unsigned __int64 v25; // r13
  __int64 v26; // r15
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rbx
  __int64 v31; // r9
  unsigned __int64 valid; // rax
  unsigned __int64 Address; // rbx
  unsigned __int64 v34; // rcx
  _QWORD **v35; // rax
  _QWORD *i; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v38; // rax
  __int64 v39; // r8
  struct _LIST_ENTRY *v40; // rax
  __int64 v41; // rax
  char v42; // rdx^7
  unsigned __int64 v43; // rcx
  _QWORD **v44; // rax
  _QWORD *j; // rcx
  unsigned __int8 v46; // [rsp+40h] [rbp-1A8h]
  __int64 v47; // [rsp+48h] [rbp-1A0h]
  unsigned __int64 v48; // [rsp+50h] [rbp-198h]
  unsigned __int64 v49; // [rsp+50h] [rbp-198h]
  int v50; // [rsp+58h] [rbp-190h]
  char v51; // [rsp+5Ch] [rbp-18Ch]
  __int64 v52; // [rsp+60h] [rbp-188h] BYREF
  _QWORD *v53; // [rsp+68h] [rbp-180h]
  PVOID Object; // [rsp+70h] [rbp-178h] BYREF
  __int64 v55; // [rsp+78h] [rbp-170h] BYREF
  __int64 v56; // [rsp+80h] [rbp-168h] BYREF
  unsigned __int64 v57; // [rsp+88h] [rbp-160h]
  __int64 v58; // [rsp+90h] [rbp-158h]
  unsigned __int64 v59; // [rsp+98h] [rbp-150h]
  _QWORD *v60; // [rsp+A0h] [rbp-148h]
  unsigned __int64 *v61; // [rsp+A8h] [rbp-140h]
  $115DCDF994C6370D29323EAB0E0C9502 v62; // [rsp+B0h] [rbp-138h] BYREF
  int v63; // [rsp+E0h] [rbp-108h] BYREF
  __int16 v64; // [rsp+E4h] [rbp-104h]
  __int16 v65; // [rsp+E6h] [rbp-102h]
  __int64 v66; // [rsp+E8h] [rbp-100h]
  __int64 v67; // [rsp+F0h] [rbp-F8h]
  __int64 v68; // [rsp+F8h] [rbp-F0h]
  _BYTE v69[152]; // [rsp+100h] [rbp-E8h] BYREF

  v60 = a3;
  v61 = a2;
  v52 = 0LL;
  v55 = 0LL;
  Object = 0LL;
  memset(&v62, 0, sizeof(v62));
  v65 = 0;
  memset(v69, 0, sizeof(v69));
  result = MiLockUnlockCommon(BugCheckParameter1, (__int64)&v55, (__int64)&v52, (__int64)&Object);
  v50 = result;
  if ( (int)result < 0 )
    return result;
  v5 = 0LL;
  v57 = 0LL;
  v6 = 0;
  v51 = 0;
  v7 = v55;
  v8 = (v55 + v52 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v52 = v8;
  v59 = v55 & 0xFFFFFFFFFFFFF000uLL;
  v9 = v55 & 0xFFFFFFFFFFFFF000uLL;
  v10 = BugCheckParameter1 == -1LL;
  v11 = (char *)Object;
  if ( !v10 )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v62);
    v6 = 2;
    v51 = 2;
  }
  v66 = 20LL;
  v63 = 1;
  v64 = 4;
  v67 = 0LL;
  v68 = 0LL;
  v12 = 0LL;
  v53 = 0LL;
  v13 = MiLockVadRange(v11, v9, v8, 0LL);
  v58 = v13;
  if ( !v13 )
    goto LABEL_64;
  v48 = 0LL;
  v47 = (__int64)(v11 + 1664);
  v46 = MiLockWorkingSetShared(v11 + 1664);
  if ( v9 > v8 )
    goto LABEL_17;
  v15 = 0xFFFFF68000000000uLL;
  v16 = 0xFFFFF6FB40000000uLL;
  v17 = 0LL;
  do
  {
    if ( (((unsigned __int8)(v9 >> 12) + 1) & 0xF) == 0 )
    {
      if ( !(unsigned int)MiWorkingSetIsContended(v47) )
      {
        if ( (!v17 || !(unsigned int)MiPageTableLockIsContended(v31, v17)) && !KeShouldYieldProcessor() )
        {
LABEL_54:
          v16 = 0xFFFFF6FB40000000uLL;
          v15 = 0xFFFFF68000000000uLL;
          goto LABEL_8;
        }
        v31 = v47;
      }
      if ( HIDWORD(v66) )
        MiFreeWsleList(v31, (__int64)&v63, 0);
      if ( v17 )
      {
        MiUnlockPageTableInternal(v47, v17);
        v17 = 0LL;
        v48 = 0LL;
      }
      MiUnlockWorkingSetShared(v47, v46);
      MiLockWorkingSetShared(v47);
      goto LABEL_54;
    }
LABEL_8:
    if ( v9 > v5 || !v12 )
    {
      if ( v12 )
      {
        v34 = (unsigned __int64)v12;
        v35 = (_QWORD **)v12[1];
        if ( v35 )
        {
          Address = v12[1];
          v53 = v35;
          for ( i = *v35; i; i = (_QWORD *)*i )
          {
            Address = (unsigned __int64)i;
            v53 = i;
          }
        }
        else
        {
          Address = v12[2] & 0xFFFFFFFFFFFFFFFCuLL;
          v53 = (_QWORD *)Address;
          if ( Address )
          {
            do
            {
              if ( *(_QWORD *)Address == v34 )
                break;
              v34 = Address;
              Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            }
            while ( Address );
            v53 = (_QWORD *)Address;
          }
        }
      }
      else
      {
        Address = (unsigned __int64)MiLocateAddress(v9);
        v53 = (_QWORD *)Address;
      }
      v6 &= ~4u;
      v51 = v6;
      if ( (*(_DWORD *)(Address + 48) & 0x70) == 0x40 )
      {
        v6 |= 4u;
        v51 = v6;
      }
      else if ( !(unsigned int)MiVadPagesTradable(Address) )
      {
        break;
      }
      v57 = (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12;
    }
    v18 = v15 + ((v9 >> 9) & 0x7FFFFFFFF8LL);
    v19 = v16 + ((v9 >> 18) & 0x3FFFFFF8);
    if ( v17 == v19 )
      goto LABEL_11;
    if ( v17 )
    {
      if ( HIDWORD(v66) )
        MiFreeWsleList(v47, (__int64)&v63, 0);
      MiUnlockPageTableInternal(v47, v17);
    }
    valid = MiLockLowestValidPageTable(v47, v18, (unsigned __int64 *)&v56, v14);
    v17 = valid;
    v48 = valid;
    if ( valid == v19 )
    {
LABEL_11:
      v20 = *(_QWORD *)v18;
      if ( v18 >= 0xFFFFF6FB7DBED000uLL
        && v18 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v20 & 1) != 0
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v38 = *((_QWORD *)&Flink->Flink + ((v18 >> 3) & 0x1FF));
          v39 = v20 | 0x20;
          if ( (v38 & 0x20) == 0 )
            v39 = *(_QWORD *)v18;
          v20 = v39;
          if ( (v38 & 0x42) != 0 )
            v20 = v39 | 0x42;
        }
      }
      v56 = v20;
      if ( (v20 & 1) != 0 )
      {
        v28 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v56) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v29 = *(_QWORD *)(v28 + 8);
        if ( (v6 & 4) == 0 || !(unsigned int)MiRotatedToFrameBuffer(v18) )
        {
          if ( (*(_QWORD *)(v28 + 40) & 0x10000000000LL) == 0 && v29 >= 0 && v29 )
            MiDemoteCombinedPte(v47, v18, v29 | 0x8000000000000000uLL);
          v30 = *(_QWORD *)v18;
          if ( MiPteInShadowRange(v18)
            && (MiFlags & 0x600000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v30 & 1) != 0
            && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
          {
            v40 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v40 )
            {
              v41 = *((_QWORD *)&v40->Flink + ((v18 >> 3) & 0x1FF));
              v42 = HIBYTE(v30);
              if ( (v41 & 0x20) == 0 )
                v42 = HIBYTE(v30);
              HIBYTE(v30) = v42;
              if ( (v41 & 0x42) != 0 )
                HIBYTE(v30) = v42;
            }
          }
          if ( (HIBYTE(v30) & 0xF) != 8 )
          {
            MiInsertTbFlushEntry((__int64)&v63, v9, 1LL, 0);
            if ( HIDWORD(v66) == (_DWORD)v66 )
              MiFreeWsleList(v47, (__int64)&v63, 0);
            v50 = -1073741782;
          }
        }
        v8 = v52;
      }
      else
      {
        v50 = -1073741782;
      }
      v15 = 0xFFFFF68000000000uLL;
      v9 += 4096LL;
    }
    else
    {
      MiUnlockPageTableInternal(v47, valid);
      v17 = 0LL;
      v48 = 0LL;
      v15 = 0xFFFFF68000000000uLL;
      v9 = (__int64)((v19 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v50 = -1073741782;
    }
    v5 = v57;
    v12 = v53;
    v16 = 0xFFFFF6FB40000000uLL;
  }
  while ( v9 <= v8 );
  v11 = (char *)Object;
  v7 = v55;
LABEL_17:
  if ( HIDWORD(v66) )
    MiFreeWsleList(v47, (__int64)&v63, 0);
  v21 = v48;
  if ( v48 )
  {
    MiUnlockPageTableInternal(v47, v48);
    v21 = 0LL;
    v48 = 0LL;
  }
  if ( v50 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v47, v46);
    v13 = v58;
LABEL_64:
    MiUnlockVadRange(v11, v7, v13, 0LL);
    if ( (v6 & 2) != 0 )
      KiUnstackDetachProcess(&v62);
    ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
    return 3221225514LL;
  }
  v22 = v59;
  v23 = 0LL;
  k = 0LL;
  if ( v59 > v8 )
    goto LABEL_36;
  v25 = v48;
  while ( 2 )
  {
    if ( v22 <= v23 && k )
    {
LABEL_29:
      if ( v25 == ((v22 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        v26 = v47;
      }
      else
      {
        if ( v25 )
          MiUnlockPageTableInternal(v47, v25);
        v26 = v47;
        v25 = MiLockLowestValidPageTable(
                v47,
                ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                (unsigned __int64 *)&v56,
                v14);
      }
      MiUnlockVa(v26, v22);
      v22 += 4096LL;
      if ( (v22 & 0xF000) == 0
        && ((unsigned int)MiWorkingSetIsContended(v26)
         || (unsigned int)MiPageTableLockIsContended(v26, v25)
         || KeShouldYieldProcessor()) )
      {
        MiUnlockPageTableInternal(v26, v25);
        v25 = 0LL;
        MiUnlockWorkingSetShared(v26, v46);
        MiLockWorkingSetShared(v26);
      }
      v8 = v52;
      if ( v22 > v52 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  if ( k )
  {
    v43 = k;
    v44 = *(_QWORD ***)(k + 8);
    if ( v44 )
    {
      k = *(_QWORD *)(k + 8);
      for ( j = *v44; j; j = (_QWORD *)*j )
        k = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v43 )
          break;
        v43 = k;
      }
    }
  }
  else
  {
    k = (unsigned __int64)MiLocateAddress(v22);
  }
  if ( (unsigned int)MiVadPagesTradable(k) )
  {
    v23 = (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12;
    goto LABEL_29;
  }
LABEL_35:
  v49 = v25;
  LOBYTE(v6) = v51;
  v11 = (char *)Object;
  v7 = v55;
  v21 = v49;
LABEL_36:
  if ( v21 )
    MiUnlockPageTableInternal(v47, v21);
  MiUnlockWorkingSetShared(v47, v46);
  MiUnlockVadRange(v11, v7, v58, 0LL);
  if ( (v6 & 2) != 0 )
    KiUnstackDetachProcess(&v62);
  ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
  v27 = v59;
  *v60 = v8 - v59 + 4096;
  *v61 = v27;
  return 0LL;
}
