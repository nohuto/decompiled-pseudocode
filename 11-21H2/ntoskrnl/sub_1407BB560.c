/*
 * XREFs of sub_1407BB560 @ 0x1407BB560
 * Callers:
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_14079E7C0 @ 0x14079E7C0 (sub_14079E7C0.c)
 *     MmCopyVirtualMemory @ 0x1407BA6D0 (MmCopyVirtualMemory.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     sub_140965C1C @ 0x140965C1C (sub_140965C1C.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058CC44 @ 0x14058CC44 (sub_14058CC44.c)
 *     sub_1405941C0 @ 0x1405941C0 (sub_1405941C0.c)
 *     sub_140931C60 @ 0x140931C60 (sub_140931C60.c)
 *     sub_140979E6C @ 0x140979E6C (sub_140979E6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407BB560(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        ULONG_PTR a3,
        void *a4,
        size_t a5,
        KPROCESSOR_MODE a6,
        size_t *a7,
        char a8)
{
  ULONG_PTR v11; // r15
  __int64 v12; // r9
  size_t v13; // r14
  int v14; // ebx
  unsigned __int64 v15; // rsi
  size_t v16; // rax
  unsigned __int64 v17; // r13
  int v18; // edi
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  ULONG_PTR v22; // rdx
  unsigned __int64 v23; // rcx
  int v24; // r14d
  SIZE_T v25; // rdi
  _DWORD *v26; // rdi
  unsigned __int8 v27; // si
  int v28; // r14d
  int v29; // eax
  __int64 v30; // r9
  PVOID v31; // r14
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  _BYTE *v34; // r15
  __int64 v35; // rax
  char *v36; // rax
  unsigned __int64 v37; // rax
  int v38; // esi
  int v39; // esi
  size_t v40; // r15
  int v41; // eax
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  int v47; // [rsp+30h] [rbp-3F8h] BYREF
  unsigned __int8 v48; // [rsp+34h] [rbp-3F4h]
  size_t i; // [rsp+38h] [rbp-3F0h]
  int v50; // [rsp+40h] [rbp-3E8h]
  int v51; // [rsp+44h] [rbp-3E4h]
  ULONG_PTR v52; // [rsp+48h] [rbp-3E0h]
  size_t Size; // [rsp+50h] [rbp-3D8h]
  PVOID P; // [rsp+58h] [rbp-3D0h]
  void *Src; // [rsp+60h] [rbp-3C8h]
  unsigned __int64 v56; // [rsp+68h] [rbp-3C0h] BYREF
  int v57; // [rsp+70h] [rbp-3B8h]
  __int64 v58; // [rsp+78h] [rbp-3B0h]
  PVOID v59; // [rsp+80h] [rbp-3A8h]
  PMDL p_MemoryDescriptorList; // [rsp+88h] [rbp-3A0h]
  SIZE_T v61; // [rsp+90h] [rbp-398h]
  char *v62; // [rsp+98h] [rbp-390h]
  ULONG_PTR BugCheckParameter1a; // [rsp+A0h] [rbp-388h]
  size_t v64; // [rsp+A8h] [rbp-380h]
  void *v65; // [rsp+B0h] [rbp-378h]
  size_t *v66; // [rsp+B8h] [rbp-370h]
  unsigned __int64 v67; // [rsp+C0h] [rbp-368h]
  __int64 v68; // [rsp+C8h] [rbp-360h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-358h]
  char *v70; // [rsp+D8h] [rbp-350h]
  ULONG_PTR v71; // [rsp+E0h] [rbp-348h]
  void *v72; // [rsp+E8h] [rbp-340h]
  ULONG_PTR v73; // [rsp+F0h] [rbp-338h]
  char *v74; // [rsp+F8h] [rbp-330h]
  _OWORD v75[3]; // [rsp+100h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+130h] [rbp-2F8h] BYREF
  _BYTE v77[512]; // [rsp+1E0h] [rbp-248h] BYREF

  v67 = (unsigned __int64)a4;
  BugCheckParameter1a = a3;
  v62 = a2;
  v11 = BugCheckParameter1;
  v52 = BugCheckParameter1;
  v73 = BugCheckParameter1;
  v70 = a2;
  v71 = a3;
  v72 = a4;
  v66 = a7;
  memset(v75, 0, sizeof(v75));
  memset(&MemoryDescriptorList, 0, 0xA8uLL);
  v56 = 0LL;
  v13 = a5;
  if ( a5 )
  {
    *v66 = 0LL;
    v14 = 1;
    if ( (a8 & 1) != 0 )
      v14 = 17;
    if ( (*(_BYTE *)(v11 + 992) & 1) != 0 )
      v14 |= 4u;
    if ( (*(_BYTE *)(a3 + 992) & 1) != 0 )
      v14 |= 8u;
    v61 = 0LL;
    v15 = (unsigned __int64)a2;
    Src = a2;
    v65 = a4;
    v64 = a5;
    Size = a5;
    p_MemoryDescriptorList = &MemoryDescriptorList;
    CurrentThread = KeGetCurrentThread();
    P = 0LL;
    v68 = 0LL;
    v57 = 0;
    v16 = a5;
LABEL_9:
    for ( i = v16; ; v16 = i )
    {
      if ( !v16 )
      {
        if ( v61 )
          ExFreePoolWithTag(P, 0);
        *v66 = v13;
        return 0LL;
      }
      v17 = v16;
      v58 = v16;
      v18 = 0;
      v51 = 0;
      v47 = 0;
      sub_14030D5C0(v11, 0LL, (__int64)v75, v12);
      if ( a6 && (char *)v15 == v62 && ((unsigned __int64)&v62[v13] > 0x7FFFFFFF0000LL || &v62[v13] < v62) )
        MEMORY[0x7FFFFFFF0000] = 0;
      v19 = 0LL;
      v59 = 0LL;
      if ( v15 >= 0xFFFF800000000000uLL )
        break;
      v43 = v15 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v15 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000 && (v43 != qword_140C50678 || !qword_140C50678)
        || (v22 = v52, (*(_DWORD *)(v52 + 2172) & 1) != 0) )
      {
        v44 = sub_14030E7C0(v15, 2, &v47);
        v19 = v44;
        v59 = (PVOID)v44;
        if ( !v44 )
        {
          v39 = -2147483635;
          goto LABEL_108;
        }
        v21 = (((*(unsigned int *)(v44 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v44 + 33) << 32)) << 12) | 0xFFF)
            + 1;
        v18 = v47;
        v51 = v47;
        v20 = i;
        goto LABEL_14;
      }
      v14 |= 0x20u;
      v21 = v43 + 4096;
      v20 = i;
LABEL_15:
      v23 = v21 - v15;
      if ( v20 > v23 )
      {
        v17 = v23;
        v58 = v23;
      }
      v24 = 0;
      if ( v19 && (*(_DWORD *)(v19 + 48) & 0x6200000) == 0x4200000 )
      {
        v45 = *(_DWORD *)(v19 + 64);
        if ( (v45 & 4) != 0 )
          v24 = 2 - ((v45 & 1) != 0);
      }
      else if ( (v14 & 0x10) != 0 && v19 && (*(_DWORD *)(v19 + 48) & 0x70) == 0x10 )
      {
        v17 = sub_1405941C0(v23, v15, v17);
        if ( !v17 )
          v18 = -1073741819;
        v51 = v18;
        v47 = v18;
        v58 = v17;
        v22 = v52;
      }
      v14 &= ~2u;
      v50 = v14;
      if ( !v17 )
      {
        v28 = v51;
        goto LABEL_42;
      }
      if ( (v14 & 4) == 0 && !v24 && !*(_QWORD *)(v22 + 1264) && (v14 & 1) != 0 )
      {
        v14 |= 2u;
        v50 = v14;
      }
      if ( v17 >= 0x200 && (v14 & 2) != 0 )
      {
        if ( v17 > 0xE000 )
        {
          v17 = 57344LL;
          v58 = 57344LL;
        }
        MemoryDescriptorList.Next = 0LL;
        MemoryDescriptorList.Size = 8 * (((v17 + (v15 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList.MdlFlags = 0;
        MemoryDescriptorList.StartVa = (PVOID)(v15 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList.ByteOffset = v15 & 0xFFF;
        MemoryDescriptorList.ByteCount = v17;
      }
      else
      {
        v14 &= ~2u;
        v50 = v14;
        if ( v61 )
        {
          v25 = v61;
        }
        else if ( v17 > 0x200 )
        {
          v25 = v64;
          if ( v64 > 0x10000 )
            v25 = 0x10000LL;
          do
          {
            P = sub_1402828F0(256, v25, 0x77526D4Du);
            if ( P )
            {
              v61 = v25;
              goto LABEL_29;
            }
            v25 >>= 1;
          }
          while ( v25 > 0x200 );
          P = v77;
          v25 = 512LL;
        }
        else
        {
          P = v77;
          v25 = v17;
        }
LABEL_29:
        if ( v17 > v25 )
        {
          v17 = v25;
          v58 = v25;
        }
      }
      v26 = (_DWORD *)((char *)CurrentThread + 116);
      v74 = (char *)CurrentThread + 116;
      v27 = _bittestandset((signed __int32 *)CurrentThread + 29, 5u);
      v48 = v27;
      if ( (v14 & 2) != 0 )
      {
        MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
        v28 = v51;
      }
      else
      {
        if ( (v14 & 4) != 0 || v24 == 2 )
        {
          v29 = sub_140931C60(v52, (_DWORD)Src, (_DWORD)P, v17, 1, (__int64)&v56);
        }
        else
        {
          if ( v24 != 1 )
          {
            memmove(P, Src, v17);
            v28 = v51;
            goto LABEL_40;
          }
          v29 = sub_140979E6C((_DWORD)Src, (_DWORD)P, v17, 1, (__int64)&v56);
        }
        v47 = v29;
        v28 = v29;
      }
LABEL_40:
      if ( !v27 )
        *v26 &= ~0x20u;
LABEL_42:
      if ( v19 )
        sub_14030EA70((char *)v19);
      if ( v28 < 0 )
      {
        if ( (v14 & 2) == 0 )
          goto LABEL_120;
        v14 &= ~1u;
        sub_1402D0930((__int64)v75, 0LL);
      }
      else
      {
        sub_1402D0930((__int64)v75, 0LL);
        if ( (v14 & 2) == 0 )
        {
          v31 = P;
LABEL_47:
          sub_14030D5C0(BugCheckParameter1a, 0LL, (__int64)v75, v30);
          if ( a6 )
          {
            if ( Src == v62 )
            {
              v32 = v67;
              if ( v67 + a5 > 0x7FFFFFFF0000LL || v67 + a5 < v67 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
          }
          v33 = 0LL;
          v59 = 0LL;
          v34 = v65;
          if ( (unsigned __int64)v65 >= 0xFFFF800000000000uLL )
          {
            v36 = (char *)v65 + v17;
            goto LABEL_53;
          }
          v32 = (unsigned __int64)v65 & 0xFFFFFFFFFFFFF000uLL;
          if ( ((unsigned __int64)v65 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000
            && (v32 != qword_140C50678 || !qword_140C50678)
            || (*(_DWORD *)(v52 + 2172) & 1) != 0 )
          {
            v35 = sub_14030E7C0((unsigned __int64)v65, 2, &v47);
            v33 = v35;
            v59 = (PVOID)v35;
            if ( v35 )
            {
              v32 = *(unsigned int *)(v35 + 28);
              v36 = (char *)((((v32 | ((unsigned __int64)*(unsigned __int8 *)(v35 + 33) << 32)) << 12) | 0xFFF) + 1);
              goto LABEL_53;
            }
            if ( (v14 & 2) != 0 )
              MmUnlockPages(p_MemoryDescriptorList);
LABEL_120:
            v39 = -2147483635;
            v13 = a5;
LABEL_108:
            v40 = i;
            goto LABEL_109;
          }
          v14 |= 0x20u;
          v50 = v14;
          v36 = (char *)(v32 + 4096);
LABEL_53:
          v37 = v36 - v34;
          if ( v17 > v37 )
            v17 = v37;
          v38 = 0;
          if ( v33 && (*(_DWORD *)(v33 + 48) & 0x6200000) == 0x4200000 )
          {
            v46 = *(_DWORD *)(v33 + 64);
            if ( (v46 & 4) != 0 )
              v38 = 2 - ((v46 & 1) != 0);
          }
          else if ( (v14 & 0x10) != 0 && v33 && (*(_DWORD *)(v33 + 48) & 0x70) == 0x10 )
          {
            v17 = sub_1405941C0(v32, (unsigned __int64)v34, v17);
          }
          if ( !v17 )
          {
            v56 = 0LL;
            v39 = -2147483635;
            v47 = -2147483635;
            goto LABEL_70;
          }
          if ( (v14 & 8) != 0 || v38 == 2 )
          {
            v41 = sub_140931C60(BugCheckParameter1a, (_DWORD)v34, (_DWORD)v31, v17, 0, (__int64)&v56);
          }
          else
          {
            if ( v38 != 1 )
            {
              memmove(v34, v31, v17);
              v39 = 0;
              v47 = 0;
              v56 = v17;
              goto LABEL_63;
            }
            v41 = sub_140979E6C((_DWORD)v34, (_DWORD)v31, v17, 0, (__int64)&v56);
          }
          v47 = v41;
          v39 = v41;
LABEL_63:
          if ( v39 < 0 )
          {
            if ( v39 == -1073741819 )
            {
              v40 = i - v56;
              Size = i - v56;
              v39 = -2147483635;
              v47 = -2147483635;
              goto LABEL_71;
            }
LABEL_70:
            v40 = i;
LABEL_71:
            if ( (v14 & 2) != 0 )
              MmUnlockPages(p_MemoryDescriptorList);
            if ( v33 )
              sub_14030EA70((char *)v33);
            v13 = a5;
LABEL_109:
            sub_1402D0930((__int64)v75, 0LL);
            if ( v61 )
              ExFreePoolWithTag(P, 0);
            *v66 = v13 - v40;
            return (unsigned int)v39;
          }
          if ( (v14 & 2) != 0 )
            MmUnlockPages(&MemoryDescriptorList);
          if ( v33 )
            sub_14030EA70((char *)v33);
          sub_1402D0930((__int64)v75, 0LL);
          v16 = i - v17;
          Size = i - v17;
          v64 -= v17;
          v15 = (unsigned __int64)Src + v17;
          Src = (char *)Src + v17;
          v65 = &v34[v17];
          v13 = a5;
          v11 = v52;
          goto LABEL_9;
        }
        v31 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
        if ( v31 )
          goto LABEL_47;
        MmUnlockPages(&MemoryDescriptorList);
        v14 &= ~1u;
      }
      v15 = (unsigned __int64)Src;
      v13 = a5;
      v11 = v52;
    }
    v20 = i;
    v21 = i + v15;
LABEL_14:
    v22 = v52;
    goto LABEL_15;
  }
  return 0LL;
}
