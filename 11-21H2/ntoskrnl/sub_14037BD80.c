/*
 * XREFs of sub_14037BD80 @ 0x14037BD80
 * Callers:
 *     sub_14037BC58 @ 0x14037BC58 (sub_14037BC58.c)
 * Callees:
 *     sub_140240FB0 @ 0x140240FB0 (sub_140240FB0.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14035F5AC @ 0x14035F5AC (sub_14035F5AC.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037C034 @ 0x14037C034 (sub_14037C034.c)
 *     sub_14037C880 @ 0x14037C880 (sub_14037C880.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045F3D4 @ 0x14045F3D4 (sub_14045F3D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14037BD80(__int64 a1, _DWORD *a2, int a3, __int64 a4, __int64 a5, _QWORD *a6, int a7)
{
  _QWORD *v7; // r15
  _OWORD *PoolWithTag; // rdi
  void *v9; // r14
  __int64 v10; // rdx
  _QWORD *v14; // rbp
  ULONG_PTR v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // rbp
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // ebx
  PVOID v22; // rax
  bool v23; // cf
  int v24; // ebx
  SIZE_T v26; // rdx
  ULONG v27; // r8d
  struct _EX_RUNDOWN_REF *v28; // rax
  unsigned int v29; // edx
  int v30; // ecx
  unsigned int v31; // eax
  int v33; // [rsp+90h] [rbp+28h]

  v7 = a6;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v10 = a3 & 0x7FF;
  a6[1] = 0LL;
  *v7 = a5;
  v14 = v7;
  v33 = *(_DWORD *)(a4 + 40) >> 12;
  if ( (_DWORD)v10 != 1024 )
  {
    v15 = sub_14035F5AC(a1, v10);
    v16 = (_DWORD *)v15;
    if ( v15 )
    {
      LODWORD(a6) = 0;
      v17 = (unsigned __int16)a3 >> 13;
      sub_140240FB0(v15 + 80, &a6, 0LL);
      if ( v16[234] <= (unsigned int)a6 )
      {
        v29 = v16[2 * v17 + 477];
        v30 = v16[2 * v17 + 476];
        v31 = v30 * (v16[216] >> 4);
        if ( v31 >= v29 && v31 - v29 < v30 << 8 )
        {
          v24 = -1073741110;
          goto LABEL_26;
        }
      }
      if ( (a3 & 0x40000) != 0 && (unsigned int)(v17 - 5) <= 1 )
      {
        LODWORD(v17) = 6;
      }
      else if ( (_DWORD)v17 != 6 )
      {
LABEL_6:
        if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v16 & 0x400) != 0 )
        {
          v26 = 40LL;
          v27 = 1767337331;
        }
        else
        {
          PoolWithTag = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1408));
          if ( PoolWithTag )
            goto LABEL_9;
          v26 = 4096LL;
          v27 = 2002218355;
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v26, v27);
        if ( !PoolWithTag )
        {
          v24 = -1073741670;
          goto LABEL_26;
        }
LABEL_9:
        v18 = (int)a2;
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        *((_QWORD *)PoolWithTag + 4) = 0LL;
        *((_DWORD *)PoolWithTag + 6) = *a2;
        v19 = *((_DWORD *)PoolWithTag + 2) & 0xFFFFFFF8;
        *((_QWORD *)PoolWithTag + 2) = a4;
        v20 = v17 | v19;
        *((_DWORD *)PoolWithTag + 2) = v20;
        if ( (a3 & 0x10000) != 0 )
        {
          v20 |= 0x40000000u;
          *((_DWORD *)PoolWithTag + 2) = v20;
        }
        if ( (a3 & 0x20000) != 0 )
          *((_DWORD *)PoolWithTag + 2) = v20 | 0x40000000;
        *((_QWORD *)PoolWithTag + 4) = v7;
        v21 = v16[1504] & 0x3FF;
        if ( (*(_DWORD *)(a1 + 1840) & 2) != 0 )
        {
          if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
          {
            v9 = *(void **)(a4 + 24);
          }
          else
          {
            v22 = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000020u);
            v18 = (int)a2;
            v9 = v22;
          }
          if ( !v9 )
          {
            v24 = -1073741688;
            goto LABEL_26;
          }
        }
        if ( (*(_DWORD *)(a1 + 1840) & 0x20) == 0 || (*v16 & 0x400) != 0 )
        {
          v24 = sub_14037C880(a1, v18, v33, v21, (__int64)PoolWithTag, (__int64)v7, 0);
          if ( v24 < 0 )
            goto LABEL_26;
          return 259;
        }
        v23 = a7 != 0;
        a7 = -a7;
        v24 = sub_14037C880(a1, v18, v33, v21, 0LL, 0LL, (unsigned int)v23 + 2);
        if ( v24 >= 0 )
        {
          memset((char *)PoolWithTag + 40, 0, 0x58uLL);
          *((_QWORD *)PoolWithTag + 15) = PoolWithTag;
          *((_QWORD *)PoolWithTag + 13) = v16;
          sub_14037C034((PEX_SPIN_LOCK)(a1 + 1264));
          return 259;
        }
LABEL_26:
        v14 = v7;
        v28 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a1, v16[1504] & 0x3FF);
        sub_1402AD030(v28 + 1);
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        if ( v9 )
          MmUnmapLockedPages(v9, (PMDL)a4);
        goto LABEL_30;
      }
      sub_14045F3D4(a1);
      goto LABEL_6;
    }
  }
  v24 = -1073741811;
LABEL_30:
  if ( v14 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_DWORD *)v7 = v24;
  }
  return (unsigned int)v24;
}
