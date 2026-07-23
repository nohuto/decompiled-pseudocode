/*
 * XREFs of MiWalkVaRange @ 0x140293FE4
 * Callers:
 *     MiResetVirtualMemory @ 0x1403674C4 (MiResetVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A51F4 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiActOnPte @ 0x140294364 (MiActOnPte.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402DD490 (MiLockProtoPoolPage.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x140362254 (MiMakeProtoLeafValid.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x140667370 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r13
  unsigned int v8; // edi
  __int64 v9; // r12
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // r9d
  unsigned __int8 v14; // r14
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 NextPageTable; // rbx
  unsigned int v18; // r14d
  signed __int64 ProtoPteAddress; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rbx
  signed __int64 v23; // r13
  int v24; // eax
  int v25; // edi
  int v26; // ebx
  int v27; // r13d
  __int64 v29; // rdi
  int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rdi
  char v33; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v34; // [rsp+41h] [rbp-BFh]
  int ProtoLeafValid; // [rsp+44h] [rbp-BCh]
  int v36; // [rsp+48h] [rbp-B8h]
  signed __int64 v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+5Ch] [rbp-A4h]
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v42; // [rsp+70h] [rbp-90h]
  unsigned __int64 v43; // [rsp+78h] [rbp-88h]
  int v44; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  _QWORD v48[24]; // [rsp+A0h] [rbp-60h] BYREF

  v41 = a3;
  v5 = a3;
  v45 = 0LL;
  v44 = 0;
  v46 = 0LL;
  v38 = a4;
  memset(v48, 0, 0xB8uLL);
  ProtoLeafValid = 0;
  v8 = 0;
  v37 = 0LL;
  v9 = 0LL;
  v33 = 17;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v48[0]) = 1;
  WORD2(v48[0]) = 0;
  v11 = 0LL;
  v48[2] = 0LL;
  LODWORD(v48[1]) = 20;
  v48[3] = 0LL;
  v43 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v42 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v14 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v34 = v14;
  v15 = v43;
  if ( v10 <= v43 )
  {
    while ( 1 )
    {
      LOBYTE(v13) = v14;
      NextPageTable = MiGetNextPageTable(v10, v15, (unsigned int)v48, v13, 0, (__int64)&v44);
      v18 = 1;
      if ( NextPageTable != v10 )
      {
        if ( (*(_DWORD *)(v5 + 48) & 0x200000) != 0
          || !*(_QWORD *)(v5 + 80)
          || !MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0, &v40) )
        {
          v8 = -1073740748;
          ProtoLeafValid = -1073740748;
          if ( !NextPageTable )
          {
            v12 = (__int64)v42;
            goto LABEL_28;
          }
          v10 = NextPageTable;
LABEL_4:
          v11 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          goto LABEL_5;
        }
        v18 = 0;
      }
      if ( NextPageTable )
        goto LABEL_4;
LABEL_5:
      while ( 1 )
      {
        ProtoPteAddress = 0LL;
        v39 = 0;
        v36 = 0;
        if ( !v18 )
          break;
        v20 = MI_READ_PTE_LOCK_FREE(v10);
        v21 = v20;
        if ( !v20 )
          break;
        if ( (v20 & 1) != 0 || (v20 & 0x400) == 0 )
        {
          v22 = v41;
          goto LABEL_9;
        }
        if ( v38 == 2 && MI_PROTO_FORMAT_COMBINED(v20, v16) )
        {
          v29 = v21;
          if ( qword_140C65B40 && (v21 & 0x10) == 0 )
            v29 = v21 & ~qword_140C65B40;
          ProtoPteAddress = v29 >> 16;
          goto LABEL_52;
        }
        if ( MI_PROTO_FORMAT_COMBINED(v21, v16) )
        {
          if ( v30 == 1 )
            goto LABEL_64;
          if ( v9 )
          {
            LOBYTE(v16) = v33;
            MiUnlockProtoPoolPage(v9, v16);
            v9 = 0LL;
            v37 = 0LL;
          }
          MiFlushTbList((int *)v48);
          ProtoLeafValid = MiMakeProtoLeafValid(v10);
          if ( ProtoLeafValid < 0 )
LABEL_64:
            ProtoLeafValid = -1073740748;
          else
            v10 -= 8LL;
          v8 = ProtoLeafValid;
          goto LABEL_83;
        }
        v16 = (__int64)(v10 << 25) >> 16;
        if ( ((v16 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
           || (v16 & 0xFFFFFFFFFFFFF000uLL) == qword_140C65A38 && qword_140C65A38)
          && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        {
          goto LABEL_82;
        }
        if ( (*(_DWORD *)(v41 + 48) & 0x200000) == 0 && *(_QWORD *)(v41 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v41, v16 >> 12, 0, &v40);
          if ( MiIsPrototypePteVadLookup(v21) )
            goto LABEL_52;
          v31 = v21;
          if ( qword_140C65B40 && (v21 & 0x10) == 0 )
            v31 = v21 & ~qword_140C65B40;
          if ( ProtoPteAddress == v31 >> 16 )
            goto LABEL_52;
          v30 = v38;
        }
        v32 = v21;
        if ( qword_140C65B40 && (v21 & 0x10) == 0 )
          v32 = v21 & ~qword_140C65B40;
        ProtoPteAddress = v32 >> 16;
        if ( v30 != 2 )
        {
LABEL_82:
          v8 = -1073740748;
          ProtoLeafValid = -1073740748;
LABEL_83:
          v27 = v36;
          v10 += 8LL;
          goto LABEL_17;
        }
LABEL_52:
        v22 = v41;
        if ( ProtoPteAddress )
          goto LABEL_53;
LABEL_9:
        if ( v9 )
        {
          LOBYTE(v16) = v33;
          MiUnlockProtoPoolPage(v9, v16);
          v9 = 0LL;
          v23 = 0LL;
          v37 = 0LL;
        }
        else
        {
          v23 = v37;
        }
LABEL_11:
        v24 = MiActOnPte(v22, v18, v10, ProtoPteAddress, v38, a5, &v46, &v45);
        if ( v24 )
        {
          if ( v24 == 274 )
          {
            v25 = 1;
            MiInsertTbFlushEntry((__int64)v48, (__int64)(v10 << 25) >> 16, 1LL, 0);
            MiFlushTbList((int *)v48);
            v36 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
            v10 -= 8LL;
            goto LABEL_13;
          }
          if ( v24 != -1073741791 )
          {
            v25 = v39;
            v26 = v24;
            ProtoLeafValid = v24;
            goto LABEL_14;
          }
          MiInsertTbFlushEntry((__int64)v48, (__int64)(v10 << 25) >> 16, 1LL, 0);
        }
        v25 = v39;
LABEL_13:
        v26 = ProtoLeafValid;
LABEL_14:
        v16 = v45;
        if ( v45 )
        {
          if ( v9 )
          {
            LOBYTE(v16) = v33;
            MiUnlockProtoPoolPage(v9, v16);
            v16 = v45;
            v9 = 0LL;
            v23 = 0LL;
            v37 = 0LL;
          }
          MiReleasePageFileInfo(v46, v16, 1LL);
        }
        v10 += 8LL;
        if ( v25 )
        {
          v27 = v36;
          goto LABEL_96;
        }
        v37 = v23;
        v27 = v36;
        ProtoLeafValid = v26;
        v8 = v26;
        if ( v36 < 0 )
          goto LABEL_21;
LABEL_17:
        if ( v10 > v43
          || (v10 & 0xFFF) == 0
          || (v10 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v42)
          || KeShouldYieldProcessor() )
        {
          goto LABEL_21;
        }
      }
      v22 = v41;
      if ( (*(_DWORD *)(v41 + 48) & 0x200000) != 0 || !*(_QWORD *)(v41 + 80) )
        goto LABEL_9;
      ProtoPteAddress = MiGetProtoPteAddress(v41, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0, &v40);
      if ( !ProtoPteAddress )
      {
        if ( !v18 )
        {
          v27 = v36;
LABEL_96:
          v8 = ProtoLeafValid;
LABEL_21:
          if ( v9 )
          {
            LOBYTE(v16) = v33;
            MiUnlockProtoPoolPage(v9, v16);
            v9 = 0LL;
            v37 = 0LL;
          }
          MiFlushTbList((int *)v48);
          v12 = (__int64)v42;
          if ( v11 )
          {
            MiUnlockPageTableInternal(v42, v11);
            v11 = 0LL;
          }
          v14 = v34;
          MiUnlockWorkingSetShared(v12, v34);
          if ( v27 == -1073740748 )
            MiCopyOnWriteCheckConditions(v12, 3221226548LL);
          goto LABEL_27;
        }
        goto LABEL_9;
      }
LABEL_53:
      v23 = v37;
      if ( ((ProtoPteAddress ^ v37) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        goto LABEL_11;
      if ( v9 )
      {
        LOBYTE(v16) = v33;
        MiUnlockProtoPoolPage(v9, v16);
        v37 = 0LL;
      }
      v9 = MiLockProtoPoolPage(ProtoPteAddress, &v33);
      if ( v9 )
      {
        v23 = ProtoPteAddress;
        v37 = ProtoPteAddress;
        goto LABEL_11;
      }
      MiFlushTbList((int *)v48);
      v12 = (__int64)v42;
      if ( v11 )
      {
        MiUnlockPageTableInternal(v42, v11);
        v11 = 0LL;
      }
      v14 = v34;
      MiUnlockWorkingSetShared(v12, v34);
      MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
      v8 = ProtoLeafValid;
LABEL_27:
      MiLockWorkingSetShared(v12);
      v15 = v43;
      v5 = v41;
      if ( v10 > v43 )
      {
LABEL_28:
        v14 = v34;
        break;
      }
    }
  }
  MiFlushTbList((int *)v48);
  MiUnlockWorkingSetShared(v12, v14);
  return v8;
}
