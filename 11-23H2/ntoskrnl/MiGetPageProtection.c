/*
 * XREFs of MiGetPageProtection @ 0x140272CB0
 * Callers:
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14021C84C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1402DB180 (MiUnlockProtoPoolPage.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiGetImageProtoProtection @ 0x140356A5C (MiGetImageProtoProtection.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiCaptureProtectionFromLockedProto @ 0x14046CEC0 (MiCaptureProtectionFromLockedProto.c)
 *     MiRotatedToFrameBuffer @ 0x1406333A4 (MiRotatedToFrameBuffer.c)
 *     MiGetProtectionFromPte @ 0x14064940C (MiGetProtectionFromPte.c)
 *     MiGetValidAwePartitionId @ 0x14064AF3C (MiGetValidAwePartitionId.c)
 *     MiGetValidAweProtection @ 0x14064AFD4 (MiGetValidAweProtection.c)
 */

__int64 __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned __int64 **a3,
        _DWORD *a4,
        _WORD *a5)
{
  _WORD *v5; // rbp
  unsigned __int64 v9; // rdi
  unsigned int v11; // esi
  int v12; // r9d
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  _KPROCESS *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // r10
  _KPROCESS *Process; // rcx
  __int64 v30; // rdi
  unsigned __int64 v31; // rbx
  unsigned __int64 *ProtoPteAddress; // rsi
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // esi
  int v40; // edx
  struct _LIST_ENTRY *v41; // r9
  __int64 v42; // rcx
  _WORD *v43; // rcx
  __int64 CloneAddress; // rax
  __int64 v45; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  v45 = 0LL;
  a5 = 0LL;
  v9 = *(_QWORD *)a2;
  *v5 = 0;
  *a3 = 0LL;
  *a4 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v37 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v38 = v9 | 0x20;
      if ( (v37 & 0x20) == 0 )
        v38 = v9;
      v9 = v38;
      if ( (v37 & 0x42) != 0 )
        v9 = v38 | 0x42;
    }
  }
  v11 = *(_DWORD *)(BugCheckParameter2 + 48);
  v12 = v11 & 0x70;
  if ( v12 == 48 && (v11 & 0x6200000) != 0x4200000 )
  {
    *v5 = MiGetValidAwePartitionId(v9);
    result = MiGetValidAweProtection(BugCheckParameter2, v9);
    if ( (v11 & 0x2200000) == 0x2200000 )
      *a4 = 0;
    return result;
  }
  if ( (v9 & 1) == 0 )
  {
    if ( (v9 & 0x400) == 0 )
    {
      if ( (v9 & 0x800) != 0 && (v22 = MiLockTransitionLeafPageEx(a2)) != 0 )
      {
        v23 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL));
        if ( (*(_DWORD *)(v23 + 4) & 0x80u) != 0 )
          v23 = **(_QWORD **)(v23 + 16944);
        *v5 = *(_WORD *)v23;
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        *v5 = **(_WORD **)(qword_140C673C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
      }
      v24 = (v9 >> 5) & 0x1F;
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x2200000) == 0x2200000 )
        *a4 = 0;
      return (unsigned int)v24;
    }
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v9, 0LL, a3) )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v9, v25) )
      {
        v43 = **(_WORD ***)(((v28 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      }
      else
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( !Process[1].Affinity.StaticBitmap[12] || (CloneAddress = MiLocateCloneAddress(Process, v28, v26)) == 0 )
        {
          if ( v27 != 32 || (v11 & 0xF80) != 0x380 )
            KeBugCheckEx(0x1Au, 0x41202uLL, a2, v9, BugCheckParameter2);
          *v5 = **(_WORD **)(qword_140C673C8 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
          return MiGetImageProtoProtection(BugCheckParameter2, v28);
        }
        v43 = *(_WORD **)(*(_QWORD *)(CloneAddress + 56) + 24LL);
      }
      *v5 = *v43;
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v28)];
    }
    v30 = (v9 >> 5) & 0x1F;
    if ( (v11 & 0x200000) == 0 )
    {
      *v5 = **(_WORD **)(qword_140C673C8 + 8LL * (*(_WORD *)(**(_QWORD **)(BugCheckParameter2 + 72) + 60LL) & 0x3FF));
      v31 = (unsigned __int64)((__int64)(a2 << 25) >> 16) >> 12;
      ProtoPteAddress = (unsigned __int64 *)MiGetProtoPteAddress(BugCheckParameter2, v31, 4LL, &a5);
      if ( !ProtoPteAddress )
        return 0LL;
      v33 = *(_QWORD **)(BugCheckParameter2 + 120);
      if ( (__int64)v33 < 0
        && v31
         - (*(unsigned int *)(BugCheckParameter2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter2 + 32) << 32)) > (unsigned __int64)(*v33 - 1LL) >> 12 )
      {
        return 0LL;
      }
      if ( !*(_QWORD *)(*(_QWORD *)a5 + 64LL) && (*(_DWORD *)(*(_QWORD *)a5 + 56LL) & 0x2000) == 0 )
      {
        if ( (int)MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, (__int64)v33, &v45, 0LL) < 0 )
        {
          *a3 = ProtoPteAddress;
          LODWORD(v30) = 256;
        }
        else
        {
          LOBYTE(v34) = 2;
          v35 = *ProtoPteAddress;
          MiUnlockProtoPoolPage(v45, v34);
          if ( !v35 )
            return 0LL;
        }
      }
    }
    return (unsigned int)v30;
  }
  v13 = (v9 >> 12) & 0xFFFFFFFFFFLL;
  v14 = 6 * v13;
  if ( v12 == 16 )
  {
    if ( v13 <= qword_140C65BA0 && ((*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      *v5 = (*(_QWORD *)(48 * v13 - 0x220000000000LL + 40) >> 43) & 0x3FF;
    v39 = (v11 >> 7) & 0x1F;
    if ( (v9 & 0x18) == 8 )
    {
      v39 |= 0x18u;
    }
    else if ( (v9 & 0x10) != 0 )
    {
      v39 |= 8u;
    }
    return v39;
  }
  else
  {
    if ( v12 == 64 && (unsigned int)MiRotatedToFrameBuffer(a2) )
    {
      LODWORD(v20) = 4;
      if ( (v9 & 0x800) == 0 )
        LODWORD(v20) = 1;
      v40 = v11 & 0xC00;
      if ( (v11 & 0x380) != 0 && v40 == 3072 )
      {
        LODWORD(v20) = v20 | 0x18;
      }
      else if ( v40 == 1024 )
      {
        LODWORD(v20) = v20 | 8;
      }
      return (unsigned int)v20;
    }
    v15 = *(_QWORD *)(8 * v14 - 0x220000000000LL + 40);
    *v5 = ((unsigned __int64)v15 >> 43) & 0x3FF;
    if ( (v15 & 0x10000000000LL) != 0 )
    {
      result = MiGetProtectionFromPte(BugCheckParameter2, v9);
      if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x2200000) == 0x2200000 )
        *a4 = 0;
    }
    else
    {
      if ( v15 < 0 )
      {
        v16 = ((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
        v17 = *(_QWORD *)v16;
        if ( v16 >= 0xFFFFF6FB7DBED000uLL
          && v16 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v17 & 1) != 0
          && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
        {
          v41 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v41 )
          {
            v42 = *((_QWORD *)&v41->Flink + ((v16 >> 3) & 0x1FF));
            if ( (v42 & 0x20) != 0 )
              v17 |= 0x20uLL;
            if ( (v42 & 0x42) != 0 )
              v17 |= 0x42uLL;
          }
        }
        result = (v17 >> 60) & 7;
        if ( (_DWORD)result )
        {
          if ( (*(_QWORD *)v16 & 0x18) == 8 )
          {
            result = (unsigned int)result | 0x18;
          }
          else
          {
            if ( (*(_QWORD *)v16 & 0x10) == 0 )
              return result;
            result = (unsigned int)result | 8;
          }
        }
        if ( (_DWORD)result )
          return result;
        v19 = *(_QWORD *)(8 * v14 - 0x220000000000LL + 8);
        v20 = (*(_DWORD *)(8 * v14 - 0x220000000000LL + 16) >> 5) & 0x1F;
        if ( v19 > 0 )
          return (unsigned int)MmMakeProtectNotWriteCopy[v20];
        v21 = KeGetCurrentThread()->ApcState.Process;
        if ( v21[1].Affinity.StaticBitmap[12] )
        {
          if ( MiLocateCloneAddress(v21, v19 | 0x8000000000000000uLL, v20) )
            LODWORD(v20) = MmMakeProtectNotWriteCopy[v20];
        }
        return (unsigned int)v20;
      }
      result = (*(_DWORD *)(8 * v14 - 0x220000000000LL + 16) >> 5) & 0x1F;
      if ( (v11 & 0x2200000) == 0x2200000 )
        *a4 = 0;
    }
  }
  return result;
}
