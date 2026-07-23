/*
 * XREFs of sub_140362714 @ 0x140362714
 * Callers:
 *     sub_1403625F8 @ 0x1403625F8 (sub_1403625F8.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall sub_140362714(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  _QWORD **v4; // r14
  _QWORD **v5; // rdi
  ULONG_PTR v8; // rsi
  unsigned __int8 v9; // al
  _QWORD *v10; // r15
  unsigned __int64 v11; // rbp
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // r8
  struct _KTHREAD *v17; // rbp
  unsigned int v18; // ecx
  __int64 v19; // rdi
  unsigned int v20; // r8d
  int v21; // r8d
  struct _KTHREAD *v22; // rcx
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // edx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v29; // ecx
  __int64 v30; // rdi
  unsigned int v31; // r8d
  int v32; // r8d
  struct _KTHREAD *v33; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v36; // r9
  int v37; // edx
  _OWORD v38[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+80h] [rbp+8h]

  v3 = 0LL;
  v4 = (_QWORD **)(a1 + 120);
  v5 = (_QWORD **)(a1 + 128);
  if ( *(_QWORD *)(a1 + 120) || *v5 )
  {
    v8 = a1 + 112;
    v9 = sub_140365AF4(a1 + 112, *(_DWORD *)(a1 + 40) & 1);
    v10 = *v5;
    v11 = v9;
    if ( *v5 || (a3 & 2) == 0 && (v10 = *v4, v5 = v4, *v4) )
    {
      v12 = *((unsigned __int16 *)v10 - 3);
      _BitScanForward(&v13, v12);
      v14 = v12 ^ (1 << v13);
      v39 = v13;
      *((_WORD *)v10 - 3) = v14;
      if ( !(_WORD)v14 )
      {
        if ( *v5 )
          *v5 = (_QWORD *)**v5;
        *v10 = 0LL;
      }
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v36 = *((_QWORD *)CurrentPrcb + 4375);
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v23 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
              *(_DWORD *)(v36 + 20) &= v37;
              if ( v23 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        CurrentThread = KeGetCurrentThread();
        if ( v8 - qword_140C50630 >= 0x8000000000LL )
          v29 = -1;
        else
          v29 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
        _disable();
        v30 = (__int64)CurrentThread + 1696;
        v31 = 0;
        while ( (*(_QWORD *)v30 & 0x7FFFFFFFFFFFFFFCLL) != (v8 & 0x7FFFFFFFFFFFFFFCLL)
             || !*(_BYTE *)(v30 + 18)
             || (*(_DWORD *)v30 & 1) != 0
             || *(_DWORD *)(v30 + 8) != v29 )
        {
          ++v31;
          v30 += 96LL;
          if ( v31 >= 6 )
            goto LABEL_62;
        }
        *(_BYTE *)(v30 + 18) = 0;
        if ( v30 )
        {
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
          *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v30 + 16);
          _enable();
          if ( v32 )
            sub_14022B568((ULONG_PTR)CurrentThread, v8, v32);
          goto LABEL_65;
        }
LABEL_62:
        if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8, v29, 0LL);
        _enable();
LABEL_65:
        v33 = KeGetCurrentThread();
        v23 = (*((_WORD *)v33 + 243))++ == 0xFFFF;
        if ( v23 && *((struct _KTHREAD **)v33 + 19) != (struct _KTHREAD *)((char *)v33 + 152) )
          KiCheckForKernelApcDelivery();
      }
      v38[0] = *(_OWORD *)(a1 + 40);
      v15 = *(_QWORD *)(sub_140362B58(v38) + 48LL * *((unsigned __int8 *)v10 - 15) + 2272);
      return *(_QWORD *)(v15 + 8)
           + (((unsigned __int64)v10 - *(_QWORD *)(v15 + 40) - 16) >> *(_DWORD *)(v15 + 24) << 20)
           + a2 * v39;
    }
    else if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = *((_QWORD *)v25 + 4375);
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v23 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
            *(_DWORD *)(v26 + 20) &= v27;
            if ( v23 )
              sub_140418E4C(v25);
          }
        }
      }
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
      v17 = KeGetCurrentThread();
      if ( v8 - qword_140C50630 >= 0x8000000000LL )
        v18 = -1;
      else
        v18 = sub_140287F30(*((_QWORD *)v17 + 23));
      _disable();
      v19 = (__int64)v17 + 1696;
      v20 = 0;
      while ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) != (v8 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v19 + 18)
           || (*(_DWORD *)v19 & 1) != 0
           || *(_DWORD *)(v19 + 8) != v18 )
      {
        ++v20;
        v19 += 96LL;
        if ( v20 >= 6 )
          goto LABEL_32;
      }
      *(_BYTE *)(v19 + 18) = 0;
      if ( v19 )
      {
        if ( *(__int64 *)v19 < 0 )
        {
          *(_BYTE *)v19 |= 2u;
          _enable();
          sub_14034EE30(v19);
          _disable();
        }
        v21 = *(_DWORD *)(v19 + 88);
        *(_DWORD *)(v19 + 88) = 0;
        *(_BYTE *)(v19 + 17) = 0;
        *(_QWORD *)v19 = 0LL;
        *((_BYTE *)v17 + 792) |= 1 << *(_BYTE *)(v19 + 16);
        _enable();
        if ( v21 )
          sub_14022B568((ULONG_PTR)v17, v8, v21);
        goto LABEL_35;
      }
LABEL_32:
      if ( (*((_DWORD *)v17 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, v8, v18, 0LL);
      _enable();
LABEL_35:
      v22 = KeGetCurrentThread();
      v23 = (*((_WORD *)v22 + 243))++ == 0xFFFF;
      if ( v23 && *((struct _KTHREAD **)v22 + 19) != (struct _KTHREAD *)((char *)v22 + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
  return v3;
}
