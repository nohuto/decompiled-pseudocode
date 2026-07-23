/*
 * XREFs of sub_14058C330 @ 0x14058C330
 * Callers:
 *     sub_14079D6B0 @ 0x14079D6B0 (sub_14079D6B0.c)
 *     sub_14097ECFC @ 0x14097ECFC (sub_14097ECFC.c)
 *     sub_140980DD8 @ 0x140980DD8 (sub_140980DD8.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140286920 @ 0x140286920 (sub_140286920.c)
 *     sub_1402869C0 @ 0x1402869C0 (sub_1402869C0.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_140287380 @ 0x140287380 (sub_140287380.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_14097EE0C @ 0x14097EE0C (sub_14097EE0C.c)
 *     sub_14097EE28 @ 0x14097EE28 (sub_14097EE28.c)
 */

__int64 __fastcall sub_14058C330(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 v7; // rdx
  int v8; // ecx
  bool v9; // zf
  __int64 v10; // rbp
  __int64 *v11; // rdi
  unsigned __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v14; // rax
  KIRQL v15; // al
  unsigned __int64 v16; // r12
  int v17; // ecx
  __int64 v18; // r14
  __int64 *v19; // rsi
  int v20; // eax
  int v21; // r14d
  __int64 v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  ULONG_PTR v27; // rbp
  struct _KTHREAD *v28; // rsi
  unsigned int v29; // ecx
  __int64 v30; // rdi
  unsigned int v31; // edx
  int v32; // r8d
  BOOL v33; // [rsp+30h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v35; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+48h] [rbp-50h]
  int v37; // [rsp+A0h] [rbp+8h]
  int v39; // [rsp+B0h] [rbp+18h]
  int v40; // [rsp+B8h] [rbp+20h]

  v40 = 0;
  v4 = **(_QWORD **)(a1 + 72);
  v5 = sub_140287380(v4);
  if ( !v5 )
    return 3221227019LL;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_DWORD *)(a1 + 48);
  v33 = v7 != 0;
  if ( ((v8 & 0xF80) == 0x200 || (v8 & 0xF80) == 0x300) && v7 && (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    if ( a2 )
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 1u);
    else
      _InterlockedAdd((volatile signed __int32 *)(v4 + 92), 0xFFFFFFFF);
    v40 = 1;
  }
  v9 = (*(_DWORD *)(v4 + 56) & 0x400) == 0;
  v10 = 0LL;
  v37 = 0;
  v11 = 0LL;
  v39 = 0;
  BugCheckParameter2 = 0LL;
  v35 = 0LL;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    sub_14097EE0C(a1);
    if ( !*(_QWORD *)(v4 + 64) || (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
    {
      v11 = (__int64 *)(v4 + 128);
      BugCheckParameter2 = v4 + 128;
    }
    else
    {
      sub_140319600(a1, v12, 0, (__int64 *)&BugCheckParameter2);
      v11 = (__int64 *)BugCheckParameter2;
    }
    if ( v11 )
      v39 = 1;
    else
      sub_14097EE28(a1);
  }
  if ( *(_QWORD *)(v4 + 64) )
  {
    CurrentThread = 0LL;
    v36 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v36 = *(_QWORD *)v4;
    v14 = v36;
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(v14 + 40, 0LL);
    v11 = (__int64 *)BugCheckParameter2;
  }
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  v16 = v15;
  ++*(_QWORD *)(v4 + 40);
  ++*(_QWORD *)(v4 + 48);
  if ( !v11 )
    goto LABEL_43;
  v17 = *(_DWORD *)(v4 + 56);
  if ( (v17 & 0x20) != 0 || !*(_QWORD *)(v4 + 64) )
  {
    if ( a2 )
    {
      v20 = sub_140286DE0(v11, 8, v15);
      goto LABEL_36;
    }
    if ( (v17 & 0x20) == 0 )
    {
      v22 = sub_140286920((ULONG_PTR)v11, (__int64)v11, 8);
LABEL_40:
      v10 = v22;
LABEL_41:
      v21 = v37;
      goto LABEL_44;
    }
    if ( v5 == 2 )
    {
      v22 = sub_1402869C0(v11, 24);
      goto LABEL_40;
    }
LABEL_43:
    v21 = 0;
    goto LABEL_44;
  }
  sub_140319600(
    a1,
    *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
    1,
    (__int64 *)&v35);
  v18 = 0LL;
  v19 = v11;
  while ( !a2 )
  {
    v10 += sub_140286920((ULONG_PTR)v19, (__int64)v19, 8);
LABEL_31:
    v18 = (__int64)v19;
    if ( v19 != v35 )
    {
      v19 = (__int64 *)v19[2];
      if ( v19 )
        continue;
    }
    goto LABEL_41;
  }
  v20 = sub_140286DE0(v19, 8, v16);
  v37 = v20;
  if ( v20 >= 0 )
    goto LABEL_31;
  if ( v18 )
  {
    v10 += sub_140286920((ULONG_PTR)v11, v18, 8);
    goto LABEL_41;
  }
LABEL_36:
  v21 = v20;
LABEL_44:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v16 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v25 = *((_QWORD *)CurrentPrcb + 4375);
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v9 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v16);
  if ( v10 )
    sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v33, v10);
  if ( !*(_QWORD *)(v4 + 64) )
  {
    v27 = v36 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v27);
    v28 = KeGetCurrentThread();
    if ( v27 - qword_140C50630 >= 0x8000000000LL )
      v29 = -1;
    else
      v29 = sub_140287F30(*((_QWORD *)v28 + 23));
    _disable();
    v30 = (__int64)v28 + 1696;
    v31 = 0;
    while ( (*(_QWORD *)v30 & 0x7FFFFFFFFFFFFFFCLL) != (v27 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v30 + 18)
         || (*(_DWORD *)v30 & 1) != 0
         || *(_DWORD *)(v30 + 8) != v29 )
    {
      ++v31;
      v30 += 96LL;
      if ( v31 >= 6 )
        goto LABEL_65;
    }
    *(_BYTE *)(v30 + 18) = 0;
    if ( !v30 )
    {
LABEL_65:
      if ( (*((_DWORD *)v28 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, v27, v29, 0LL);
      _enable();
      goto LABEL_73;
    }
    if ( *(__int64 *)v30 < 0 )
    {
      *(_BYTE *)v30 |= 2u;
      _enable();
      sub_14034EE30(v30);
      _disable();
    }
    v32 = *(_DWORD *)(v30 + 88);
    *(_DWORD *)(v30 + 88) = 0;
    *(_BYTE *)(v30 + 17) = 0;
    *(_QWORD *)v30 = 0LL;
    *((_BYTE *)v28 + 792) |= 1 << *(_BYTE *)(v30 + 16);
    _enable();
    if ( v32 )
      sub_14022B568((ULONG_PTR)v28, v27, v32);
LABEL_73:
    v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  if ( v39 )
    sub_14097EE28(a1);
  if ( v21 < 0 )
  {
    if ( v40 )
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  }
  return (unsigned int)v21;
}
