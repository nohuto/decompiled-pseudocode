/*
 * XREFs of sub_1406FD9F0 @ 0x1406FD9F0
 * Callers:
 *     sub_1406FD4A0 @ 0x1406FD4A0 (sub_1406FD4A0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406AC778 @ 0x1406AC778 (sub_1406AC778.c)
 *     sub_1406D6D50 @ 0x1406D6D50 (sub_1406D6D50.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_1406DDB48 @ 0x1406DDB48 (sub_1406DDB48.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_1407F854C @ 0x1407F854C (sub_1407F854C.c)
 */

__int64 __fastcall sub_1406FD9F0(int *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edx
  int v4; // ecx
  bool v5; // zf
  int v6; // r8d
  _QWORD *v7; // rdx
  char v8; // r14
  int v9; // r9d
  int v10; // ebp
  int v11; // eax
  int v12; // ecx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // r14
  struct _KTHREAD *CurrentThread; // rsi
  int v22; // r15d
  bool v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 8);
  v27 = 0LL;
  *((_QWORD *)a1 + 15) = v1;
  v3 = *(_DWORD *)(v1 + 56) & 0xFFF7FFFF;
  v4 = a1[35] & 0x7FFFFFFF;
  a1[34] = v3;
  v5 = (a1[4] & 0x1000000) == 0;
  a1[35] = v4;
  if ( !v5 )
  {
    v15 = *a1;
    v16 = v3;
    if ( (*a1 & 0x400) == 0 )
    {
      v16 = v3 | 0x80000;
      a1[34] = v3 | 0x80000;
    }
    v3 = v16;
    if ( *((_BYTE *)a1 + 24) <= 1u && (v15 & 0x100000) == 0 )
      a1[35] = v4 | 0x80000000;
  }
  v6 = *(_DWORD *)(v1 + 56);
  if ( (v6 & 0x8000000) != 0 )
  {
    v19 = sub_1406DDB48((__int64 *)v1, a1[42]);
    if ( v19 < 0 )
    {
      ObfDereferenceObject(*((PVOID *)a1 + 7));
      sub_1407F854C(a1);
      return (unsigned int)v19;
    }
    a1[35] ^= (a1[35] ^ (a1[42] << 12)) & 0x7FFFF000;
  }
  else if ( !*((_QWORD *)a1 + 6) && (a1[7] & 0x44) != 0 && (v6 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(v1 + 64) )
    {
      a1[34] = v3 | 0x10000000;
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 92));
      if ( !sub_1406D6D50(*((_QWORD *)a1 + 7)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
        ObfDereferenceObject(*((PVOID *)a1 + 7));
        sub_1407F854C(a1);
        return 3221225508LL;
      }
    }
  }
  v7 = (_QWORD *)*((_QWORD *)a1 + 7);
  v8 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7[1] + 52LL) & 0x10) != 0 )
      v8 = 1;
    else
      ObfDereferenceObject(v7);
  }
  v9 = 128;
  if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 || !*(_QWORD *)(v1 + 64) )
  {
    v14 = v1 + 128;
    do
    {
      v14 = *(_QWORD *)(v14 + 16);
      v9 += 56;
    }
    while ( v14 );
  }
  v10 = sub_14072B3B0(
          *((unsigned __int8 *)a1 + 72),
          (_DWORD)MmSectionObjectType,
          *((_QWORD *)a1 + 1),
          *((_BYTE *)a1 + 72));
  if ( v10 < 0 )
  {
    if ( (a1[34] & 0x10000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
    }
    else if ( (*(_DWORD *)(v1 + 56) & 0x8000000) != 0 )
    {
      sub_1406DDA18((__int64 *)v1, ((unsigned int)a1[35] >> 12) & 0x7FFFF);
    }
    if ( v8 )
      ObfDereferenceObject(*((PVOID *)a1 + 7));
    sub_1407F854C(a1);
    return (unsigned int)v10;
  }
  MEMORY[0] = *((_OWORD *)a1 + 5);
  MEMORY[0x10] = *((_OWORD *)a1 + 6);
  MEMORY[0x20] = *((_OWORD *)a1 + 7);
  MEMORY[0x30] = *((_OWORD *)a1 + 8);
  MEMORY[0x18] = 0LL;
  if ( v8 )
  {
    v17 = *((_QWORD *)a1 + 7);
    MEMORY[0x28] = v17;
    if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 )
      v18 = v17 | 1;
    else
      v18 = v17 | 2;
    MEMORY[0x28] = v18;
  }
  if ( (*a1 & 1) != 0 )
    goto LABEL_16;
  MEMORY[0x38] |= 0x10000u;
  v11 = a1[4];
  v12 = MEMORY[0x38];
  if ( (v11 & 0x400000) != 0 )
  {
    v12 = MEMORY[0x38] | 0x4000;
    MEMORY[0x38] |= 0x4000u;
    v11 = a1[4];
  }
  if ( (v11 & 0x200000) == 0 )
    goto LABEL_16;
  MEMORY[0x38] = v12 | 0x40;
  v20 = MEMORY[0x30];
  if ( MEMORY[0x30] > (unsigned __int64)qword_140C4F128 )
  {
    ObfDereferenceObject(0LL);
    return 3221225495LL;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F110, 0LL);
  v22 = sub_1406AC778(&qword_140C4F108, v20, 0x10000uLL, 0LL, 0x10000uLL, qword_140C4F128, &v27);
  if ( v22 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4F110);
    sub_1402AFC00((ULONG_PTR)&qword_140C4F110);
    v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v5 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    ObfDereferenceObject(0LL);
    return (unsigned int)v22;
  }
  v23 = 0;
  MEMORY[0x18] = v27 >> 12;
  MEMORY[0x20] = ((unsigned __int64)(v20 + 4095) >> 12) + (v27 >> 12) - 1;
  v24 = qword_140C4F108;
  v25 = v27 >> 12;
  if ( !qword_140C4F108 )
    goto LABEL_57;
  while ( v25 <= (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32))
       && v25 < (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) )
  {
    v26 = *(_QWORD *)v24;
    if ( !*(_QWORD *)v24 )
      goto LABEL_57;
LABEL_65:
    v24 = v26;
  }
  v26 = *(_QWORD *)(v24 + 8);
  if ( v26 )
    goto LABEL_65;
  v23 = 1;
LABEL_57:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4F108, v24, v23, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F110);
  sub_1402AFC00((ULONG_PTR)&qword_140C4F110);
  v5 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v5 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
LABEL_16:
  *((_QWORD *)a1 + 18) = 0LL;
  return (unsigned int)v10;
}
