/*
 * XREFs of MmFreeLoaderBlock @ 0x140B5B894
 * Callers:
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiWriteWsle @ 0x140216174 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiMarkPfnTradable @ 0x14021B51C (MiMarkPfnTradable.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiDeleteBootRange @ 0x1403900D8 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmFreeBootRegistry @ 0x1408275CC (MmFreeBootRegistry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     MiFreeRegistryPageRange @ 0x140B5BE74 (MiFreeRegistryPageRange.c)
 */

void MmFreeLoaderBlock()
{
  __int64 v0; // rsi
  __int64 v1; // rdi
  unsigned int v2; // ebp
  __int64 v3; // rax
  int v4; // r14d
  unsigned __int64 i; // rcx
  __int64 v6; // rdx
  unsigned int v7; // eax
  _QWORD **v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdx
  _QWORD *Pool; // rax
  signed __int64 v12; // rbx
  char *v13; // rdi
  unsigned __int8 v14; // al
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 j; // r14
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rbp
  _QWORD *v23; // rbx
  __int64 v24; // rax
  unsigned __int64 k; // rsi
  unsigned int v26; // eax
  _QWORD **v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r15
  __int64 v33; // rsi
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // di
  __int64 v42; // rbx
  __int64 v43; // r8
  int v44; // eax
  __int64 v45; // r13
  bool v46; // cf
  _QWORD *v47; // rcx
  _QWORD *m; // rbx
  __int64 v49; // r8
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdi
  bool v55; // zf
  unsigned __int8 v56; // [rsp+20h] [rbp-158h]
  unsigned int v57; // [rsp+30h] [rbp-148h]
  __int64 v58; // [rsp+38h] [rbp-140h]
  __int64 v59; // [rsp+40h] [rbp-138h]
  __int64 v60; // [rsp+48h] [rbp-130h]
  _QWORD *v61; // [rsp+50h] [rbp-128h]
  unsigned __int64 *v62; // [rsp+58h] [rbp-120h]
  __int64 v63; // [rsp+60h] [rbp-118h] BYREF
  char *AnyMultiplexedVm; // [rsp+68h] [rbp-110h]
  __int64 v65; // [rsp+70h] [rbp-108h]
  __int64 v66; // [rsp+78h] [rbp-100h]
  _QWORD v67[24]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v67, 0, 0xB8uLL);
  v0 = KeLoaderBlock_0 + 352;
  v1 = 0LL;
  v66 = KeLoaderBlock_0 + 352;
  v60 = 0LL;
  v2 = 0;
  v58 = 0LL;
  v3 = *(_QWORD *)(KeLoaderBlock_0 + 360);
  v4 = 2113664;
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      goto LABEL_34;
    i = v3 ^ (v0 | 1);
  }
  else
  {
    i = *(_QWORD *)(KeLoaderBlock_0 + 360);
  }
  if ( i )
  {
    do
    {
      v6 = *(_QWORD *)(i + 40);
      if ( v6 )
      {
        v7 = *(_DWORD *)(i + 24);
        if ( v7 == 19 )
        {
          v1 += v6;
        }
        else if ( v7 <= 0x15 && _bittest(&v4, v7) )
        {
          ++v2;
        }
      }
      v8 = *(_QWORD ***)(i + 8);
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = *(_QWORD *)(i + 8); v10; v10 = (_QWORD *)*v10 )
          i = (unsigned __int64)v10;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v9 )
            break;
          v9 = i;
        }
      }
    }
    while ( i );
    v57 = v2;
    if ( v1 )
    {
      Pool = MiAllocatePool(64, 8 * v1 + 8, 0x624D6D4Du);
      v61 = Pool;
      v12 = (signed __int64)Pool;
      if ( Pool )
      {
        *Pool = v1;
        v67[3] = 0LL;
        v62 = Pool + 1;
        LODWORD(v67[1]) = 20;
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        v13 = AnyMultiplexedVm;
        v14 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        v16 = *(_QWORD *)(v0 + 8);
        v56 = v14;
        if ( (v16 & 1) != 0 )
        {
          if ( v16 == 1 )
            goto LABEL_32;
          j = v16 ^ (v0 | 1);
        }
        else
        {
          j = *(_QWORD *)(v0 + 8);
        }
        if ( !j )
          goto LABEL_31;
        while ( *(_DWORD *)(j + 24) != 19 || !*(_QWORD *)(j + 40) )
        {
LABEL_22:
          v18 = *(_QWORD ***)(j + 8);
          v19 = j;
          if ( v18 )
          {
            v20 = *v18;
            for ( j = *(_QWORD *)(j + 8); v20; v20 = (_QWORD *)*v20 )
              j = (unsigned __int64)v20;
          }
          else
          {
            while ( 1 )
            {
              j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !j || *(_QWORD *)j == v19 )
                break;
              v19 = j;
            }
          }
          if ( !j )
          {
            v0 = v66;
            v12 = (signed __int64)v61;
            v2 = v57;
            v14 = v56;
LABEL_31:
            v4 = 2113664;
LABEL_32:
            MiUnlockWorkingSetShared((__int64)v13, v14);
            if ( _InterlockedCompareExchange64(&qword_140C698D8, v12, 0LL) )
            {
              qword_140C698D8 = v12;
              MmFreeBootRegistry();
            }
            goto LABEL_34;
          }
        }
        v59 = 0LL;
        v29 = 0LL;
        v30 = *(_QWORD *)(j + 32);
        v31 = 0LL;
        v65 = 0LL;
        v32 = 48 * v30 - 0x220000000000LL;
        v33 = v30;
        while ( 1 )
        {
          v34 = *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL;
          v35 = (__int64)((v34 << 25) - v31) >> 16;
          *v62++ = v35;
          v36 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v29 != v36 )
          {
            if ( v29 )
            {
              MiFlushTbList((int *)v67);
              MiFreeRegistryPageRange(v60, v58);
              MiUnlockPageTableInternal((__int64)v13, v29);
            }
            v29 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            MiLockPageTableInternal((__int64)v13, v36, 0, v15);
          }
          v63 = MI_READ_PTE_LOCK_FREE(v34);
          MiMarkPfnTradable(v32, 0);
          MiGetWsleContents(v37, v35);
          MiWriteWsle(v38, v35);
          v39 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v63);
          v40 = MiSwizzleInvalidPte(v39 & 0xFFFFFFFFFF000LL | 0x880);
          v41 = v40;
          v63 = v40;
          v42 = v40;
          if ( MiPteInShadowRange(v34) )
          {
            if ( MiPteHasShadow() )
            {
              v44 = 1;
              if ( !HIBYTE(word_140C66CFC) )
              {
                v55 = (v41 & 1) == 0;
                goto LABEL_81;
              }
            }
            else
            {
              v44 = 0;
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v55 = (v41 & 1) == 0;
LABEL_81:
                if ( !v55 )
                  v42 |= 0x8000000000000000uLL;
              }
            }
          }
          else
          {
            v44 = 0;
          }
          *(_QWORD *)v34 = v42;
          if ( v44 )
            MiWritePteShadow(v34, v42, v43);
          if ( HIDWORD(v67[1]) )
          {
            v45 = v58 + 1;
          }
          else
          {
            v45 = 1LL;
            v60 = v33 + v59;
          }
          v58 = v45;
          MiInsertTbFlushEntry((__int64)v67, v35, 1LL, 0);
          v32 += 48LL;
          v13 = AnyMultiplexedVm;
          v46 = (unsigned __int64)++v59 < *(_QWORD *)(j + 40);
          v31 = v65;
          if ( !v46 )
          {
            MiFlushTbList((int *)v67);
            MiFreeRegistryPageRange(v60, v45);
            MiUnlockPageTableInternal((__int64)v13, v29);
            goto LABEL_22;
          }
        }
      }
    }
  }
