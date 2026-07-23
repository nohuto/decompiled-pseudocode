/*
 * XREFs of sub_14039F3B0 @ 0x14039F3B0
 * Callers:
 *     sub_14071C610 @ 0x14071C610 (sub_14071C610.c)
 * Callees:
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_14024A390 @ 0x14024A390 (sub_14024A390.c)
 *     sub_14024E7F8 @ 0x14024E7F8 (sub_14024E7F8.c)
 *     sub_14024E884 @ 0x14024E884 (sub_14024E884.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A2DE8 @ 0x1402A2DE8 (sub_1402A2DE8.c)
 *     sub_1402A386C @ 0x1402A386C (sub_1402A386C.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402A6AB0 @ 0x1402A6AB0 (sub_1402A6AB0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_140376950 @ 0x140376950 (sub_140376950.c)
 *     sub_140542834 @ 0x140542834 (sub_140542834.c)
 *     sub_14071CAB0 @ 0x14071CAB0 (sub_14071CAB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14039F3B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  unsigned int v8; // esi
  _QWORD *Pool2; // r15
  char v10; // r12
  char v11; // di
  int v12; // ecx
  bool v13; // zf
  int v14; // r11d
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  _QWORD *v17; // rdi
  __int64 *v18; // r12
  int v19; // eax
  unsigned int v20; // esi
  int v21; // r11d
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  struct _KTHREAD *v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // r8
  _QWORD *v36; // rcx
  char v38; // [rsp+50h] [rbp-78h]
  char v39; // [rsp+51h] [rbp-77h]
  char v40; // [rsp+59h] [rbp-6Fh]
  char v41; // [rsp+5Ah] [rbp-6Eh] BYREF
  char v42; // [rsp+5Bh] [rbp-6Dh] BYREF
  char v43; // [rsp+5Ch] [rbp-6Ch]
  int v44; // [rsp+60h] [rbp-68h]
  _QWORD *v45; // [rsp+68h] [rbp-60h] BYREF
  char v46; // [rsp+70h] [rbp-58h]
  char v47; // [rsp+71h] [rbp-57h]
  _QWORD *v48; // [rsp+78h] [rbp-50h]
  __int64 v49; // [rsp+80h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-40h]
  struct _KTHREAD *v51; // [rsp+90h] [rbp-38h]
  __int64 v52; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v53; // [rsp+D8h] [rbp+10h]

  v53 = a2;
  v52 = a1;
  v8 = 0;
  Pool2 = 0LL;
  v45 = 0LL;
  v38 = 0;
  v10 = 0;
  v43 = 0;
  v46 = 0;
  v40 = 0;
  v11 = 0;
  v47 = 0;
  v42 = 0;
  v41 = 0;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v12 = *(_DWORD *)(v52 + 144);
  if ( (v12 & 0xF00000) == 0 && (((v12 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v12 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v52 + 72) == v52 + 72 )
  {
    goto LABEL_32;
  }
  v49 = *(_QWORD *)(a3 + 24);
  v13 = (*(_DWORD *)(v49 + 8) & 4) == 0;
  v14 = *(_DWORD *)(v49 + 8) & 4;
  v44 = v14;
  v39 = !v13;
  v15 = 0;
  if ( v14 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(288LL, 24LL, 1869763398LL);
    v45 = Pool2;
    v14 = v44;
    v15 = 0;
  }
  v16 = *(_DWORD *)(v52 + 144) & 0x1F0FFDF;
  if ( v16 <= 0x307040 )
  {
    if ( v16 != 3174464 )
    {
      if ( v16 == 12288 || v16 == 45056 || v16 == 1060864 )
        goto LABEL_8;
      if ( v16 != 1069120 && v16 != 1077312 )
        goto LABEL_32;
    }
LABEL_39:
    v22 = v53;
    if ( !v14 )
      goto LABEL_44;
    v23 = *(_QWORD *)(v52 + 8);
    v24 = *(_QWORD *)(v53 + 48);
    if ( v23 == v24 || !sub_1402A6AB0(v24, v23, 0) )
      goto LABEL_32;
    v14 = v44;
    if ( !v44 )
    {
LABEL_44:
      if ( *(_QWORD *)(v52 + 8) != *(_QWORD *)(v22 + 48) )
        goto LABEL_32;
      if ( !v14 )
        goto LABEL_82;
    }
    if ( !a4 )
    {
      sub_14024A390(v52, 0LL, 0LL);
      sub_140240DB4(v52, 0LL);
      *(_BYTE *)(v52 + 32) = 0;
      *(_DWORD *)(v52 + 144) = *(_DWORD *)(v52 + 144) & 0x20 | 1;
      Pool2[2] = *(_QWORD *)(v52 + 8);
      v25 = (_QWORD *)(v52 + 104);
      v26 = *(_QWORD *)(v52 + 104);
      if ( *(_QWORD *)(v26 + 8) != v52 + 104 )
        goto LABEL_81;
      *Pool2 = v26;
      Pool2[1] = v25;
      *(_QWORD *)(v26 + 8) = Pool2;
      *v25 = Pool2;
      Pool2 = 0LL;
      v45 = 0LL;
      *(_QWORD *)(v52 + 8) = 0LL;
      *(_DWORD *)(v52 + 144) |= 0x1000000u;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
    }
    else
    {
LABEL_82:
      v34 = *(_DWORD *)(v52 + 144) & 0x1F0FFDF;
      if ( (v34 == 1069120 || v34 == 1077312 || v34 == 3174464 || v34 == 5271616 || v34 == 8409152 || v34 == 8417344)
        && (a4 & 0x7000) > (*(_DWORD *)(v52 + 144) & 0x200000 | ((*(_DWORD *)(v52 + 144) & 0x100000 | (*(_DWORD *)(v52 + 144) >> 1) & 0x200000u) >> 1)) >> 7
        && *(_QWORD *)(v52 + 88) != v52 + 88 )
      {
        v11 = 1;
      }
      if ( v11 )
      {
        v35 = *(_QWORD *)(a3 + 24);
        *(_OWORD *)v35 = 0LL;
        *(_QWORD *)(v35 + 16) = 0LL;
        *(_DWORD *)(v35 + 4) = (*(_DWORD *)(v52 + 144) >> 12) & 7;
        *(_DWORD *)(v35 + 8) = (*(_DWORD *)(v52 + 144) & 0x200000 | ((*(_DWORD *)(v52 + 144) & 0x100000 | (*(_DWORD *)(v52 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
        *(_DWORD *)(v35 + 12) |= 1u;
        *(_QWORD *)(a3 + 56) = 24LL;
        v8 = -2147483602;
        *(_DWORD *)(a3 + 48) = -2147483602;
        IofCompleteRequest((PIRP)a3, 1);
        goto LABEL_99;
      }
      sub_14024A390(v52, 0LL, 0LL);
      sub_140240DB4(v52, 0LL);
      *(_BYTE *)(v52 + 32) = 0;
      v8 = sub_140542834(v52, a3, v22, a4, a5, v39, &v45, &v41, &v42, a6);
      Pool2 = v45;
    }
LABEL_94:
    if ( v41 )
    {
      while ( 1 )
      {
        v36 = *(_QWORD **)(v52 + 88);
        if ( v36 == (_QWORD *)(v52 + 88) )
          break;
        sub_14024E884(v36);
      }
    }
    if ( v42 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v52 + 8), 0x746C6644u);
      *(_QWORD *)(v52 + 8) = 0LL;
    }
    goto LABEL_99;
  }
  if ( v16 != 8400896 )
  {
    if ( v16 != 5271616 && v16 != 8409152 && v16 != 8417344 )
      goto LABEL_32;
    goto LABEL_39;
  }
LABEL_8:
  v17 = *(_QWORD **)(v52 + 72);
  while ( 1 )
  {
    v48 = v17;
    if ( v17 == (_QWORD *)(v52 + 72) )
      goto LABEL_24;
    if ( v14 )
    {
      v18 = (__int64 *)(v53 + 48);
    }
    else
    {
      v18 = (__int64 *)(v53 + 48);
      if ( v17[3] == *(_QWORD *)(v53 + 48) )
        break;
    }
    if ( v14 )
    {
      v27 = v17[3];
      if ( v27 != *v18 )
      {
        v28 = sub_1402A6AB0(*v18, v27, 0);
        v15 = 0;
        v14 = v44;
        if ( v28 )
          break;
      }
    }
    v17 = (_QWORD *)*v17;
    v10 = v43;
  }
  v38 = 1;
  v19 = v17[6] & 0xF00000;
  v20 = a6;
  if ( v19 != 0x800000 )
  {
    if ( v19 == 0x100000
      && (a4 & 0x7000) > 0x3000
      && (*(_QWORD *)(v52 + 88) != v52 + 88 || !(unsigned __int8)sub_14071CAB0(a4, a6)) )
    {
      v29 = *(_QWORD *)(a3 + 24);
      *(_OWORD *)v29 = 0LL;
      *(_QWORD *)(v29 + 16) = 0LL;
      *(_DWORD *)(v29 + 4) = 3;
      if ( *(_QWORD *)(v52 + 88) != v52 + 88 )
        v20 = 1;
      goto LABEL_64;
    }
    goto LABEL_14;
  }
  if ( !a4 || *(_QWORD *)(v52 + 88) == v52 + 88 && (unsigned __int8)sub_14071CAB0(a4, a6) )
  {
LABEL_14:
    sub_1402A386C((__int64)v17);
    if ( !v21 )
    {
      v40 = 1;
      if ( a4 )
        goto LABEL_72;
      ObfDereferenceObjectWithTag((PVOID)v17[3], 0x746C6644u);
LABEL_17:
      if ( !a4 )
      {
        sub_1402A2DE8(v52);
        v8 = 0;
        *(_DWORD *)(a3 + 48) = 0;
        IofCompleteRequest((PIRP)a3, 1);
LABEL_19:
        sub_14024A390(v52, (__int64)v17, 0LL);
        sub_140240DB4(v52, (__int64)v17);
        if ( *(_QWORD *)(v52 + 72) == v52 + 72 )
          *(_BYTE *)(v52 + 32) = 0;
        ExFreePoolWithTag(v17, 0);
        if ( v44 )
          *(_DWORD *)(v52 + 144) |= 0x1000000u;
        goto LABEL_23;
      }
LABEL_72:
      if ( (a4 & 0x4040) == 0 && (a4 & 0x3010) != 0 )
      {
        v8 = sub_1402A2490(&v52, v53, a3, a4, a5, v39, 1, v20);
      }
      else
      {
        *(_QWORD *)v52 = a3;
        *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
        *(_QWORD *)(a3 + 56) = v52;
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(v52 + 16) = *((_QWORD *)CurrentThread + 23);
        v32 = KeGetCurrentThread();
        v51 = v32;
        *(_QWORD *)(v52 + 24) = v32;
        ObfReferenceObjectWithTag(v32, 0x746C6644u);
        *(_BYTE *)(v52 + 32) = 0;
        if ( v44 )
        {
          ObfReferenceObjectWithTag((PVOID)*v18, 0x746C6644u);
          v33 = *v18;
        }
        else
        {
          v33 = v17[3];
        }
        *(_QWORD *)(v52 + 8) = v33;
        *(_DWORD *)(v52 + 144) = a4 | *(_DWORD *)(v52 + 144) & 0x20 | 0x40;
        *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
        if ( *(_BYTE *)(a3 + 68) )
        {
          sub_140376950(a3, 1, v39 ^ 1);
        }
        else
        {
          _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)sub_140376930);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        }
        v38 = 1;
        v17 = v48;
        Pool2 = v45;
        v8 = 259;
      }
      goto LABEL_19;
    }
    Pool2[2] = v17[3];
    v30 = (_QWORD *)(v52 + 104);
    v31 = *(_QWORD *)(v52 + 104);
    if ( *(_QWORD *)(v31 + 8) == v52 + 104 )
    {
      *Pool2 = v31;
      Pool2[1] = v30;
      *(_QWORD *)(v31 + 8) = Pool2;
      *v30 = Pool2;
      Pool2 = 0LL;
      v45 = 0LL;
      goto LABEL_17;
    }
LABEL_81:
    __fastfail(3u);
  }
  v29 = *(_QWORD *)(a3 + 24);
  *(_OWORD *)v29 = 0LL;
  *(_QWORD *)(v29 + 16) = 0LL;
  *(_DWORD *)(v29 + 4) = 3;
  if ( *(_QWORD *)(v52 + 88) != v52 + 88 )
    v20 = v15;
LABEL_64:
  *(_DWORD *)(v29 + 8) = v20;
  *(_DWORD *)(v29 + 12) |= 1u;
  *(_QWORD *)(a3 + 56) = 24LL;
  v8 = -2147483602;
  *(_DWORD *)(a3 + 48) = -2147483602;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_23:
  v10 = 1;
LABEL_24:
  if ( v38 )
  {
    if ( v40 )
      sub_14024E7F8(v52);
    if ( v10 )
      goto LABEL_99;
    goto LABEL_94;
  }
LABEL_32:
  v8 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  IofCompleteRequest((PIRP)a3, 1);
LABEL_99:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v52 + 152));
  return v8;
}
