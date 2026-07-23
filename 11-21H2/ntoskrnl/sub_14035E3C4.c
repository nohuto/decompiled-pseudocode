/*
 * XREFs of sub_14035E3C4 @ 0x14035E3C4
 * Callers:
 *     sub_14035D970 @ 0x14035D970 (sub_14035D970.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     sub_14027C6DC @ 0x14027C6DC (sub_14027C6DC.c)
 *     sub_140282AF4 @ 0x140282AF4 (sub_140282AF4.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_14028F63C @ 0x14028F63C (sub_14028F63C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406FA590 @ 0x1406FA590 (sub_1406FA590.c)
 *     sub_1407BDF60 @ 0x1407BDF60 (sub_1407BDF60.c)
 */

__int64 __fastcall sub_14035E3C4(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rdx
  unsigned __int8 v4; // al
  __int64 v5; // rdx
  signed __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rdi
  BOOL v9; // eax
  KIRQL OldIrql; // r13
  signed __int64 v11; // rcx
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rbx
  int v16; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // r14
  __int64 v23; // rbx
  unsigned int v24; // edx
  KIRQL v25; // bl
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  KIRQL v30; // bl
  __int64 result; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  __int64 v34; // r9
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  __int64 v38; // r8
  int v39; // eax
  unsigned int v40; // [rsp+50h] [rbp-188h]
  int v41; // [rsp+54h] [rbp-184h]
  int v42; // [rsp+58h] [rbp-180h]
  int v43; // [rsp+60h] [rbp-178h]
  int v44; // [rsp+64h] [rbp-174h]
  int v45; // [rsp+68h] [rbp-170h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-160h] BYREF
  BOOL v48; // [rsp+90h] [rbp-148h]
  int v49; // [rsp+94h] [rbp-144h]
  unsigned int v50; // [rsp+98h] [rbp-140h]
  unsigned int v51; // [rsp+9Ch] [rbp-13Ch]
  unsigned int v52; // [rsp+A0h] [rbp-138h]
  signed __int64 v53; // [rsp+A8h] [rbp-130h]
  PVOID P; // [rsp+B0h] [rbp-128h]
  __int64 v55; // [rsp+B8h] [rbp-120h]
  __int64 v56; // [rsp+C0h] [rbp-118h]
  _QWORD *v57; // [rsp+C8h] [rbp-110h]
  unsigned int v58; // [rsp+D0h] [rbp-108h]
  __int64 v59; // [rsp+D4h] [rbp-104h] BYREF
  int v60; // [rsp+E4h] [rbp-F4h]
  __int64 v61; // [rsp+E8h] [rbp-F0h]
  __int64 v62; // [rsp+F0h] [rbp-E8h]
  __int64 v63; // [rsp+F8h] [rbp-E0h]
  signed __int64 v64; // [rsp+100h] [rbp-D8h]
  __int64 v65; // [rsp+108h] [rbp-D0h]
  __int64 v66; // [rsp+110h] [rbp-C8h]
  struct _KTHREAD *v67; // [rsp+118h] [rbp-C0h]
  struct _KTHREAD *CurrentThread; // [rsp+128h] [rbp-B0h]
  _QWORD v69[2]; // [rsp+140h] [rbp-98h] BYREF
  _QWORD v70[2]; // [rsp+150h] [rbp-88h] BYREF
  _QWORD v71[2]; // [rsp+160h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+170h] [rbp-68h]
  int v73; // [rsp+174h] [rbp-64h]
  __int64 v74; // [rsp+178h] [rbp-60h]
  _QWORD v75[2]; // [rsp+180h] [rbp-58h] BYREF
  unsigned int v76; // [rsp+190h] [rbp-48h]
  int v77; // [rsp+194h] [rbp-44h]
  __int64 v78; // [rsp+198h] [rbp-40h]

  v2 = a2;
  v61 = a2;
  v66 = a1;
  v65 = a2;
  v57 = 0LL;
  v53 = 0LL;
  v64 = 0LL;
  v52 = 0;
  v40 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v48 = 0;
  v41 = 0;
  v44 = 0;
  v45 = 0;
  v42 = 0;
  P = 0LL;
  v49 = 0;
  v50 = 0;
  v55 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)CurrentThread + 359) = 0;
  v57 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v62 = v57[26];
  v3 = v62;
  v63 = v57[27];
  v55 = v57[66];
  LOBYTE(v3) = 1;
  v4 = sub_14042A5E0(v63, v3);
  v43 = v4;
  if ( v4 )
  {
    while ( 1 )
    {
      P = 0LL;
      v6 = v53;
      v7 = v40;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v55 + 704), &LockHandle);
        v8 = *(_QWORD *)(v2 + 48);
        v56 = v8;
        if ( v8 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 80));
          v7 = *(_DWORD *)(v8 + 52);
          v9 = v7 == 0;
          v48 = v9;
          v6 = *(_QWORD *)(v8 + 56);
          v53 = v6;
          if ( v7 > 0x800000 )
            v7 = 0x800000;
          v40 = v7;
          *(_DWORD *)(v8 + 52) = 0;
          if ( !v9 )
            *(_QWORD *)(v8 + 64) = v6 + v7;
          if ( (*(_DWORD *)v8 & 0x200000) != 0 )
          {
            v49 = 1;
            v50 = *(_DWORD *)(v8 + 88);
          }
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 80));
          v41 = (*(_DWORD *)v8 >> 18) & 7;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v19 = *((_QWORD *)CurrentPrcb + 4375);
              v5 = -1LL << (LockHandle.OldIrql + 1);
              v20 = ~(unsigned __int16)v5;
              v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
              *(_DWORD *)(v19 + 20) &= v20;
              if ( v21 )
                sub_140418E4C(CurrentPrcb);
              v7 = v40;
              v6 = v53;
              v8 = v56;
            }
          }
        }
        __writecr8(OldIrql);
        if ( !v8 || v48 )
          break;
        v11 = v57[1];
        if ( v6 < v11 )
        {
          v45 = 1;
          if ( v6 + v7 >= v11 )
          {
            v7 = v11 - v6;
            v44 = 1;
          }
          v7 = (v7 + 4095) & 0xFFFFF000;
          v40 = v7;
          v12 = v7;
          v58 = v7;
          v64 = v6;
          v52 = v7;
          if ( v49 )
          {
            if ( !v50 )
              KeBugCheckEx(0x34u, 0xAB7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v13 = v7;
            if ( v7 > v50 )
              v13 = v50;
            v51 = v13;
          }
          else
          {
            v13 = v7;
            v51 = v7;
          }
          v14 = a1;
          if ( (xmmword_140D06910 & 0x20000) != 0 )
          {
            v71[1] = v6;
            v72 = v7;
            v71[0] = a1;
            v73 = v41;
            v74 = 0LL;
            v69[0] = v71;
            v69[1] = 32LL;
            sub_14035EDE4((unsigned int)v69, 1, -2147352576, 5635, 4200706);
          }
          while ( v12 )
          {
            if ( v13 > v12 )
              v13 = v12;
            v51 = v13;
            if ( (xmmword_140D06910 & 0x20000) != 0 )
            {
              v78 = 0LL;
              v75[1] = v6;
              v76 = v13;
              v75[0] = v14;
              v77 = v41;
              v70[0] = v75;
              v70[1] = 32LL;
              sub_14035EDE4((unsigned int)v70, 1, -2147352576, 5643, 4200706);
            }
            v42 |= sub_1406FA590(v61, v6, 0, v13, v41);
            v12 -= v13;
            v58 = v12;
            v6 += v13;
            v53 = v6;
            v14 = a1;
          }
          v2 = v61;
        }
      }
      if ( !P )
        break;
      v15 = KeGetCurrentThread();
      v67 = v15;
      v16 = sub_14033D720((__int64)v15);
      v60 = v16;
      LODWORD(v59) = 0;
      sub_14027C6DC(P);
      sub_14028F63C((__int64)v15, v41);
      sub_1407BDF60(v2, 0LL, (__int64)&v59, v41, *(_QWORD *)(a1 + 24), 0LL);
      sub_14028F63C((__int64)v15, v16);
    }
  }
  __addgsdword(0x84A4u, *((_DWORD *)KeGetCurrentThread() + 359));
  if ( v43 )
    sub_14042A5E0(v63, v5);
  v22 = v55;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v55 + 704), &LockHandle);
  v23 = *(_QWORD *)(v2 + 48);
  v56 = v23;
  if ( v23 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v23 + 80));
    v24 = *(_DWORD *)v23 & 0xFFFEFFFF;
    *(_DWORD *)v23 = v24;
    if ( v44 && (*(_DWORD *)(v2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v23 + 64) = 0LL;
    if ( !v42 && v45 )
      *(_DWORD *)v23 = v24 & 0xFFFDFFFF;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v23 + 80));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v25 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = *((_QWORD *)v33 + 4375);
        v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
        *(_DWORD *)(v34 + 20) &= v35;
        if ( v21 )
          sub_140418E4C(v33);
      }
    }
  }
  __writecr8(v25);
  ObfDereferenceObjectWithTag((PVOID)v2, 0x746C6644u);
  v26 = *(_QWORD *)(a1 + 24);
  if ( v26 )
    sub_140366814(v26);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v22 + 704), &LockHandle);
  v27 = v57;
  sub_140282AF4((__int64)v57, v28, v29);
  *((_DWORD *)v27 + 38) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v30 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && LockHandle.OldIrql <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = *((_QWORD *)v37 + 4375);
        v39 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v39 & *(_DWORD *)(v38 + 20)) == 0;
        *(_DWORD *)(v38 + 20) &= v39;
        if ( v21 )
          sub_140418E4C(v37);
      }
    }
  }
  result = v30;
  __writecr8(v30);
  return result;
}
