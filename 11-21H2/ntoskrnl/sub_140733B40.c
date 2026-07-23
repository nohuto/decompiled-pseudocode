/*
 * XREFs of sub_140733B40 @ 0x140733B40
 * Callers:
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     sub_14066B04C @ 0x14066B04C (sub_14066B04C.c)
 *     sub_14066B204 @ 0x14066B204 (sub_14066B204.c)
 *     sub_1406A6A34 @ 0x1406A6A34 (sub_1406A6A34.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 * Callees:
 *     sub_14025A640 @ 0x14025A640 (sub_14025A640.c)
 *     sub_1402AC010 @ 0x1402AC010 (sub_1402AC010.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406A3290 @ 0x1406A3290 (sub_1406A3290.c)
 *     sub_140724DC8 @ 0x140724DC8 (sub_140724DC8.c)
 *     sub_140725930 @ 0x140725930 (sub_140725930.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     sub_14098485C @ 0x14098485C (sub_14098485C.c)
 */

__int64 __fastcall sub_140733B40(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int8 a5,
        __int16 a6,
        unsigned __int64 a7)
{
  char v7; // di
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v14; // dl
  _DWORD *v15; // r15
  char v16; // al
  __int64 v17; // r12
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  ULONG_PTR v22; // r14
  __int64 v23; // rdi
  int v24; // r14d
  char v25; // r8
  int *v26; // rdi
  bool v27; // zf
  unsigned int v28; // r13d
  unsigned __int32 v29; // esi
  __int64 v31; // rdx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // r14
  __int64 ProcessServerSilo; // rax
  __int64 v37; // rdi
  __int64 v38; // r9
  int *v39; // rax
  _DWORD *v40; // rdx
  int v41; // ecx
  _DWORD *i; // rax
  __int64 v43; // rcx
  __int64 *v44; // rbp
  char *v45; // rcx
  struct _KTHREAD *v46; // rax
  __int64 **v47; // rax
  struct _KTHREAD *v48; // rcx
  char v49; // [rsp+40h] [rbp-C8h]
  unsigned int v51; // [rsp+50h] [rbp-B8h] BYREF
  int v52; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v53; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+60h] [rbp-A8h]
  unsigned int v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-88h]
  _BYTE v59[32]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-60h]

  v7 = a6;
  v8 = a4 - 48;
  v9 = a7;
  v53 = a1;
  v10 = 1;
  v54 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v57 = a4;
  v11 = *(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)dword_140D06C0C ^ v54;
  memset(v59, 0, sizeof(v59));
  v56 = a2;
  v12 = qword_140D07490[v11];
  if ( (a6 & 0x400) == 0 )
    v10 = a5;
  v60 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  BugCheckParameter2 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v14 = *(_BYTE *)(v8 + 27);
  v15 = 0LL;
  v16 = *(_BYTE *)(v8 + 26);
  v51 = 0;
  v49 = v14 & 1;
  if ( (v16 & 8) != 0 )
    v17 = v8 - byte_140C25440[v16 & 0xF];
  else
    v17 = 0LL;
  if ( (v14 & 1) == 0 )
    goto LABEL_17;
  *(_BYTE *)(v8 + 27) = v14 & 0xFE;
  if ( v17 )
  {
    v18 = *(_DWORD *)v17;
    v19 = *(_DWORD *)(v17 + 4);
    v55 = *(_DWORD *)v17;
    LODWORD(v54) = v19;
    if ( !a7 )
    {
      v20 = *(_QWORD *)(v8 + 40);
      if ( !v20 )
        goto LABEL_9;
      v9 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v9 )
        goto LABEL_9;
    }
    v24 = sub_140725930(v9, &v51);
    if ( v24 < 0 )
    {
LABEL_95:
      ExReleasePushLockEx(BugCheckParameter2, 0LL);
      KeLeaveCriticalRegion();
      return (unsigned int)v24;
    }
    v34 = v51;
    if ( !v51 )
      goto LABEL_54;
    if ( (PEPROCESS)a3 == PsInitialSystemProcess )
    {
      *(_QWORD *)(v17 + 16) = 1LL;
      *(_DWORD *)(v17 + 8) = v34;
      goto LABEL_9;
    }
    v35 = *(_QWORD *)(a3 + 1384);
    if ( (int)sub_1402AC010(v35, 0LL, 1, v51) < 0 )
    {
      *(_QWORD *)(v17 + 16) = 0LL;
    }
    else
    {
      v18 = v55;
      v19 = v54;
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 512));
      *(_QWORD *)(v17 + 16) = v35;
      if ( v35 )
      {
        v34 = v51;
LABEL_54:
        *(_DWORD *)(v17 + 8) = v34;
        goto LABEL_9;
      }
    }
LABEL_89:
    v24 = -1073741756;
    goto LABEL_95;
  }
  v33 = qword_140D07490[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)dword_140D06C0C ^ (unsigned __int64)(unsigned __int8)v54];
  v18 = *(_DWORD *)(v33 + 104);
  v19 = *(_DWORD *)(v33 + 108);
