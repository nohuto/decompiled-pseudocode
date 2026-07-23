/*
 * XREFs of sub_140260144 @ 0x140260144
 * Callers:
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14025FE60 @ 0x14025FE60 (sub_14025FE60.c)
 *     sub_14025FF40 @ 0x14025FF40 (sub_14025FF40.c)
 *     sub_1402608AC @ 0x1402608AC (sub_1402608AC.c)
 *     sub_14026099C @ 0x14026099C (sub_14026099C.c)
 *     sub_1402609F4 @ 0x1402609F4 (sub_1402609F4.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402829A8 @ 0x1402829A8 (sub_1402829A8.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402A10EC @ 0x1402A10EC (sub_1402A10EC.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14032E910 @ 0x14032E910 (sub_14032E910.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EC158 @ 0x1406EC158 (sub_1406EC158.c)
 *     sub_1406EC288 @ 0x1406EC288 (sub_1406EC288.c)
 *     sub_1406EC338 @ 0x1406EC338 (sub_1406EC338.c)
 *     sub_1406EC47C @ 0x1406EC47C (sub_1406EC47C.c)
 *     sub_1407F71B0 @ 0x1407F71B0 (sub_1407F71B0.c)
 *     sub_14097FF04 @ 0x14097FF04 (sub_14097FF04.c)
 *     sub_1409D8CD4 @ 0x1409D8CD4 (sub_1409D8CD4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140260144(char *Process, int a2)
{
  char *v2; // rsi
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v6; // edi
  __int64 v7; // r15
  unsigned int v8; // r12d
  PVOID *v9; // r15
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  volatile LONG *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  PVOID v18; // rax
  PEPROCESS v19; // rsi
  struct _KTHREAD *v20; // r12
  ULONG_PTR v21; // r12
  _QWORD *v22; // rax
  unsigned __int64 v23; // rsi
  char *v24; // r13
  _QWORD *v25; // rax
  unsigned __int64 v26; // rcx
  struct _KTHREAD *v27; // r14
  unsigned int v28; // ecx
  char *v29; // rsi
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // r8d
  struct _KTHREAD *v33; // r12
  bool v34; // zf
  PEPROCESS v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // esi
  volatile LONG *v45; // r12
  unsigned __int64 v46; // r14
  __int64 v47; // rax
  ULONG_PTR v48; // r15
  struct _KTHREAD *v49; // r14
  __int64 v50; // r8
  char *v51; // rbx
  __int64 v52; // rdx
  unsigned int v53; // ecx
  int v54; // r8d
  struct _KTHREAD *v55; // rcx
  PVOID v56; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v60; // r9
  int v61; // eax
  PVOID *v62; // rdx
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  __int64 v65; // r9
  int v66; // eax
  unsigned int v67; // r14d
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  int v71; // eax
  int v72; // ecx
  __int64 v73; // rsi
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  __int64 v76; // r9
  int v77; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  char *v79; // [rsp+38h] [rbp-D0h]
  __int64 v80; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v81; // [rsp+48h] [rbp-C0h]
  __int64 v82; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v84; // [rsp+60h] [rbp-A8h]
  PEX_SPIN_LOCK SpinLock; // [rsp+68h] [rbp-A0h]
  struct _KTHREAD *v86; // [rsp+70h] [rbp-98h]
  PEPROCESS Processa; // [rsp+78h] [rbp-90h]
  _OWORD v88[10]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v89; // [rsp+128h] [rbp+20h]
  __int128 v90; // [rsp+138h] [rbp+30h]
  __int64 v91; // [rsp+148h] [rbp+40h]

  LODWORD(v82) = 0;
  v2 = Process + 1664;
  Processa = (PEPROCESS)Process;
  v81 = 0LL;
  v89 = 0LL;
  v91 = 0LL;
  v90 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v86 = CurrentThread;
  v79 = Process + 1664;
  P = 0LL;
  v6 = 0;
  memset(v88, 0, 0x98uLL);
  v7 = *(_QWORD *)(qword_140C51F48 + 8LL * *((unsigned __int16 *)v2 + 87));
  v80 = v7;
  LODWORD(v89) = a2 != 0;
  *((_QWORD *)&v88[1] + 1) = v7;
  if ( (unsigned int)sub_1402A10EC(Process) )
  {
    LODWORD(v88[2]) = -1;
    v6 = 2;
    LODWORD(v89) = v89 | 4;
  }
  sub_1406EC338((PEPROCESS)Process);
  v8 = sub_14025FE60(v7, (unsigned int *)&v82);
  if ( v8 == 16 )
  {
    v44 = -1073741497;
    goto LABEL_58;
  }
  v9 = (PVOID *)sub_1402828F0(64LL, 80LL, 1129540941LL);
  if ( !v9 )
  {
    v44 = -1073741670;
    goto LABEL_57;
  }
  v6 |= 1u;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(v80 + 1152, 0LL);
  SpinLock = (PEX_SPIN_LOCK)(v80 + 1160);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v80 + 1160));
  v11 = sub_1402829A8(v2);
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v44 = -1073740682;
    }
    else
    {
      v44 = -1073741791;
      if ( v11 == 2 )
        v44 = -1073741558;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v60 = *((_QWORD *)CurrentPrcb + 4375);
          v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v34 = (v61 & *(_DWORD *)(v60 + 20)) == 0;
          *(_DWORD *)(v60 + 20) &= v61;
          if ( v34 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    goto LABEL_103;
  }
  v13 = sub_140282AD0(v12);
  v14 = SpinLock;
  *(_QWORD *)(v13 + 24) = 1LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v14);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v63 = KeGetCurrentIrql();
      if ( v63 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v63 >= 2u )
      {
        v64 = KeGetCurrentPrcb();
        v65 = *((_QWORD *)v64 + 4375);
        v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v34 = (v66 & *(_DWORD *)(v65 + 20)) == 0;
        v15 = (unsigned int)v66 & *(_DWORD *)(v65 + 20);
        *(_DWORD *)(v65 + 20) = v15;
        if ( v34 )
          sub_140418E4C(v64);
      }
    }
  }
  __writecr8(v10);
  while ( 1 )
  {
    v16 = *((_QWORD *)v2 + 17);
    v81 = v16;
    if ( !v16 )
    {
      v44 = -1073741779;
      goto LABEL_131;
    }
    if ( LODWORD(v88[2]) == -1 )
      goto LABEL_10;
    v67 = v82;
    LODWORD(BugCheckParameter4) = v82;
    v44 = sub_1407F71B0(v80, (char *)&v88[2] + 8, v15, v8);
    if ( v44 >= 0 )
      break;
    if ( v67 >= 0x10 )
      goto LABEL_131;
    v8 = v67;
    v44 = sub_14097FF04(v80, v81, v67);
    if ( v44 < 0 )
      goto LABEL_131;
    v2 = v79;
  }
  v2 = v79;
  v16 = v81;
LABEL_10:
  v17 = sub_1402609F4(v16);
  *v9 = (PVOID)v17;
  if ( !v17 )
    goto LABEL_115;
  if ( LODWORD(v88[2]) != -1 )
    *(_DWORD *)(v17 + 32) |= 1u;
  v84 = 0LL;
  if ( a2 )
  {
    v68 = *((_QWORD *)v2 + 18) - *((_QWORD *)v2 + 19);
    v69 = *((_QWORD *)v2 + 18);
    v84 = v68;
    if ( v68 > v69 )
    {
      v68 = *((_QWORD *)v2 + 18);
      v84 = v68;
    }
    if ( v68 )
    {
      v70 = sub_1402609F4(v68);
      v9[1] = (PVOID)v70;
      if ( !v70 )
      {
LABEL_115:
        v44 = -1073741670;
LABEL_131:
        v24 = v79;
        goto LABEL_52;
      }
    }
  }
  *(_QWORD *)&v88[0] = *v9;
  v18 = v9[1];
  *(_QWORD *)&v88[1] = v2;
  v19 = Processa;
  *((_QWORD *)&v88[0] + 1) = v18;
  if ( *((_QWORD *)Processa + 286) )
  {
    v71 = sub_1409D8CD4(Processa);
    v72 = v88[9];
    if ( v71 )
      v72 = 1;
    LODWORD(v88[9]) = v72;
  }
  v20 = v86;
  --*((_WORD *)v86 + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)v19 + 1224, 0LL);
  *((_BYTE *)v20 + 1384) |= 2u;
  if ( (*((_DWORD *)v19 + 281) & 0x20) != 0 )
  {
    sub_14030EA00(v20, v19);
    v44 = -1073741558;
    goto LABEL_131;
  }
  --*((_WORD *)v20 + 243);
  v21 = (ULONG_PTR)v19 + 1232;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v19 + 1232, 0LL);
  v22 = (_QWORD *)*((_QWORD *)v19 + 251);
  if ( v22 )
  {
    do
    {
      v23 = (unsigned __int64)v22;
      v22 = (_QWORD *)*v22;
    }
    while ( v22 );
    v24 = v79;
    while ( v23 )
    {
      if ( !(unsigned int)sub_14030EC40(v23) && (unsigned int)sub_14032E910() )
        sub_1402608AC(
          (_DWORD)v79,
          v23,
          *(_DWORD *)(v23 + 24) << 12,
          (*(_DWORD *)(v23 + 28) << 12) | 0xFFF,
          (__int64)v88);
      v25 = *(_QWORD **)(v23 + 8);
      v26 = v23;
      if ( v25 )
      {
        do
        {
          v23 = (unsigned __int64)v25;
          v25 = (_QWORD *)*v25;
        }
        while ( v25 );
      }
      else
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v23 || *(_QWORD *)v23 == v26 )
            break;
          v26 = v23;
        }
      }
    }
  }
  else
  {
    v24 = v79;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v21);
  v27 = KeGetCurrentThread();
  if ( v21 - qword_140C50630 < 0x8000000000LL )
    v28 = sub_140287F30(*((_QWORD *)v27 + 23));
  else
    v28 = -1;
  _disable();
  v29 = (char *)v27 + 1696;
  v30 = v21 & 0x7FFFFFFFFFFFFFFCLL;
  v31 = 0LL;
  while ( (*(_QWORD *)v29 & 0x7FFFFFFFFFFFFFFCLL) != v30
       || !v29[18]
       || (*(_DWORD *)v29 & 1) != 0
       || *((_DWORD *)v29 + 2) != v28 )
  {
    v31 = (unsigned int)(v31 + 1);
    v29 += 96;
    if ( (unsigned int)v31 >= 6 )
      goto LABEL_82;
  }
  v29[18] = 0;
  if ( v29 )
  {
    if ( *(__int64 *)v29 < 0 )
    {
      *v29 |= 2u;
      _enable();
      sub_14034EE30(v29, v31, v30);
      _disable();
    }
    v32 = *((_DWORD *)v29 + 22);
    *((_DWORD *)v29 + 22) = 0;
    v29[17] = 0;
    *(_QWORD *)v29 = 0LL;
    *((_BYTE *)v27 + 792) |= 1 << v29[16];
    _enable();
    if ( v32 )
      sub_14022B568((ULONG_PTR)v27, v21, v32);
    goto LABEL_42;
  }
LABEL_82:
  if ( (*((_DWORD *)v27 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v27, v21, v28, 0LL);
  _enable();
LABEL_42:
  v33 = v86;
  v34 = (*((_WORD *)v86 + 243))++ == 0xFFFF;
  if ( v34 && *((struct _KTHREAD **)v33 + 19) != (struct _KTHREAD *)((char *)v33 + 152) )
    KiCheckForKernelApcDelivery();
  v35 = Processa;
  sub_14030EA00(v33, Processa);
  if ( *((_QWORD *)*v9 + 2) < v81 )
  {
    v39 = sub_14026099C(*v9, v36, v37, v38, BugCheckParameter4);
    if ( v39 )
    {
      ExFreePoolWithTag(*v9, 0);
      *v9 = (PVOID)v39;
    }
  }
  v40 = v9[1];
  if ( v40 )
  {
    if ( v40[2] < v84 )
    {
      v73 = sub_14026099C(v40, v36, v37, v38, BugCheckParameter4);
      if ( v73 )
      {
        ExFreePoolWithTag(v9[1], 0);
        v9[1] = (PVOID)v73;
      }
    }
  }
  v81 = *((_QWORD *)*v9 + 3);
  sub_14025FF40((__int64)v9, (__int64)v35);
  if ( v6 >= 2 )
    P = (PVOID)sub_14026099C(*v9, v41, v42, v43, BugCheckParameter4);
  v6 |= 4u;
  v44 = 0;
LABEL_52:
  v45 = SpinLock;
  v46 = ExAcquireSpinLockExclusive(SpinLock);
  if ( sub_1402829A8(v24) == 1 )
  {
    v47 = sub_140282AD0(v24);
    if ( v6 < 4 )
    {
      *(_QWORD *)(v47 + 24) = 0LL;
    }
    else
    {
      *(_QWORD *)(v47 + 24) = v9;
      v9 = 0LL;
      v44 = 0;
    }
  }
  else
  {
    v44 = -1073741558;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v45);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v74 = KeGetCurrentIrql();
      if ( v74 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v74 >= 2u )
      {
        v75 = KeGetCurrentPrcb();
        v76 = *((_QWORD *)v75 + 4375);
        v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
        v34 = (v77 & *(_DWORD *)(v76 + 20)) == 0;
        *(_DWORD *)(v76 + 20) &= v77;
        if ( v34 )
          sub_140418E4C(v75);
      }
    }
  }
  __writecr8(v46);
  sub_1406EC288(v80, (char *)&v88[2] + 8);
  if ( !v9 )
  {
LABEL_57:
    v7 = v80;
    goto LABEL_58;
  }
LABEL_103:
  v62 = v9;
  v7 = v80;
  sub_1406EC158(v80, v62);
LABEL_58:
  if ( (v6 & 1) != 0 )
  {
    v48 = v7 + 1152;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v48);
    v49 = KeGetCurrentThread();
    if ( v48 - qword_140C50630 < 0x8000000000LL )
      v50 = (unsigned int)sub_140287F30(*((_QWORD *)v49 + 23));
    else
      v50 = 0xFFFFFFFFLL;
    _disable();
    v51 = (char *)v49 + 1696;
    v52 = v48 & 0x7FFFFFFFFFFFFFFCLL;
    v53 = 0;
    while ( (*(_QWORD *)v51 & 0x7FFFFFFFFFFFFFFCLL) != v52
         || !v51[18]
         || (*(_DWORD *)v51 & 1) != 0
         || *((_DWORD *)v51 + 2) != (_DWORD)v50 )
    {
      ++v53;
      v51 += 96;
      if ( v53 >= 6 )
        goto LABEL_85;
    }
    v51[18] = 0;
    if ( v51 )
    {
      if ( *(__int64 *)v51 < 0 )
      {
        *v51 |= 2u;
        _enable();
        sub_14034EE30(v51, v52, v50);
        _disable();
      }
      v54 = *((_DWORD *)v51 + 22);
      *((_DWORD *)v51 + 22) = 0;
      v51[17] = 0;
      *(_QWORD *)v51 = 0LL;
      *((_BYTE *)v49 + 792) |= 1 << v51[16];
      _enable();
      if ( v54 )
        sub_14022B568((ULONG_PTR)v49, v48, v54);
      goto LABEL_73;
    }
LABEL_85:
    if ( (*((_DWORD *)v49 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v49, v48, (unsigned int)v50, 0LL);
    _enable();
LABEL_73:
    v55 = v86;
    v34 = (*((_WORD *)v86 + 243))++ == 0xFFFF;
    if ( v34 && *((struct _KTHREAD **)v55 + 19) != (struct _KTHREAD *)((char *)v55 + 152) )
      KiCheckForKernelApcDelivery();
  }
  v56 = P;
  if ( P )
  {
    if ( v6 >= 4 )
      sub_1406EC47C(*(void **)P);
    ExFreePoolWithTag(v56, 0);
  }
  *((_QWORD *)&v89 + 1) = *((_QWORD *)&v88[7] + 1);
  v90 = v88[8];
  LODWORD(v91) = v44;
  *(_QWORD *)&v89 = v81;
  sub_1406EC338(Processa);
  return (unsigned int)v44;
}
