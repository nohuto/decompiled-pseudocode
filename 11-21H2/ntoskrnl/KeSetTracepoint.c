/*
 * XREFs of KeSetTracepoint @ 0x140962320
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140573374 @ 0x140573374 (sub_140573374.c)
 *     sub_140962AC8 @ 0x140962AC8 (sub_140962AC8.c)
 *     sub_140963330 @ 0x140963330 (sub_140963330.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KeSetTracepoint(
        __int64 a1,
        char a2,
        void *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r15
  PVOID v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v16; // edi
  __int64 v17; // rax
  int v18; // r14d
  int v19; // ecx
  __int64 v20; // r12
  __int64 v22; // rbx
  __int64 *v23; // rbx
  __int64 v24; // rbx
  __int64 *v25; // rbx
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // rsi
  __int64 v29; // r14
  PVOID v30; // rax
  PVOID v31; // r8
  __int64 *v32; // rcx
  __int64 *v33; // r14
  __int64 *v34; // rdx
  _BYTE *v35; // rdx
  char v36; // al
  __int64 v37; // rdx
  int v38; // ecx
  signed __int32 v39[8]; // [rsp+0h] [rbp-D8h] BYREF
  int v40; // [rsp+30h] [rbp-A8h]
  unsigned int v41; // [rsp+34h] [rbp-A4h]
  int v42; // [rsp+38h] [rbp-A0h]
  int v43; // [rsp+3Ch] [rbp-9Ch]
  PVOID PcValue; // [rsp+40h] [rbp-98h]
  PVOID BaseOfImage; // [rsp+48h] [rbp-90h] BYREF
  __int64 v46; // [rsp+50h] [rbp-88h]
  __int64 v47; // [rsp+58h] [rbp-80h]
  char v48[48]; // [rsp+60h] [rbp-78h] BYREF

  BaseOfImage = 0LL;
  v9 = 0LL;
  v46 = a1;
  v11 = a3;
  PcValue = a3;
  v13 = (unsigned int)dword_140D069BC;
  v14 = 1LL;
  v47 = a9;
  if ( (dword_140D069BC & 2) == 0 && (!a2 || (dword_140D069BC & 1) == 0) )
    return (unsigned int)-1073741790;
  if ( !a1 && a2
    || (unsigned __int64)v11 > 0x7FFFFFFEFFFFLL && a2 == 1
    || (unsigned __int64)v11 < 0xFFFF800000000000uLL && !a2 )
  {
    return (unsigned int)-1073741811;
  }
  if ( a1 )
  {
    v17 = *(_QWORD *)(a1 + 992);
    if ( ((v17 & 1) != 0 || v17) && (a2 || (dword_140D069BC & 2) == 0) )
      return (unsigned int)-1073741790;
  }
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v43 = 1;
    v18 = 1;
    if ( a4 == 2 )
      goto LABEL_21;
  }
  else
  {
    v18 = 0;
    v43 = 0;
  }
  if ( a4 != 3 )
  {
    v19 = 0;
    goto LABEL_22;
  }
LABEL_21:
  v19 = 1;
LABEL_22:
  v41 = v19;
  if ( (unsigned int)(a4 - 4) <= 1 )
  {
    v40 = 1;
    if ( a4 == 5 )
      goto LABEL_27;
  }
  else
  {
    v40 = 0;
  }
  if ( a4 != 6 )
  {
    v42 = 0;
    goto LABEL_28;
  }
LABEL_27:
  v42 = 1;
LABEL_28:
  if ( v19 )
  {
    if ( !a5 )
    {
      v20 = a7;
      if ( !a7 )
        return (unsigned int)-1073741811;
LABEL_40:
      v24 = 5LL;
      if ( a2 )
        v24 = 7LL;
      v25 = &qword_140D070A0[v24];
      if ( (dword_140D069BC & 4) == 0 )
      {
LABEL_45:
        if ( v20 == *v25 )
          goto LABEL_46;
        return (unsigned int)-1073741790;
      }
      if ( v20 != *v25 )
      {
        DbgPrint("DTrace/NT: Overriding post-callback in DTrace test mode.\n", v13, v14);
        *v25 = a5;
        goto LABEL_45;
      }
LABEL_46:
      v11 = PcValue;
      goto LABEL_47;
    }
    v22 = 4LL;
    if ( a2 )
      v22 = 6LL;
    v23 = &qword_140D070A0[v22];
    if ( (dword_140D069BC & 4) != 0 )
    {
      if ( a5 == *v23 )
        goto LABEL_39;
      DbgPrint("DTrace/NT: Overriding pre-callback in DTrace test mode.\n", (unsigned int)dword_140D069BC, 1LL);
      *v23 = a5;
    }
    if ( a5 != *v23 )
      return (unsigned int)-1073741790;
LABEL_39:
    v20 = a7;
    if ( !a7 )
      goto LABEL_46;
    goto LABEL_40;
  }
  if ( a5 )
    return (unsigned int)-1073741811;
  v20 = a7;
  if ( a7 )
    return (unsigned int)-1073741811;
LABEL_47:
  if ( v18 || !a4 )
  {
    if ( (unsigned __int64)v11 >= 0xFFFF800000000000uLL )
    {
      if ( !RtlPcToFileHeader(v11, &BaseOfImage) )
        return (unsigned int)-1073741811;
      if ( !(unsigned int)sub_140962AC8(BaseOfImage, v11) )
        return (unsigned int)-1073741637;
    }
    if ( v18 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x5CuLL, 0x70727446u);
      v9 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 0x5CuLL);
      *(_QWORD *)(v9 + 16) = a1;
      *(_BYTE *)(v9 + 50) = a2;
      *(_QWORD *)(v9 + 8) = v11;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v28 = v9;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2ADC0, 0LL);
  v29 = qword_140C2ADB0;
  if ( qword_140C2ADB0 )
  {
LABEL_64:
    v31 = PcValue;
    v32 = 0LL;
    PcValue = (PVOID)(((unsigned __int64)PcValue >> 4) & 0x3FFF);
    v33 = (__int64 *)(v29 + 8LL * (_QWORD)PcValue);
    v34 = (__int64 *)*v33;
    if ( *v33 )
    {
      while ( (PVOID)v34[1] != v31 || v34[2] != v46 )
      {
        v33 = v34;
        v34 = (__int64 *)*v34;
        if ( !v34 )
          goto LABEL_68;
      }
      v32 = v34;
      if ( *((_BYTE *)v34 + 50) != a2 )
      {
        v16 = -1073741811;
        goto LABEL_112;
      }
    }
LABEL_68:
    if ( !a4 )
    {
      if ( !v32 )
      {
        LOBYTE(v34) = a2;
        v16 = sub_140963330(v46, v34, v31, 0LL, 0, v48);
        goto LABEL_112;
      }
      v35 = (_BYTE *)v47;
      if ( !v47 )
      {
LABEL_111:
        v16 = 0;
        goto LABEL_112;
      }
      v36 = *((_BYTE *)v32 + 51);
LABEL_110:
      *v35 = v36;
      goto LABEL_111;
    }
    if ( v43 )
    {
      if ( !v32 )
      {
        LOBYTE(v34) = a2;
        v16 = sub_140963330(v46, v34, *(_QWORD *)(v9 + 8), v9 + 51, 1, v9 + 52);
        if ( v16 < 0 )
          goto LABEL_112;
        ++dword_140C2ADA0;
        v33 = (__int64 *)(qword_140C2ADB0 + 8LL * (_QWORD)PcValue);
        *(_QWORD *)v9 = *v33;
        *v33 = v9;
        _InterlockedOr(v39, 0);
        v37 = v41;
        v9 &= -(__int64)(v41 != 0);
        goto LABEL_85;
      }
      if ( *((_BYTE *)v32 + 24) || *((_BYTE *)v32 + 25) )
      {
        v16 = -1073740008;
        goto LABEL_112;
      }
    }
    else if ( !v32 )
    {
      v16 = -1073741275;
      goto LABEL_112;
    }
    v37 = v41;
    v28 = (__int64)v32;
LABEL_85:
    if ( (_DWORD)v37 )
    {
      if ( !*(_BYTE *)(v28 + 48) )
      {
        if ( ++dword_140C2ADA4 == 1 )
          _InterlockedOr(&dword_140D06B80, 2u);
        LOBYTE(v37) = 1;
        v16 = sub_140573374(v28, v37);
        if ( v16 < 0 )
        {
          if ( v28 == v9 )
          {
            *v33 = *(_QWORD *)v28;
            _InterlockedOr(v39, 0);
            --dword_140C2ADA0;
          }
          --dword_140C2ADA4;
          goto LABEL_112;
        }
        *(_BYTE *)(v28 + 48) = 1;
      }
      *(_QWORD *)(v28 + 32) = a6;
      *(_QWORD *)(v28 + 40) = a8;
      _InterlockedOr(v39, 0);
      v9 = 0LL;
      *(_BYTE *)(v28 + 24) = a5 != 0;
      *(_BYTE *)(v28 + 25) = v20 != 0;
    }
    v38 = v42;
    if ( v42 && *(_BYTE *)(v28 + 48) )
      goto LABEL_99;
    if ( !v40 )
    {
LABEL_106:
      if ( v38 )
      {
        *v33 = *(_QWORD *)v28;
        _InterlockedOr(v39, 0);
        --dword_140C2ADA0;
        v9 = v28;
      }
      v35 = (_BYTE *)v47;
      if ( !v47 )
        goto LABEL_111;
      v36 = *(_BYTE *)(v28 + 51);
      goto LABEL_110;
    }
    if ( *(_BYTE *)(v28 + 48) )
    {
LABEL_99:
      if ( (int)sub_140573374(v28, 0LL) >= 0 )
      {
        --dword_140C2ADA4;
        v38 = v42;
        *(_BYTE *)(v28 + 48) = 0;
      }
      else
      {
        v38 = 0;
      }
    }
    *(_WORD *)(v28 + 24) = 0;
    _InterlockedOr(v39, 0);
    while ( dword_140C2ADA8 )
      _mm_pause();
    *(_QWORD *)(v28 + 32) = 0LL;
    *(_QWORD *)(v28 + 40) = 0LL;
    goto LABEL_106;
  }
  v30 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x70727446u);
  v29 = (__int64)v30;
  if ( v30 )
  {
    memset(v30, 0, 0x20000uLL);
    qword_140C2ADB0 = v29;
    goto LABEL_64;
  }
  v16 = -1073741670;
LABEL_112:
  if ( v9 )
  {
    while ( dword_140C2ADA8 )
      _mm_pause();
    ExFreePoolWithTag((PVOID)v9, 0x70727446u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2ADC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2ADC0);
  sub_1402AFC00((ULONG_PTR)&qword_140C2ADC0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v16;
}
