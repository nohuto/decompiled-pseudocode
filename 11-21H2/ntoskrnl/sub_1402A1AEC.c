/*
 * XREFs of sub_1402A1AEC @ 0x1402A1AEC
 * Callers:
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_14053E958 @ 0x14053E958 (sub_14053E958.c)
 * Callees:
 *     sub_1402419DC @ 0x1402419DC (sub_1402419DC.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402A1E18 @ 0x1402A1E18 (sub_1402A1E18.c)
 *     sub_1402A1F74 @ 0x1402A1F74 (sub_1402A1F74.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_1403A72E4 @ 0x1403A72E4 (sub_1403A72E4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402A1AEC(__int64 a1, __int128 *a2, unsigned __int8 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rsi
  unsigned int v8; // ebp
  int v9; // r15d
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // si
  volatile signed __int64 *i; // rdi
  volatile signed __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int8 v20; // r9
  signed __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // r10d
  volatile signed __int64 *v24; // r8
  unsigned int v26; // eax
  unsigned int v27; // eax
  signed __int64 v28; // rax
  volatile signed __int64 v29; // rtt
  volatile LONG *v30; // rcx
  unsigned __int8 v31; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v33; // r9
  int v34; // eax
  bool v35; // zf
  __int64 v36; // [rsp+48h] [rbp-60h] BYREF
  __int64 v37; // [rsp+50h] [rbp-58h]
  __int64 CurrentIrql; // [rsp+58h] [rbp-50h]
  __int128 *v39; // [rsp+B8h] [rbp+10h]

  v39 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  LOBYTE(a2) = a3;
  v36 = 0LL;
  LOBYTE(a1) = a5;
  v37 = v5;
  v8 = 0;
  v9 = sub_1402A1E18(a1, a2, a4);
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( (KeGetPcr()[36].Unused0[2] & 0x10001) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v11 = (volatile signed __int64 *)(v5 + 272);
      _disable();
      v12 = *((unsigned __int8 *)CurrentThread + 792);
      if ( *((_BYTE *)CurrentThread + 792) || (v12 = sub_14029F6A8(v5 + 272, (__int64)CurrentThread)) != 0 )
      {
        _BitScanForward((unsigned int *)&v13, v12);
        *((_BYTE *)CurrentThread + 792) = v12 & ~(1 << v13);
        _enable();
        v7 = (__int64)CurrentThread + 96 * v13 + 1696;
        if ( (unsigned __int64)v11 - qword_140C50630 < 0x8000000000LL )
          v14 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
        else
          v14 = -1;
        *(_DWORD *)(v7 + 8) = v14;
        *(_QWORD *)v7 = (unsigned __int64)v11 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
        sub_14029F350((signed __int64 *)(v5 + 272), 0, v7, v5 + 272);
      if ( v7 )
        *(_BYTE *)(v7 + 18) = 1;
      v15 = 0;
      v8 = 0;
      goto LABEL_12;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v15 = 1;
LABEL_12:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v19 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v17 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_23;
      }
      if ( !v36 )
      {
        v26 = sub_1402419DC(*(_BYTE *)(v5 + 373), v39, a3, a4, a5, v9, &v36);
        v8 = v26;
        if ( !v36 )
        {
          if ( v26 == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_23;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v36, 0LL) )
      {
        v36 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          sub_1403A72E4(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v27 = *(_DWORD *)(v5 + 256);
        if ( *(_DWORD *)(v5 + 304) < v27 )
          *(_DWORD *)(v5 + 304) = v27;
        goto LABEL_23;
      }
    }
    v17 = *i;
    v18 = *(unsigned int *)(v17 + 40);
    if ( v9 == (_DWORD)v18 )
    {
      LOBYTE(v18) = a3;
      v19 = sub_1402A1F74(v18, a4, v17);
    }
    else
    {
      v19 = v9 - v18;
    }
    if ( !v19 )
      break;
  }
  if ( v17 )
  {
    v20 = 2;
    if ( a5 )
    {
      do
      {
        v21 = **(_QWORD **)(a4 + 16LL * v20);
        v22 = *(_QWORD *)(v17 + 16);
        v23 = *(unsigned __int8 *)(v22 + 16LL * v20 + 13);
        v24 = *(volatile signed __int64 **)(v22 + 16LL * v20);
        if ( v23 == 113 )
        {
          _InterlockedExchangeAdd64(v24, v21);
        }
        else if ( (unsigned int)(v23 - 114) <= 1 )
        {
          do
          {
            v28 = *v24;
            if ( v23 == 114 )
            {
              if ( v21 >= v28 )
                break;
            }
            else if ( v21 <= v28 )
            {
              break;
            }
            v29 = *v24;
          }
          while ( v29 != _InterlockedCompareExchange64(v24, v21, v28) );
        }
        ++v20;
      }
      while ( v20 < (unsigned int)a5 + 2 );
      v5 = v37;
    }
  }
LABEL_23:
  if ( v15 )
  {
    v30 = (volatile LONG *)(v5 + 280);
    v31 = CurrentIrql;
    ExReleaseSpinLockSharedFromDpcLevel(v30);
    if ( v31 < 2u )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v33 = *((_QWORD *)CurrentPrcb + 4375);
          v34 = ~(unsigned __int16)(-1LL << (v31 + 1));
          v35 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
          *(_DWORD *)(v33 + 20) &= v34;
          if ( v35 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      __writecr8(v31);
    }
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 + 272);
    sub_1402AFC00(v5 + 272);
  }
  if ( v36 )
    ExFreePoolWithTag(*(PVOID *)(v36 + 16), 0);
  return v8;
}
