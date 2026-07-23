/*
 * XREFs of sub_1407F5914 @ 0x1407F5914
 * Callers:
 *     sub_1407D5A10 @ 0x1407D5A10 (sub_1407D5A10.c)
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402D3C34 @ 0x1402D3C34 (sub_1402D3C34.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     AlpcGetHeaderSize @ 0x14036A270 (AlpcGetHeaderSize.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407D55E4 @ 0x1407D55E4 (sub_1407D55E4.c)
 *     sub_1407F5D6C @ 0x1407F5D6C (sub_1407F5D6C.c)
 *     sub_1407F7CC4 @ 0x1407F7CC4 (sub_1407F7CC4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407F5914(__int64 a1, char *a2, unsigned int a3, int a4, int Flags, int a6)
{
  size_t v6; // rbx
  char v8; // r15
  char v9; // r12
  void *v10; // rsi
  void *Pool2; // rax
  struct _MDL *Mdl; // rcx
  __int64 v13; // rcx
  PVOID v14; // rax
  __int64 v15; // r15
  __int64 v16; // r10
  unsigned int v17; // ebx
  __int64 v18; // r11
  __int64 v19; // rax
  ULONG HeaderSize; // eax
  char *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  char *v26; // r13
  unsigned int v27; // ebx
  char v28; // r13
  int v30; // ecx
  int v31; // eax
  ULONG v32; // ecx
  ULONG v33; // edx
  struct _MDL *v34; // rcx
  unsigned int v35; // [rsp+38h] [rbp-60h]
  int v36; // [rsp+3Ch] [rbp-5Ch]
  int P; // [rsp+40h] [rbp-58h]
  size_t v38; // [rsp+48h] [rbp-50h]
  char *v39; // [rsp+50h] [rbp-48h]

  v6 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0LL
    || (a3 & 0xFFF) != 0
    || a3 - 0x4000 > 0x3FFFC000
    || (Flags & 0x55FFFFFF) != 0
    || !a4 )
  {
    v28 = 0;
    v27 = -1073741811;
    goto LABEL_24;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, 160LL, 1850305601LL);
  v10 = Pool2;
  if ( !Pool2 )
    goto LABEL_30;
  memset(Pool2, 0, 0xA0uLL);
  *((_QWORD *)v10 + 2) = *((_QWORD *)KeGetCurrentThread() + 23);
  *((_QWORD *)v10 + 5) = a2;
  v38 = v6;
  v39 = &a2[v6];
  *((_QWORD *)v10 + 6) = &a2[v6];
  if ( !(unsigned int)sub_1407F5D6C(v10) )
  {
    v27 = -1073741800;
    goto LABEL_32;
  }
  v9 = 1;
  Mdl = IoAllocateMdl(a2, v6, 0, 0, 0LL);
  *((_QWORD *)v10 + 4) = Mdl;
  if ( !Mdl )
  {
LABEL_30:
    v27 = -1073741670;
LABEL_32:
    v28 = 0;
    goto LABEL_24;
  }
  MmProbeAndLockPages(Mdl, *((_BYTE *)KeGetCurrentThread() + 562), IoModifyAccess);
  v13 = *((_QWORD *)v10 + 4);
  if ( (*(_BYTE *)(v13 + 10) & 5) != 0 )
    v14 = *(PVOID *)(v13 + 24);
  else
    v14 = MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000000u);
  *((_QWORD *)v10 + 8) = v14;
  if ( v14 )
  {
    memset(v14, 0, v6);
    v15 = *((_QWORD *)v10 + 8);
    *(_QWORD *)v15 = 0xDEADBEEFBAADF00DuLL;
    *(_QWORD *)(v15 + 328) = 0xBAADF00DDEADBEEFuLL;
    v16 = (8 * ((unsigned int)v6 >> 6) + 4095) & 0xFFFFF000;
    v35 = v16;
    v17 = v6 - v16 - 4096;
    v18 = ((v17 >> 9) + 4095) & 0xFFFFF000;
    v36 = v18;
    P = v17 - v18;
    *((_QWORD *)v10 + 9) = v38;
    *((_QWORD *)v10 + 10) = v15;
    v19 = *((_QWORD *)v10 + 8) + 4096LL;
    *((_QWORD *)v10 + 11) = v19;
    *((_QWORD *)v10 + 12) = (unsigned int)v16;
    *((_QWORD *)v10 + 13) = v16 + v19;
    *((_QWORD *)v10 + 14) = (unsigned int)v18;
    *((_DWORD *)v10 + 34) = (v17 >> 6) - ((unsigned int)v18 >> 6);
    *((_QWORD *)v10 + 15) = v16 + v19 + v18;
    *((_QWORD *)v10 + 16) = v17 - (unsigned int)v18;
    *((_DWORD *)v10 + 36) = a4;
    *((_QWORD *)v10 + 5) = a2;
    *((_QWORD *)v10 + 6) = v39;
    *((_QWORD *)v10 + 7) = &a2[v18 + 4096 + v16];
    *((_DWORD *)v10 + 37) = Flags;
    if ( a6 )
    {
      v30 = ((Flags >> 31) & 0xC) + 24;
      if ( (Flags & 0x40000000) == 0 )
        v30 = ((Flags >> 31) & 0xC) + 8;
      v31 = v30 + 20;
      if ( (Flags & 0x20000000) == 0 )
        v31 = v30;
      v32 = v31 + 16;
      if ( (Flags & 0x10000000) == 0 )
        v32 = v31;
      v33 = v32 + 24;
      if ( (Flags & 0x8000000) == 0 )
        v33 = v32;
      HeaderSize = v33 + 8;
      if ( (Flags & 0x2000000) == 0 )
        HeaderSize = v33;
    }
    else
    {
      HeaderSize = AlpcGetHeaderSize(Flags);
      LODWORD(v16) = v35;
      LODWORD(v18) = v36;
    }
    *((_DWORD *)v10 + 38) = HeaderSize;
    *(_DWORD *)(v15 + 8) = a3;
    *(_DWORD *)(v15 + 12) = 4096;
    *(_DWORD *)(v15 + 16) = v16;
    *(_DWORD *)(v15 + 20) = v16 + 4096;
    *(_DWORD *)(v15 + 24) = v18;
    *(_DWORD *)(v15 + 28) = v18 + v16 + 4096;
    *(_DWORD *)(v15 + 32) = P;
    *(_QWORD *)(v15 + 64) |= 0xFFFFFFuLL;
    *(_QWORD *)(v15 + 64) |= 0xFFFFFF000000uLL;
    *(_QWORD *)(v15 + 64) &= 0xFFFFFFFFFFFFuLL;
    *(_DWORD *)(v15 + 36) = *((_DWORD *)v10 + 37);
    *(_DWORD *)(v15 + 40) = *((_DWORD *)v10 + 38);
    v21 = (char *)*((_QWORD *)v10 + 11);
    v22 = *((_QWORD *)v10 + 12);
    v23 = (unsigned __int64)(v22 + 3) >> 2;
    if ( v21 > &v21[v22] )
      v23 = 0LL;
    if ( v23 )
      memset(v21, -1, 4 * v23);
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    v8 = 1;
    if ( *(_QWORD *)(a1 + 360) )
    {
      v27 = -1073740006;
    }
    else
    {
      v24 = *(_DWORD *)(a1 + 416);
      if ( (v24 & 0x40) != 0 )
      {
        v27 = -1073740032;
      }
      else
      {
        v25 = *(_QWORD *)(a1 + 32);
        if ( v25 )
        {
          v26 = sub_1407D55E4(v35 >> 3, v25, *(_QWORD *)(a1 + 40));
          if ( !v26 )
          {
            v27 = -1073741670;
            goto LABEL_23;
          }
          sub_1402D3C34(*(KSPIN_LOCK **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v26;
          v24 = *(_DWORD *)(a1 + 416);
        }
        *(_QWORD *)(a1 + 360) = v10;
        v10 = 0LL;
        *(_DWORD *)(a1 + 416) = v24 & 0xFFFFF7FF | ((a6 & 1 | 0x38) << 11);
        v27 = 0;
      }
    }
LABEL_23:
    v28 = 1;
    goto LABEL_24;
  }
  v27 = -1073741670;
  v28 = 1;
LABEL_24:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 352);
    sub_1402AFC00(a1 + 352);
  }
  if ( v10 )
  {
    if ( v28 )
      MmUnlockPages(*((PMDL *)v10 + 4));
    v34 = (struct _MDL *)*((_QWORD *)v10 + 4);
    if ( v34 )
      IoFreeMdl(v34);
    if ( v9 )
      sub_1407F7CC4(v10);
    ExFreePoolWithTag(v10, 0);
  }
  return v27;
}
