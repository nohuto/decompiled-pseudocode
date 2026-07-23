/*
 * XREFs of CmpParseKey @ 0x1406E69B0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     PsGetCurrentSilo @ 0x14022E310 (PsGetCurrentSilo.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     PsGetPermanentSiloContext @ 0x14031CAD0 (PsGetPermanentSiloContext.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsGetParentSilo @ 0x1406831E0 (PsGetParentSilo.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpDoesParseEnterRegistryA @ 0x1407E3474 (CmpDoesParseEnterRegistryA.c)
 *     CmpRollbackTransactionArray @ 0x140A1E9B0 (CmpRollbackTransactionArray.c)
 */

__int64 __fastcall CmpParseKey(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned __int8 a4,
        int a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  _DWORD *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r14
  __int128 v15; // xmm0
  POBJECT_TYPE *v16; // r10
  __int64 v17; // r13
  unsigned __int16 v18; // dx
  _WORD *v19; // rcx
  __int16 v20; // ax
  int v21; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r12
  int v24; // r9d
  __int64 v25; // rax
  int v26; // eax
  int v27; // ebx
  int v28; // esi
  int v29; // eax
  __int64 v30; // r8
  _DWORD *v31; // rdx
  __int64 v32; // rdi
  int v33; // ecx
  int v34; // ecx
  struct _KTHREAD *v35; // rcx
  bool v36; // zf
  struct _PRIVILEGE_SET *v37; // rdi
  __int64 i; // rbx
  int v40; // ebx
  struct _PRIVILEGE_SET *Pool; // rax
  struct _PRIVILEGE_SET *v42; // rsi
  _DWORD *v43; // rsi
  int v44; // eax
  int Timeout; // [rsp+20h] [rbp-E0h]
  int Timeouta; // [rsp+20h] [rbp-E0h]
  __int64 v47; // [rsp+28h] [rbp-D8h]
  __int128 v48; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v49[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int128 v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  int v54; // [rsp+98h] [rbp-68h]
  int v55; // [rsp+9Ch] [rbp-64h]
  __int128 *v56; // [rsp+A0h] [rbp-60h]
  int v57; // [rsp+A8h] [rbp-58h]
  __int128 v58; // [rsp+ACh] [rbp-54h]
  __int64 v59; // [rsp+BCh] [rbp-44h]
  int v60; // [rsp+C4h] [rbp-3Ch]
  PPRIVILEGE_SET Privileges; // [rsp+C8h] [rbp-38h]
  __int64 *v62; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v63; // [rsp+D8h] [rbp-28h]
  _WORD v64[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v65; // [rsp+E4h] [rbp-1Ch]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  __int128 v67; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v68; // [rsp+100h] [rbp+0h]
  __int128 v69; // [rsp+110h] [rbp+10h]
  __int128 v70; // [rsp+120h] [rbp+20h]
  __int128 v71; // [rsp+130h] [rbp+30h]
  __int128 v72; // [rsp+140h] [rbp+40h]
  __int128 v73; // [rsp+150h] [rbp+50h]
  __int128 v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+170h] [rbp+70h]
  __int128 v76; // [rsp+180h] [rbp+80h] BYREF
  __int128 v77; // [rsp+190h] [rbp+90h] BYREF
  char v78; // [rsp+1F0h] [rbp+F0h]
  int v79; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD *v80; // [rsp+200h] [rbp+100h]
  unsigned __int8 v81; // [rsp+208h] [rbp+108h]

  v81 = a4;
  v80 = a3;
  v12 = a3;
  v77 = 0LL;
  v48 = 0LL;
  v76 = 0LL;
  CmpInitializeThreadInfo((__int64)&v77);
  v13 = (__int64)a11;
  v14 = a8;
  v78 = 0;
  v15 = *a7;
  *a11 = 0LL;
  v75 = 0LL;
  v52 = 0LL;
  v49[1] = v49;
  v48 = v15;
  v49[0] = v49;
  v50 = 0LL;
  Privileges = 0LL;
  v67 = 0LL;
  LODWORD(a7) = 0;
  v68 = 0LL;
  v79 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v51 = 0LL;
  if ( v16 != CmKeyObjectType )
  {
    v27 = -1073741788;
    goto LABEL_46;
  }
  v17 = a10;
  if ( (PVOID)a1 == CmpRegistryRootObject )
  {
    for ( i = *(_QWORD *)(a10 + 8); ; i = PsGetParentSilo(i) )
    {
      a8 = 0LL;
      PsGetPermanentSiloContext(i, CmpSiloContextSlot, (unsigned __int64 *)&a8);
      if ( a8 )
      {
        a1 = *(_QWORD *)(a8 + 32);
        if ( a1 )
          break;
      }
    }
    v13 = (__int64)a11;
    v12 = v80;
  }
  v18 = v48;
  if ( (_WORD)v48 )
  {
    v19 = (_WORD *)*((_QWORD *)&v48 + 1);
    while ( *(_WORD *)(*((_QWORD *)&v48 + 1) + 2 * ((unsigned __int64)v18 >> 1) - 2) == 92 )
    {
      v36 = v18 == 2;
      v18 -= 2;
      LOWORD(v48) = v18;
      if ( v36 )
        goto LABEL_9;
    }
    if ( v18 )
    {
      v20 = WORD1(v48);
      do
      {
        if ( *v19 != 92 )
          break;
        ++v19;
        v18 -= 2;
        v20 -= 2;
        *((_QWORD *)&v48 + 1) = v19;
        LOWORD(v48) = v18;
        WORD1(v48) = v20;
      }
      while ( v18 );
    }
  }
LABEL_9:
  if ( !v14 )
  {
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 296LL, 875973955LL);
    Privileges = Pool;
    v42 = Pool;
    if ( !Pool )
    {
      v27 = -1073741670;
      goto LABEL_46;
    }
    memset(Pool, 0, 0x128uLL);
    v42[4].Privilege[0].Attributes = -1;
    *(_QWORD *)&v42[7].Privilege[0].Luid.HighPart = (char *)v42 + 144;
    *(_QWORD *)&v42[7].Control = (char *)v42 + 144;
    memset(&v42[10].Privilege[0].Attributes, 0, 0x50uLL);
    v14 = (__int64)v42;
  }
  v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v14 + 96) = v21;
  if ( *(_QWORD *)(a1 + 8) == *((_QWORD *)CmpRegistryRootObject + 1)
    && (_WORD)v48
    && ((**((_WORD **)&v48 + 1) - 65) & 0xFFDF) == 0
    && ((unsigned __int16)v48 <= 2u || *(_WORD *)(*((_QWORD *)&v48 + 1) + 2LL) == 92)
    && (*(_DWORD *)v14 & 0x40) == 0 )
  {
    v27 = -1073741790;
    goto LABEL_44;
  }
  if ( (*(_DWORD *)v14 & 0x800) == 0 || (unsigned __int8)CmpDoesParseEnterRegistryA(a1, &v48) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
      *(_DWORD *)(v14 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    v23 = a6;
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *((_QWORD *)&v73 + 1) = 1LL;
      DWORD2(v74) = *(_DWORD *)(v14 + 28);
      LOBYTE(v24) = 1;
      HIDWORD(v74) = a5;
      *(_QWORD *)&v74 = &v48;
      LOBYTE(v75) = v81;
      DWORD2(v68) = *(_DWORD *)(v14 + 24);
      *(_QWORD *)&v68 = CmKeyObjectType;
      DWORD2(v70) = v12[4];
      *(_QWORD *)&v67 = v23;
      *((_QWORD *)&v67 + 1) = a1;
      *((_QWORD *)&v71 + 1) = v13;
      v25 = *(_QWORD *)(v14 + 72);
      if ( (v25 & 1) != 0 )
        v25 = 0LL;
      *(_QWORD *)&v73 = v25;
      *(_QWORD *)&v51 = &v67;
      DWORD2(v51) = *(_DWORD *)(v14 + 96);
      v52 = v14 + 144;
      if ( (*(_DWORD *)v14 & 1) != 0 )
      {
        v64[0] = *(_WORD *)(v14 + 4);
        v64[1] = v64[0];
        v66 = *(_QWORD *)(v14 + 8);
        *(_QWORD *)&v71 = v14 + 32;
        *(_QWORD *)&v69 = v64;
        *((_QWORD *)&v69 + 1) = *((_QWORD *)v12 + 8);
        *(_QWORD *)&v70 = a9;
        v65 = 0;
        v26 = CmpCallCallBacksEx(26, (unsigned int)&v67, (unsigned int)&v51, v24, 27, a1, (__int64)v49);
      }
      else
      {
        v26 = CmpCallCallBacksEx(28, (unsigned int)&v67, (unsigned int)&v51, v24, 29, a1, (__int64)v49);
      }
      v27 = v26;
      if ( v26 < 0 )
      {
        if ( v26 != -1073740541 )
          goto LABEL_43;
        v27 = HIDWORD(v51);
        if ( HIDWORD(v51) != 260 )
        {
          if ( HIDWORD(v51) != 872 )
          {
            v43 = v80;
            v44 = HIDWORD(v70);
            v80[5] |= HIDWORD(v70);
            v43[4] &= ~(v44 | 0x2000000);
            v27 = 0;
            goto LABEL_43;
          }
          goto LABEL_73;
        }
        goto LABEL_40;
      }
      a1 = *((_QWORD *)&v67 + 1);
      *(_DWORD *)(v14 + 96) = DWORD2(v51);
      v78 = 1;
    }
    v28 = (int)v80;
    while ( 1 )
    {
      while ( 1 )
      {
        v76 = v48;
        v29 = CmpDoParseKey(a1, v28, v81, a5, v23, (__int64)&v76, v14, a9, (__int64)&v50);
        v27 = v29;
        if ( v29 != 259 )
          break;
        KeWaitForSingleObject((char *)&unk_140C02700 + 184 * *(unsigned int *)(v14 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v14 &= ~0x100u;
      }
      if ( v29 != -1073741267 )
        break;
      v40 = (int)a7;
      if ( (unsigned int)a7 >= 0x40 )
      {
        v27 = -1073741772;
        v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(a1 + 96);
        goto LABEL_27;
      }
      if ( (*(_DWORD *)(v14 + 100) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v14 + 120), *(_QWORD *)(v14 + 128), v30, &v79, Timeout);
        *(_DWORD *)(v14 + 100) &= ~4u;
        *(_DWORD *)(v14 + 120) = 0;
        *(_QWORD *)(v14 + 128) = 0LL;
      }
      LODWORD(a7) = v40 + 1;
    }
    v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(a1 + 96);
    if ( v29 >= 0 )
    {
      *(_QWORD *)v13 = v50;
      v50 = 0LL;
    }
LABEL_27:
    if ( v78 )
    {
      v31 = v80;
      v32 = *(_QWORD *)v13;
      v33 = v80[5];
      HIDWORD(v70) = v33;
      if ( (*(_DWORD *)v14 & 1) != 0 )
      {
        if ( !CmpCallBackCount )
        {
LABEL_35:
          if ( v27 >= 0 && v33 != v31[5] )
          {
            v31[5] = v33;
            v31[4] = v31[6] & ~(v33 | 0x2000000);
          }
          if ( *(_QWORD *)v13 )
            *(_DWORD *)(*(_QWORD *)v13 + 96LL) = DWORD2(v51);
          goto LABEL_40;
        }
        if ( CmpIsRegistryLockAcquired() || (_QWORD *)v49[0] == v49 )
        {
LABEL_34:
          v33 = HIDWORD(v70);
          v31 = v80;
          goto LABEL_35;
        }
        v34 = 27;
        v56 = &v67;
        v62 = &v53;
        v63 = &v51;
        v47 = v32;
        Timeouta = 27;
      }
      else
      {
        if ( !CmpCallBackCount )
          goto LABEL_35;
        if ( CmpIsRegistryLockAcquired() || (_QWORD *)v49[0] == v49 )
          goto LABEL_34;
        v34 = 29;
        v56 = &v67;
        v62 = &v53;
        v63 = &v51;
        v47 = v32;
        Timeouta = 29;
      }
      v55 = 0;
      v59 = 0LL;
      v60 = 0;
      v53 = v32;
      v58 = 0LL;
      v54 = v27;
      v57 = v27;
      CmpCallCallBacksEx(v34, (unsigned int)&v53, (unsigned int)&v62, 0, Timeouta, v47, (__int64)v49);
      v27 = v57;
      goto LABEL_34;
    }
LABEL_40:
    if ( v27 != 872 )
    {
      if ( v27 == 260 )
      {
        *(_DWORD *)(v14 + 96) = v21;
        *(_QWORD *)(v17 + 8) = PsGetCurrentSilo();
      }
      goto LABEL_43;
    }
LABEL_73:
    *(_QWORD *)(v14 + 64) = 0LL;
    *(_QWORD *)(v17 + 8) = 0LL;
LABEL_43:
    v35 = KeGetCurrentThread();
    v36 = v35->KernelApcDisable++ == -1;
    if ( v36
      && ($C71981A45BEB2B45F82C232A7085991E *)v35->ApcState.ApcListHead[0].Flink != &v35->152
      && !v35->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_44;
  }
  v27 = -1073741790;
LABEL_44:
  v37 = Privileges;
  if ( Privileges )
  {
    CmpCleanupParseContext(Privileges, 0LL);
    CmSiFreeMemory(v37);
  }
LABEL_46:
  CmCleanupThreadInfo((__int64 *)&v77);
  return (unsigned int)v27;
}