LABEL_34:
  v21 = MiAllocatePool(64, 16LL * v2, 0x624D6D4Du);
  v22 = v21;
  if ( v21 )
  {
    v23 = v21;
    v24 = *(_QWORD *)(v0 + 8);
    if ( (v24 & 1) != 0 )
    {
      if ( v24 == 1 )
      {
LABEL_70:
        ExFreePoolWithTag(v22, 0);
        return;
      }
      k = v24 ^ (v0 | 1);
    }
    else
    {
      k = *(_QWORD *)(v0 + 8);
    }
    if ( k )
    {
      do
      {
        v26 = *(_DWORD *)(k + 24);
        if ( v26 <= 0x15 && _bittest(&v4, v26) && *(_QWORD *)(k + 40) )
        {
          *v23 = *(_QWORD *)(k + 32);
          v23[1] = *(_QWORD *)(k + 40);
          v23 += 2;
        }
        v27 = *(_QWORD ***)(k + 8);
        v28 = k;
        if ( v27 )
        {
          v47 = *v27;
          for ( k = *(_QWORD *)(k + 8); v47; v47 = (_QWORD *)*v47 )
            k = (unsigned __int64)v47;
        }
        else
        {
          while ( 1 )
          {
            k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !k || *(_QWORD *)k == v28 )
              break;
            v28 = k;
          }
        }
      }
      while ( k );
      if ( v23 != v22 )
      {
        for ( m = v23 - 2; m >= v22; m -= 2 )
        {
          v49 = 48LL * *m;
          v50 = m[1];
          v51 = (_QWORD *)(v49 - 0x21FFFFFFFFF8LL);
          v52 = *(_QWORD *)(v49 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v50 )
          {
            v51 += 6;
            v52 += 8LL;
            if ( (*v51 | 0x8000000000000000uLL) != v52 )
            {
              v53 = *(_QWORD *)(v49 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
              v54 = (__int64)(v52 - v53) >> 3;
              MiDeleteBootRange(v53, v54, v49);
              m[1] -= v54;
              *m += v54;
              m += 2;
              if ( v54 )
                goto LABEL_69;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *m - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL, m[1], v49);
LABEL_69:
          ;
        }
      }
    }
    goto LABEL_70;
  }
}
