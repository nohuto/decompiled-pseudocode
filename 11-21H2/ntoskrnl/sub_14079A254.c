/*
 * XREFs of sub_14079A254 @ 0x14079A254
 * Callers:
 *     sub_14079982C @ 0x14079982C (sub_14079982C.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     sub_14079A690 @ 0x14079A690 (sub_14079A690.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14079A254(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        int a5,
        int a6,
        char a7,
        signed __int64 *a8,
        struct _EX_RUNDOWN_REF **a9,
        struct _EX_RUNDOWN_REF **a10,
        _DWORD *a11)
{
  __int64 v11; // r12
  unsigned int v12; // edi
  __int64 v15; // r14
  int v16; // r14d
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v18; // rsi
  signed __int64 v19; // r12
  unsigned __int64 *v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  volatile signed __int64 *v23; // r15
  __int64 v24; // rax
  signed __int8 v25; // cf
  struct _EX_RUNDOWN_REF *v26; // rcx
  ULONG_PTR v27; // rax
  struct _EX_RUNDOWN_REF **v28; // rdx
  struct _EX_RUNDOWN_REF **v29; // rdx
  struct _EX_RUNDOWN_REF *v30; // rax
  signed __int32 v31; // ecx
  int v32; // eax
  unsigned int v33; // edx
  int v35; // [rsp+50h] [rbp-20h] BYREF
  int v36; // [rsp+54h] [rbp-1Ch] BYREF
  struct _EX_RUNDOWN_REF *v37; // [rsp+58h] [rbp-18h] BYREF
  __int64 v38; // [rsp+60h] [rbp-10h]
  __int64 v39; // [rsp+68h] [rbp-8h]

  v11 = *(_QWORD *)(a2 + 2152);
  v12 = 0;
  v37 = 0LL;
  v38 = v11;
  *a11 = 0;
  v35 = 0;
  v36 = 0;
  if ( a7 == 1 )
  {
    v15 = sub_140347C10(v11 + 80, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 80), 17LL, 0LL) )
      sub_14029F350((signed __int64 *)(v11 + 80), 0, v15, v11 + 80);
    if ( v15 )
      *(_BYTE *)(v15 + 18) = 1;
    v16 = sub_14079A690(a1, v11, a3, a4, a6, (__int64)&v37, (__int64)&v35, (__int64)&v36, (__int64)a8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 80), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v11 + 80));
    sub_1402AFC00(v11 + 80);
    if ( v16 >= 0 )
      goto LABEL_47;
  }
  if ( PsInitialSystemProcess == (PEPROCESS)a2 )
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  else
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x20666E57u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  LODWORD(v18->Count) = 8915205;
  v18[10].Count = a3;
  v18[11].Count = a4;
  LODWORD(v18[12].Count) = a5;
  HIDWORD(v18[12].Ptr) = a6;
  v18[1].Count = 0LL;
  v18[7].Count = *(ULONG_PTR *)(a1 + 40);
  if ( a7 )
  {
    do
      v19 = _InterlockedIncrement64(&qword_140D3D1F8);
    while ( !v19 );
    if ( a8 )
      *a8 = v19;
  }
  else
  {
    v19 = (signed __int64)v18;
    if ( a9 )
      *a9 = v18;
  }
  v20 = (unsigned __int64 *)(v38 + 80);
  v21 = sub_140347C10(v38 + 80, 0LL);
  v22 = v21;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
    sub_14029F120(v20, v21, (__int64)v20);
  if ( v22 )
    *(_BYTE *)(v22 + 18) = 1;
  v23 = (volatile signed __int64 *)(a1 + 112);
  v24 = sub_140347C10(a1 + 112, 0LL);
  v25 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v39 = v24;
  if ( v25 )
  {
    sub_14029F120((unsigned __int64 *)(a1 + 112), v24, a1 + 112);
    v24 = v39;
  }
  if ( v24 )
    *(_BYTE *)(v24 + 18) = 1;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)sub_14079A690(a1, v38, a3, a4, a6, (__int64)&v37, (__int64)&v35, (__int64)&v36, (__int64)a8) < 0 )
    {
      v18[5].Count = a2;
      v18[6].Count = a1;
      v18[2].Count = v19;
      sub_140347810(v18 + 1);
      if ( a9 )
        sub_140347810(v18 + 1);
      v26 = v18 + 3;
      v27 = v38 + 88;
      v28 = *(struct _EX_RUNDOWN_REF ***)(v38 + 96);
      if ( *v28 != (struct _EX_RUNDOWN_REF *)(v38 + 88)
        || (v26->Count = v27,
            v18[4].Count = (ULONG_PTR)v28,
            *v28 = v26,
            *(_QWORD *)(v27 + 8) = v26,
            v29 = *(struct _EX_RUNDOWN_REF ***)(a1 + 128),
            v30 = v18 + 8,
            *v29 != (struct _EX_RUNDOWN_REF *)(a1 + 120)) )
      {
        __fastfail(3u);
      }
      v30->Count = a1 + 120;
      v18[9].Count = (ULONG_PTR)v29;
      *v29 = v30;
      *(_QWORD *)(a1 + 128) = v30;
      if ( (BYTE4(v18[12].Ptr) & 1) != 0 )
      {
        v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v32 = v35;
        if ( !v31 )
          v32 = 1;
        v35 = v32;
      }
      if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 112);
      sub_1402AFC00(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v20);
      sub_1402AFC00((ULONG_PTR)v20);
      *a10 = v18;
      goto LABEL_40;
    }
    if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 112);
    sub_1402AFC00(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v20);
    sub_1402AFC00((ULONG_PTR)v20);
    ExFreePoolWithTag(v18, 0x20666E57u);
LABEL_47:
    *a10 = v37;
LABEL_40:
    v33 = 0;
    if ( v36 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v33 = 8;
    if ( v35 > 0 )
    {
      v33 |= 2u;
    }
    else if ( v35 < 0 )
    {
      v33 |= 4u;
    }
    if ( v33 )
    {
      LOBYTE(v12) = a7 != 0;
      sub_1407938B0(a1, v33, 1, v12);
      *a11 = 1;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 112);
  sub_1402AFC00(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  sub_1402AFC00((ULONG_PTR)v20);
  ExFreePoolWithTag(v18, 0x20666E57u);
  return 3221225524LL;
}