LABEL_9:
  v21 = v19;
  v54 = v19;
  v22 = v18;
  if ( (PEPROCESS)a3 != PsInitialSystemProcess )
  {
    v23 = *(_QWORD *)(a3 + 1384);
    if ( v18 )
    {
      if ( (int)sub_1402AC010(*(_QWORD *)(a3 + 1384), 0LL, 1, v18) < 0 )
      {
        *(_QWORD *)(v8 + 32) = 0LL;
LABEL_86:
        if ( v17 )
        {
          v45 = *(char **)(v17 + 16);
          if ( v45 )
            sub_140724DC8(v45, v51, 0LL);
        }
        goto LABEL_89;
      }
      v21 = v54;
    }
    if ( v21 && (int)sub_1402AC010(v23, 0LL, 0, v21) < 0 )
    {
      if ( v22 )
        sub_1403493B0((char *)v23, 0LL, 1, v22);
      *(_QWORD *)(v8 + 32) = 0LL;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 512));
      *(_QWORD *)(v8 + 32) = v23;
      if ( v23 )
      {
        v7 = a6;
        goto LABEL_17;
      }
    }
    goto LABEL_86;
  }
  *(_QWORD *)(v8 + 32) = 1LL;
LABEL_17:
  v24 = 0;
  v25 = *(_BYTE *)(v8 + 27) & 8;
  if ( (v7 & 0x20) != 0 )
  {
    if ( v25 == 0 || (v7 & 2) != 0 )
    {
      v24 = -1073741811;
      goto LABEL_95;
    }
    if ( v25 && *(_QWORD *)sub_14025A640(v8) )
      goto LABEL_74;
    if ( *(_QWORD *)(v8 + 8) )
    {
LABEL_77:
      v24 = -1073741790;
      goto LABEL_95;
    }
    if ( v25 )
    {
LABEL_74:
      v26 = (int *)a3;
      v43 = *(_QWORD *)sub_14025A640(v8);
      if ( v43 && v43 != a3 )
        goto LABEL_77;
    }
    else
    {
      v26 = (int *)a3;
    }
    *(_QWORD *)(v8 - byte_140C25440[*(_BYTE *)(v8 + 26) & 0x1F]) = v26;
  }
  else
  {
    if ( v25 && *(_QWORD *)sub_14025A640(v8) )
      goto LABEL_77;
    v26 = (int *)a3;
  }
  if ( v10 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
    goto LABEL_77;
  if ( !v49
    && !*(_QWORD *)(v8 + 8)
    && (*(_BYTE *)(v12 + 66) & 0x10) != 0
    && !*(_QWORD *)(v12 + 120)
    && *(_QWORD *)(v12 + 128) )
  {
    v24 = -1073741823;
    goto LABEL_95;
  }
  v27 = (*(_BYTE *)(v12 + 66) & 0x10) == 0;
  v52 = 0;
  if ( !v27 )
  {
    v24 = sub_1406A3290(v8, v26, &v52);
    if ( v24 < 0 )
      goto LABEL_95;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v12 + 120) )
  {
    v28 = v53;
LABEL_26:
    if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    {
      v31 = v8 - byte_140C25440[*(_BYTE *)(v8 + 26) & 7];
      if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v31 + 11);
        *(_DWORD *)(v31 + 8) ^= (*(_DWORD *)(v31 + 8) ^ (*(_DWORD *)(v31 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v39 = *(int **)v31;
        v40 = 0LL;
        v41 = *v39;
        for ( i = v39 + 2; v41; --v41 )
        {
          if ( *(int **)i == v26 )
          {
            if ( !v40 )
              v40 = i;
            v15 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v40[2] ^= (v40[2] ^ (v40[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v15 + 11);
      }
    }
    ExReleasePushLockEx(v8 + 16, 0LL);
    KeLeaveCriticalRegion();
    if ( !v28 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v44 = (__int64 *)(v8 - 32);
      if ( v44 )
      {
        v46 = KeGetCurrentThread();
        --*((_WORD *)v46 + 243);
        ExAcquirePushLockExclusiveEx(v12 + 184, 0LL);
        v47 = *(__int64 ***)(v12 + 8);
        if ( *v47 != (__int64 *)v12 )
          __fastfail(3u);
        *v44 = v12;
        v44[1] = (__int64)v47;
        *v47 = v44;
        *(_QWORD *)(v12 + 8) = v44;
        ExReleasePushLockEx(v12 + 184, 0LL);
        v48 = KeGetCurrentThread();
        v27 = (*((_WORD *)v48 + 243))++ == 0xFFFF;
        if ( v27 && *((struct _KTHREAD **)v48 + 19) != (struct _KTHREAD *)((char *)v48 + 152) )
          KiCheckForKernelApcDelivery();
      }
    }
    v29 = _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
    if ( v29 > *(_DWORD *)(v12 + 56) )
      *(_DWORD *)(v12 + 56) = v29;
    return (unsigned int)v24;
  }
  ExReleasePushLockEx(v8 + 16, 0LL);
  KeLeaveCriticalRegion();
  v28 = v53;
  if ( a3 == *((_QWORD *)KeGetCurrentThread() + 23) || v53 == 3 )
  {
    v24 = sub_14042A5E0(v53, a5);
  }
  else
  {
    ProcessServerSilo = PsGetProcessServerSilo(a3);
    v37 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    sub_14030D5C0(a3, 0LL, (__int64)v59, v38);
    v24 = sub_14042A5E0(v28, a5);
    sub_1402D0930((__int64)v59, 0LL);
    PsDetachSiloFromCurrentThread(v37);
  }
  v32 = KeGetCurrentThread();
  --*((_WORD *)v32 + 242);
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  if ( v24 >= 0 )
  {
    v26 = (int *)a3;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    sub_14098485C(v8, a3);
  _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
  ExReleasePushLockEx(v8 + 16, 0LL);
  KeLeaveCriticalRegion();
  sub_1407A3190(v8);
  return (unsigned int)v24;
}
