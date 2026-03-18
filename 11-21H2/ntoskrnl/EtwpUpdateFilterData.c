/*
 * XREFs of EtwpUpdateFilterData @ 0x14078F198
 * Callers:
 *     EtwpUpdateGuidEnableInfo @ 0x14078FA54 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140797054 (EtwpClearSessionAndUnreferenceEntry.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406EA28C (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateEventFilter @ 0x1406EACB0 (EtwpUpdateEventFilter.c)
 *     EtwpFreeEventNameFilter @ 0x1409F5070 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdateLevelKwFilter @ 0x1409F50A0 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1409F5144 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1409F51EC (EtwpUpdateStringFilterData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpUpdateFilterData(__int64 a1, unsigned int a2, __int64 a3, char a4, __int64 *a5)
{
  unsigned int v5; // r10d
  void *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r14
  __int32 v11; // edi
  __int64 v12; // r8
  __int64 Pool2; // rax
  __int32 v15; // edi
  __int64 v16; // rsi
  __int32 v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  PVOID v23; // r15
  PVOID v24; // rbx
  unsigned int v25; // [rsp+20h] [rbp-98h]
  PVOID v26; // [rsp+28h] [rbp-90h]
  PVOID v27; // [rsp+30h] [rbp-88h]
  int v28; // [rsp+38h] [rbp-80h]
  PVOID updated; // [rsp+40h] [rbp-78h]
  PVOID v30; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  __int32 v32; // [rsp+58h] [rbp-60h]
  __int64 v33; // [rsp+60h] [rbp-58h]
  __int64 v34; // [rsp+68h] [rbp-50h] BYREF
  int v35; // [rsp+70h] [rbp-48h]
  unsigned int v36; // [rsp+74h] [rbp-44h]
  __int64 v38; // [rsp+D0h] [rbp+18h]
  char v39; // [rsp+D8h] [rbp+20h]

  v38 = a3;
  v5 = a2;
  v25 = 0;
  v39 = 0;
  P = 0LL;
  v8 = 0LL;
  updated = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    a4 = 1;
  v9 = *(_QWORD *)(a1 + 384);
  if ( !a4 )
  {
    if ( !v9 )
    {
      Pool2 = ExAllocatePool2(64LL, 832LL, 1182233669LL);
      v9 = Pool2;
      if ( !Pool2 )
        return 3221225495LL;
      v5 = a2;
      *(_QWORD *)(a1 + 384) = Pool2;
    }
    v15 = 0;
    v16 = 104LL * v5;
    v17 = _InterlockedExchange((volatile __int32 *)(v16 + v9), 0);
    v18 = 0LL;
    v28 = 0;
    v32 = v17;
    if ( !*(_DWORD *)(v38 + 116) )
      goto LABEL_62;
    while ( 1 )
    {
      v19 = 2 * v18;
      v20 = *(_DWORD *)(v38 + 8 * v19 + 132);
      v21 = *(_DWORD *)(v38 + 8 * v19 + 128);
      v22 = v38 + *(_QWORD *)(v38 + 8 * v19 + 120);
      v35 = v21;
      v36 = v20;
      v34 = v22;
      if ( v20 > 0x80000200 )
        break;
      if ( v20 == -2147483136 )
      {
        updated = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 72LL), a5 + 4, 0);
        v15 |= 0x80000200;
        goto LABEL_59;
      }
      if ( v20 != 0x80000000 )
      {
        if ( v20 == -2147483644 )
        {
          EtwpUpdatePidFilterData(v16 + *(_QWORD *)(a1 + 384), &v34, 0LL);
          v15 |= 0x80000004;
        }
        else if ( v20 == -2147483640 )
        {
          EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 16LL, a5, 0LL);
          v15 |= 0x80000008;
        }
        else if ( v20 == -2147483632 )
        {
          EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 24LL, a5 + 1, 0LL);
          v15 |= 0x80000010;
        }
        else
        {
          if ( v20 != -2147483616 )
          {
            if ( v20 == -2147483392 )
            {
              v33 = EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 80LL), a5 + 9, 0);
              v15 |= 0x80000100;
            }
            goto LABEL_59;
          }
          EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 32LL, a5 + 2, 0LL);
          v15 |= 0x80000020;
        }
LABEL_43:
        LOBYTE(v5) = a2;
        goto LABEL_59;
      }
      EtwpUpdateSchematizedFilterData(v16 + *(_QWORD *)(a1 + 384), v5, (__int64)&v34, 0);
      LOBYTE(v5) = a2;
      LOBYTE(a3) = 1;
      v39 = 1;
LABEL_60:
      v18 = (unsigned int)(v28 + 1);
      v28 = v18;
      if ( (unsigned int)v18 >= *(_DWORD *)(v38 + 116) )
      {
        v17 = v32;
        if ( !(_BYTE)a3 )
LABEL_62:
          EtwpUpdateSchematizedFilterData(v16 + *(_QWORD *)(a1 + 384), 0, 0LL, 1);
        if ( (v17 & 0x80000004) == 0x80000004 && (v15 & 0x80000004) != 0x80000004 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdatePidFilterData(v16 + *(_QWORD *)(a1 + 384), 0LL, a3);
        }
        if ( (v17 & 0x80000008) == 0x80000008 && (v15 & 0x80000008) != 0x80000008 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, a3);
        }
        if ( (v17 & 0x80000010) == 0x80000010 && (v15 & 0x80000010) != 0x80000010 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, a3);
        }
        if ( (v17 & 0x80000020) == 0x80000020 && (v15 & 0x80000020) != 0x80000020 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, a3);
        }
        if ( (v17 & 0x80008000) == 0x80008000 && (v15 & 0x80008000) != 0x80008000 )
        {
          LOBYTE(a3) = 1;
          EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, a3);
        }
        if ( (v17 & 0x80001000) == 0x80001000 && (v15 & 0x80001000) != 0x80001000 )
          P = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 48LL), 0LL, 1);
        if ( (v17 & 0x80000200) == 0x80000200 && (v15 & 0x80000200) != 0x80000200 )
          updated = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 72LL), 0LL, 1);
        if ( (v17 & 0x80000400) == 0x80000400 && (v15 & 0x80000400) != 0x80000400 )
          v27 = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 96LL), 0LL, 1);
        if ( (v17 & 0x80002000) == 0x80002000 && (v15 & 0x80002000) != 0x80002000 )
          v26 = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 56LL), 0LL, 1);
        if ( (v17 & 0x80004000) == 0x80004000 && (v15 & 0x80004000) != 0x80004000 )
        {
          LOBYTE(a3) = 1;
          v25 = EtwpUpdateLevelKwFilter(v16 + *(_QWORD *)(a1 + 384), 0LL, a3, &v30);
        }
        if ( (v17 & 0x80000100) != 0x80000100 || (v15 & 0x80000100) == 0x80000100 )
          v8 = (void *)v33;
        else
          v8 = (void *)EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 80LL), 0LL, 1);
        _InterlockedExchange((volatile __int32 *)(v16 + *(_QWORD *)(a1 + 384)), v15);
LABEL_98:
        v23 = P;
        v24 = v30;
        if ( P || updated || v27 || v26 || v30 || v8 )
        {
          KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
          if ( v23 )
            ExFreePoolWithTag(v23, 0);
          if ( updated )
            ExFreePoolWithTag(updated, 0);
          if ( v27 )
            EtwpFreeEventNameFilter(v27);
          if ( v26 )
            EtwpFreeEventNameFilter(v26);
          if ( v24 )
            ExFreePoolWithTag(v24, 0);
          if ( v8 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(v8, 0);
          }
        }
        return v25;
      }
    }
    switch ( v20 )
    {
      case 0x80000400:
        v27 = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 96LL), a5 + 6, 0);
        v15 |= 0x80000400;
        break;
      case 0x80001000:
        P = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 48LL), a5 + 5, 0);
        v15 |= 0x80001000;
        break;
      case 0x80002000:
        v26 = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v16 + *(_QWORD *)(a1 + 384) + 56LL), a5 + 7, 0);
        v15 |= 0x80002000;
        break;
      case 0x80004000:
        v25 = EtwpUpdateLevelKwFilter(v16 + *(_QWORD *)(a1 + 384), &v34, 0LL, &v30);
        v15 |= 0x80004000;
        goto LABEL_43;
      case 0x80008000:
        EtwpUpdateStringFilterData(v16 + *(_QWORD *)(a1 + 384) + 40LL, a5 + 3, 0LL);
        v15 |= 0x80008000;
        goto LABEL_43;
    }
LABEL_59:
    LOBYTE(a3) = v39;
    goto LABEL_60;
  }
  if ( v9 )
  {
    v10 = 104LL * a2;
    v11 = _InterlockedExchange((volatile __int32 *)(v10 + v9), 0);
    EtwpUpdateSchematizedFilterData(v10 + *(_QWORD *)(a1 + 384), 0, 0LL, a4);
    if ( (v11 & 0x80000004) == 0x80000004 )
    {
      LOBYTE(v12) = a4;
      EtwpUpdatePidFilterData(v10 + *(_QWORD *)(a1 + 384), 0LL, v12);
    }
    if ( (v11 & 0x80000008) == 0x80000008 )
    {
      LOBYTE(v12) = a4;
      EtwpUpdateStringFilterData(v10 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, v12);
    }
    if ( (v11 & 0x80000010) == 0x80000010 )
    {
      LOBYTE(v12) = a4;
      EtwpUpdateStringFilterData(v10 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, v12);
    }
    if ( (v11 & 0x80000020) == 0x80000020 )
    {
      LOBYTE(v12) = a4;
      EtwpUpdateStringFilterData(v10 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, v12);
    }
    if ( (v11 & 0x80008000) == 0x80008000 )
    {
      LOBYTE(v12) = a4;
      EtwpUpdateStringFilterData(v10 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, v12);
    }
    if ( (v11 & 0x80001000) == 0x80001000 )
      P = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v10 + *(_QWORD *)(a1 + 384) + 48LL), 0LL, a4);
    if ( (v11 & 0x80000200) == 0x80000200 )
      updated = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v10 + *(_QWORD *)(a1 + 384) + 72LL), 0LL, a4);
    if ( (v11 & 0x80000400) == 0x80000400 )
      v27 = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v10 + *(_QWORD *)(a1 + 384) + 96LL), 0LL, a4);
    if ( (v11 & 0x80002000) == 0x80002000 )
      v26 = (PVOID)EtwpUpdateEventFilter((volatile __int64 *)(v10 + *(_QWORD *)(a1 + 384) + 56LL), 0LL, a4);
    if ( (v11 & 0x80004000) == 0x80004000 )
    {
      LOBYTE(v12) = a4;
      v25 = EtwpUpdateLevelKwFilter(v10 + *(_QWORD *)(a1 + 384), 0LL, v12, &v30);
    }
    if ( (v11 & 0x80000100) == 0x80000100 )
      v8 = (void *)EtwpUpdateEventFilter((volatile __int64 *)(v10 + *(_QWORD *)(a1 + 384) + 80LL), 0LL, a4);
    goto LABEL_98;
  }
  return 0LL;
}
