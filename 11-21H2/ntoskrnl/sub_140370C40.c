/*
 * XREFs of sub_140370C40 @ 0x140370C40
 * Callers:
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_1403714E0 @ 0x1403714E0 (sub_1403714E0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_140351E90 @ 0x140351E90 (sub_140351E90.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140362864 @ 0x140362864 (sub_140362864.c)
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 *     sub_140370C00 @ 0x140370C00 (sub_140370C00.c)
 *     sub_140371218 @ 0x140371218 (sub_140371218.c)
 *     sub_140371248 @ 0x140371248 (sub_140371248.c)
 *     sub_140371274 @ 0x140371274 (sub_140371274.c)
 *     sub_1403E0320 @ 0x1403E0320 (sub_1403E0320.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall sub_140370C40(__int64 a1, __int16 a2, unsigned __int64 a3, unsigned int a4)
{
  __int128 v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v8; // r15
  char v9; // bl
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  int v12; // ecx
  unsigned __int64 v13; // r14
  int v14; // r9d
  unsigned int v15; // r14d
  int v16; // ecx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // al
  _RTL_RB_TREE *v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 Root; // rdx
  BOOLEAN v24; // r8
  unsigned __int64 v25; // rax
  volatile signed __int64 *v26; // rsi
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v29; // ecx
  __int64 v30; // rbx
  unsigned int v31; // edx
  struct _KTHREAD *v32; // rcx
  bool v33; // zf
  int v34; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v37; // r9
  int v38; // edx
  unsigned __int64 v39; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v42; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-90h]
  __int128 v46; // [rsp+88h] [rbp-80h] BYREF
  __int128 v47; // [rsp+98h] [rbp-70h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v50; // [rsp+C8h] [rbp-40h]
  __int128 v51; // [rsp+D8h] [rbp-30h]
  __int128 v52; // [rsp+E8h] [rbp-20h]
  __int128 v53; // [rsp+F8h] [rbp-10h]
  __int128 v54; // [rsp+108h] [rbp+0h]
  __int128 v55; // [rsp+118h] [rbp+10h]
  unsigned int v56; // [rsp+168h] [rbp+60h]

  v4 = *(_OWORD *)a1;
  v40 = 0LL;
  v5 = 0LL;
  v42 = 0LL;
  LODWORD(v41) = 0;
  v39 = 0LL;
  v46 = v4;
  v8 = sub_140371274(40LL, 40LL, 0LL, &v46);
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    v9 = 0;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
      v9 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    if ( BYTE1(*(_QWORD *)a1) == 3 )
      v9 = 3;
    if ( BYTE1(*(_QWORD *)a1) == 2 )
      v9 = 7;
    while ( 1 )
    {
      v56 = 0;
      if ( (v9 & 1) != 0 )
      {
        v10 = 0x200000LL;
        v11 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v10 = 0LL;
        v56 = BYTE1(*(_QWORD *)a1) < 2u;
        v11 = a3 + (v56 << 12);
      }
      v40 = v11;
      if ( v11 < a3 )
        goto LABEL_82;
      v12 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v47 = *(_OWORD *)a1;
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      if ( v12 )
      {
        *(_QWORD *)&v50 = a1;
        DWORD2(v50) = 64;
      }
      if ( (int)sub_140351E90((__int64 *)&v39, &v40, v10, 0x2000, v12 != 0 ? 64 : 4, &v47) < 0 )
      {
        v39 = 0LL;
LABEL_82:
        v44 = *(_OWORD *)a1;
        sub_140370C00(v8, &v44);
        goto LABEL_41;
      }
      v48 = *(_OWORD *)a1;
      sub_140362864(v39, &v48, &v42, &v41);
      *v42 = a1;
      v45 = (a3 + 4095) >> 12;
      v13 = v45 << 12;
      v43 = v45 << 12;
      if ( !(unsigned int)sub_140371218(v45 << 12, a1) )
        goto LABEL_82;
      if ( (v9 & 1) != 0 )
      {
        v43 = v13 - ((v13 - 1) & 0x1FFFFF) + 0x1FFFFF;
        v14 = ((v9 & 4) << 20) | 0x20001000;
        v15 = a4;
      }
      else
      {
        v15 = a4;
        v14 = 4096;
        if ( (a4 & 2) != 0 )
          v14 = 1073745920;
      }
      v16 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v49 = *(_OWORD *)a1;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( v16 )
      {
        *(_QWORD *)&v53 = a1;
        DWORD2(v53) = 64;
      }
      if ( (int)sub_140351E90((__int64 *)&v39, (__int64 *)&v43, 0LL, v14, v16 != 0 ? 64 : 4, &v49) >= 0 )
        break;
      if ( (v9 & 3) != 1 )
        goto LABEL_82;
      v9 &= ~1u;
      v44 = *(_OWORD *)a1;
      sub_140363E50(&v39, (unsigned __int64 *)&v40, 0x8000LL, &v44);
      v39 = 0LL;
    }
    if ( (v9 & 1) != 0 && (v15 & 2) != 0 )
      sub_1403E0320(v39, (a3 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v17 = v45;
    *(_QWORD *)(v8 + 24) = v39;
    v18 = *(_DWORD *)(v8 + 32) & 0xFFD | (2 * (v56 | (v17 << 11)));
    *(_QWORD *)(v8 + 32) = v18;
    _BitScanForward64(&v19, v40);
    *(_QWORD *)(v8 + 32) = v18 ^ (unsigned __int8)(v18 ^ (4 * v19)) & 0xFC;
    *(_WORD *)(v8 + 24) = ((_WORD)v17 << 12) - a2;
    v20 = sub_140371248(a1, v15);
    v21 = (_RTL_RB_TREE *)(a1 + 72);
    v22 = v20;
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    {
      if ( v21->Root )
        Root = (unsigned __int64)v21->Root ^ (unsigned __int64)v21;
      else
        Root = 0LL;
    }
    else
    {
      Root = (unsigned __int64)v21->Root;
    }
    v24 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        if ( v39 >= (*(_QWORD *)(Root + 24) & 0xFFFFFFFFFFFF0000uLL) )
        {
          v25 = *(_QWORD *)(Root + 8);
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_35;
            v25 ^= Root;
          }
          if ( !v25 )
          {
LABEL_35:
            v24 = 1;
            break;
          }
        }
        else
        {
          v25 = *(_QWORD *)Root;
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
          {
            if ( !v25 )
              break;
            v25 ^= Root;
          }
          if ( !v25 )
            break;
        }
        Root = v25;
      }
    }
    RtlRbInsertNodeEx(v21, (PRTL_BALANCED_NODE)Root, v24, (PRTL_BALANCED_NODE)v8);
    if ( (v15 & 1) == 0 )
    {
      v26 = (volatile signed __int64 *)(a1 + 64);
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v37 = *((_QWORD *)CurrentPrcb + 4375);
              v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v33 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
              *(_DWORD *)(v37 + 20) &= v38;
              if ( v33 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v22);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned __int64)v26 - qword_140C50630 >= 0x8000000000LL )
          v29 = -1;
        else
          v29 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
        _disable();
        v30 = (__int64)CurrentThread + 1696;
        v31 = 0;
        while ( (*(_QWORD *)v30 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v26 & 0x7FFFFFFFFFFFFFFCLL)
             || !*(_BYTE *)(v30 + 18)
             || (*(_DWORD *)v30 & 1) != 0
             || *(_DWORD *)(v30 + 8) != v29 )
        {
          ++v31;
          v30 += 96LL;
          if ( v31 >= 6 )
            goto LABEL_61;
        }
        *(_BYTE *)(v30 + 18) = 0;
        if ( !v30 )
        {
LABEL_61:
          if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, v29, 0LL);
          _enable();
          goto LABEL_63;
        }
        if ( *(__int64 *)v30 < 0 )
        {
          *(_BYTE *)v30 |= 2u;
          _enable();
          sub_14034EE30(v30);
          _disable();
        }
        v34 = *(_DWORD *)(v30 + 88);
        *(_DWORD *)(v30 + 88) = 0;
        *(_BYTE *)(v30 + 17) = 0;
        *(_QWORD *)v30 = 0LL;
        *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v30 + 16);
        _enable();
        if ( v34 )
          sub_14022B568((ULONG_PTR)CurrentThread, a1 + 64, v34);
LABEL_63:
        v32 = KeGetCurrentThread();
        v33 = (*((_WORD *)v32 + 243))++ == 0xFFFF;
        if ( v33 && *((struct _KTHREAD **)v32 + 19) != (struct _KTHREAD *)((char *)v32 + 152) )
          KiCheckForKernelApcDelivery();
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v40 / 4096);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v17);
    v5 = v39;
    v39 = 0LL;
  }
LABEL_41:
  if ( v39 )
  {
    v44 = *(_OWORD *)a1;
    sub_140363E50(&v39, (unsigned __int64 *)&v40, 0x8000LL, &v44);
  }
  return v5;
}
