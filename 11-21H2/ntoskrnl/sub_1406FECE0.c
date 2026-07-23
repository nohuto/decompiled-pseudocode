/*
 * XREFs of sub_1406FECE0 @ 0x1406FECE0
 * Callers:
 *     sub_14028CDA0 @ 0x14028CDA0 (sub_14028CDA0.c)
 *     sub_140682D84 @ 0x140682D84 (sub_140682D84.c)
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 *     sub_1406FECC4 @ 0x1406FECC4 (sub_1406FECC4.c)
 * Callees:
 *     sub_14025863C @ 0x14025863C (sub_14025863C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140687540 @ 0x140687540 (sub_140687540.c)
 *     sub_1406CD41C @ 0x1406CD41C (sub_1406CD41C.c)
 *     sub_1406FF050 @ 0x1406FF050 (sub_1406FF050.c)
 */

char __fastcall sub_1406FECE0(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  BOOL v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 i; // rdi
  int v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  unsigned __int64 v30; // [rsp+38h] [rbp-50h]
  __int64 v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  if ( (a1 & 2) == 0 || !*(_QWORD *)(a3 + 1296) )
    return 1;
  v6 = 1;
  CurrentThread = KeGetCurrentThread();
  v27 = 0LL;
  v28 = *(_QWORD *)(*(_QWORD *)(a3 + 1256) + 1272LL);
  v26 = 0;
  if ( CurrentThread )
    --*((_WORD *)CurrentThread + 243);
  if ( v28 )
  {
    ExAcquirePushLockExclusiveEx(v28 + 1224, 0LL);
    a4 = v33;
    a3 = v32;
  }
  v8 = v28;
  if ( (a1 & 4) != 0 )
  {
    v9 = a4;
    a4 = 0LL;
    v33 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 1256);
  }
  v29 = v9;
  v10 = v9;
  if ( v9 != a4 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( v10 != v8 )
        ExAcquirePushLockExclusiveEx(v10 + 1224, 0LL);
      v12 = *(_QWORD *)(v10 + 1168);
      v13 = v12 + a2;
      if ( a2 <= 0 )
      {
        if ( v13 > v12 )
        {
          sub_140687540(v10, v8, 0LL);
          v23 = v10;
          if ( !v6 )
            v23 = v27;
          v6 = 0;
          v27 = v23;
          goto LABEL_27;
        }
      }
      else if ( v13 < v12 )
      {
        sub_140687540(v10, v8, 0LL);
        v22 = v10;
        if ( !v6 )
          v22 = v27;
        v6 = 0;
        v27 = v22;
        goto LABEL_27;
      }
      v14 = 0;
      v15 = *(_DWORD *)(v10 + 256);
      v16 = v13 + *(_QWORD *)(v10 + 1528);
      v30 = v16;
      if ( (v15 & 0x200000) != 0 && v16 > *(_QWORD *)(v10 + 688) )
        v14 = a2 > 0;
      if ( (v15 & 0x200) != 0 && v13 > *(_QWORD *)(v10 + 680) && a2 > 0 || v14 )
        break;
      if ( v6 )
      {
        *(_QWORD *)(v10 + 1168) = v13;
LABEL_19:
        if ( *(_QWORD *)(v10 + 1176) )
        {
          v21 = 512LL;
          if ( a2 <= 0 )
            v21 = 0x8000LL;
          v26 |= sub_1406FF050(v10, v13, v16, v21);
        }
      }
LABEL_20:
      if ( a2 > 0 )
      {
        if ( v13 > *(_QWORD *)(v10 + 704) )
          *(_QWORD *)(v10 + 704) = v13;
        v11 = *(_QWORD *)(v32 + 1608);
      }
      if ( v10 != v8 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10 + 1224);
        sub_1402AFC00(v10 + 1224);
      }
      if ( v11 )
      {
        if ( v11 > *(_QWORD *)(v10 + 696) )
        {
          _m_prefetchw((const void *)(v10 + 696));
          v19 = *(_QWORD *)(v10 + 696);
          if ( v11 > v19 )
          {
            do
            {
              v20 = v19;
              v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 696), v11, v19);
            }
            while ( v19 != v20 && v11 > v19 );
          }
        }
      }
LABEL_27:
      v10 = *(_QWORD *)(v10 + 1264);
      if ( v10 == v33 )
      {
        if ( v6 )
        {
          if ( v26 )
            sub_1406CD41C(v8);
        }
        else
        {
          for ( i = v29; i != v27; i = *(_QWORD *)(i + 1264) )
          {
            if ( i != v8 )
              ExAcquirePushLockExclusiveEx(i + 1224, 0LL);
            *(_QWORD *)(i + 1168) -= a2;
            sub_140687540(i, v8, 0LL);
          }
        }
        goto LABEL_31;
      }
    }
    if ( (a1 & 1) != 0 )
    {
      *(_QWORD *)(v10 + 1168) = v13;
    }
    else if ( v6 )
    {
      v24 = v10;
      v6 = 0;
      goto LABEL_69;
    }
    v24 = v27;
LABEL_69:
    v27 = v24;
    if ( *(_QWORD *)(v10 + 552) && (*(_DWORD *)(v10 + 1068) & 0x200) != 0 && (*(_DWORD *)(v32 + 1120) & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)(v32 + 1120), 0x20u);
      sub_14025863C(v10, 10LL, *(_QWORD *)(v32 + 1088), 1);
      v16 = v30;
    }
    if ( !v6 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_31:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 1224);
    sub_1402AFC00(v8 + 1224);
  }
  if ( CurrentThread )
  {
    if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v6;
}
