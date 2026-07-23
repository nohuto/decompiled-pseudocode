/*
 * XREFs of sub_14023D6AC @ 0x14023D6AC
 * Callers:
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14023D9B0 @ 0x14023D9B0 (sub_14023D9B0.c)
 *     sub_14023DADC @ 0x14023DADC (sub_14023DADC.c)
 *     sub_14023DC8C @ 0x14023DC8C (sub_14023DC8C.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140362978 @ 0x140362978 (sub_140362978.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140366D64 @ 0x140366D64 (sub_140366D64.c)
 *     sub_140366DA8 @ 0x140366DA8 (sub_140366DA8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405F34F0 @ 0x1405F34F0 (sub_1405F34F0.c)
 */

__int64 __fastcall sub_14023D6AC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  unsigned __int8 v9; // cl
  ULONG_PTR v10; // rbx
  _BYTE *v11; // rdx
  __int64 result; // rax
  unsigned __int8 v13; // r8
  _BYTE *v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _BYTE *v17; // rsi
  unsigned __int64 v18; // rbp
  __int64 v19; // r14
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v21; // ecx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  bool v24; // zf
  char *v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // r8d
  struct _KTHREAD *v29; // rcx
  __int64 v30; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)sub_140362978(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( !v7 )
  {
    v30 = sub_1405F34F0(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL, ~((*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL));
    result = sub_140366D64(a2, a3, 0x8000LL);
    *(_QWORD *)(v30 + 24) -= *a3 >> 20;
    return result;
  }
  v9 = *v7;
  v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    v11 = v7;
    *v7 = v9 & 0xFE;
    return sub_14023D9B0(v10, v11);
  }
  v13 = *(_BYTE *)(v10 + 46);
  if ( (v13 & 0xEu) < 4 )
  {
    sub_140366DA8(a2, a3, 0x4000LL);
    v9 = *v8;
    v13 = *(_BYTE *)(v10 + 46);
  }
  v14 = v8;
  if ( (v9 & 2) != 0 )
  {
    v17 = v8;
    do
      v8 -= 32;
    while ( (*v8 & 2) != 0 );
    v13 = *(_BYTE *)(v10 + 46);
  }
  else
  {
    if ( ((v13 >> 5) & (unsigned __int8)~(v9 >> 2) & 1) == 0 )
    {
      v15 = (v9 & 4) != 0 ? *((_QWORD *)v8 + 3) : *((unsigned __int16 *)v8 + 12);
      if ( v6 != v15 )
        __int2c();
    }
    if ( (v9 & 4) != 0 )
      v16 = *((_QWORD *)v8 + 3);
    else
      v16 = *((unsigned __int16 *)v8 + 12);
    if ( v6 < v16 )
      v17 = &v8[32 * v6];
    else
      v17 = 0LL;
  }
  v18 = (unsigned __int8)sub_140365AF4(v10, v13 & 1);
  if ( v17 )
    sub_14023DC8C(v10, v8, (v17 - v8) >> 5);
  v19 = sub_14023DADC(v10, v14);
  if ( (*(_BYTE *)(v10 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v10);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v24 = ((unsigned int)result & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= result;
          if ( v24 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    CurrentThread = KeGetCurrentThread();
    if ( v10 - qword_140C50630 < 0x8000000000LL )
      v21 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v21 = -1;
    _disable();
    v25 = (char *)CurrentThread + 1696;
    v26 = v10 & 0x7FFFFFFFFFFFFFFCLL;
    v27 = 0LL;
    while ( (*(_QWORD *)v25 & 0x7FFFFFFFFFFFFFFCLL) != v26
         || !v25[18]
         || (*(_DWORD *)v25 & 1) != 0
         || *((_DWORD *)v25 + 2) != v21 )
    {
      v27 = (unsigned int)(v27 + 1);
      v25 += 96;
      if ( (unsigned int)v27 >= 6 )
        goto LABEL_44;
    }
    v25[18] = 0;
    if ( !v25 )
    {
LABEL_44:
      result = *((unsigned int *)CurrentThread + 30);
      if ( (result & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v10, v21, 0LL);
      _enable();
      goto LABEL_50;
    }
    if ( *(__int64 *)v25 < 0 )
    {
      *v25 |= 2u;
      _enable();
      sub_14034EE30(v25, v27, v26);
      _disable();
    }
    v28 = *((_DWORD *)v25 + 22);
    *((_DWORD *)v25 + 22) = 0;
    v25[17] = 0;
    *(_QWORD *)v25 = 0LL;
    result = (unsigned __int8)v25[16];
    *((_BYTE *)CurrentThread + 792) |= 1 << result;
    _enable();
    if ( v28 )
      result = sub_14022B568((ULONG_PTR)CurrentThread, v10, v28);
LABEL_50:
    v29 = KeGetCurrentThread();
    v24 = (*((_WORD *)v29 + 243))++ == 0xFFFF;
    if ( v24 )
    {
      result = (__int64)v29 + 152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery();
    }
  }
  if ( v19 )
  {
    v11 = (_BYTE *)v19;
    return sub_14023D9B0(v10, v11);
  }
  return result;
}
