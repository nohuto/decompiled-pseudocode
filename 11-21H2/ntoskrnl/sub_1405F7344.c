/*
 * XREFs of sub_1405F7344 @ 0x1405F7344
 * Callers:
 *     sub_1405F7090 @ 0x1405F7090 (sub_1405F7090.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403792D8 @ 0x1403792D8 (sub_1403792D8.c)
 *     sub_140379A64 @ 0x140379A64 (sub_140379A64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     sub_14096CFE0 @ 0x14096CFE0 (sub_14096CFE0.c)
 */

__int64 __fastcall sub_1405F7344(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 *v5; // r15
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v11; // rsi
  __int64 v12; // r9
  unsigned int v13; // r8d
  unsigned int v14; // r13d
  char *v15; // r14
  __int64 v16; // r9
  struct _KTHREAD *v17; // rax
  char *v18; // rcx
  __int64 v19; // r15
  char *v20; // r12
  char *v21; // rax
  unsigned __int64 *v22; // rdx
  unsigned __int64 v23; // rcx
  char *v24; // r10
  char *v25; // r9
  unsigned int v26; // r8d
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _KTHREAD *v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KTHREAD *v36; // rax
  SIZE_T MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v39; // [rsp+30h] [rbp-D0h]
  unsigned int v40; // [rsp+34h] [rbp-CCh]
  unsigned int v41; // [rsp+38h] [rbp-C8h]
  _OWORD v43[3]; // [rsp+50h] [rbp-B0h] BYREF
  char *v44; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v45[63]; // [rsp+88h] [rbp-78h]
  char MemoryInformation[8]; // [rsp+280h] [rbp+180h] BYREF
  char v47; // [rsp+288h] [rbp+188h] BYREF

  v4 = (*(_BYTE *)(a1 + 6021) & 4) == 0;
  memset(v43, 0, sizeof(v43));
  v5 = a2;
  if ( v4 )
    return (unsigned int)-1073741637;
  v8 = *(_DWORD *)(a1 + 1952);
  v7 = 0;
  v40 = v8;
  if ( !v8 )
    return v7;
  v9 = *(_DWORD *)(a1 + 6208) >> 12;
  v39 = v9;
  sub_14030D5C0(*(_QWORD *)(a1 + 6584), 0LL, (__int64)v43, a4);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v11 = (volatile signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6596), 1u);
  v13 = 0;
  v14 = 0;
  if ( !*(_DWORD *)(a1 + 6212) )
    goto LABEL_46;
  do
  {
    if ( v13 >= v8 )
      break;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v14) & 0x7FFFFFFFFFFF0000LL) == 0
      || *(_BYTE *)(a1 + 856)
      || (*(_WORD *)(*(_QWORD *)(a1 + 1112) + 2LL * v14) & 0xE000) != 0xC000 )
    {
      goto LABEL_45;
    }
    v41 = v13 + 1;
    v15 = (char *)sub_1403792D8(a1, v14, 0, v12, 0);
    if ( (unsigned __int64)v15 <= 3 )
      goto LABEL_44;
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    sub_1402AFC00(a1 + 6024);
    v17 = KeGetCurrentThread();
    v4 = (*((_WORD *)v17 + 243))++ == 0xFFFF;
    if ( v4 && *((struct _KTHREAD **)v17 + 19) != (struct _KTHREAD *)((char *)v17 + 152) )
      KiCheckForKernelApcDelivery();
    if ( !*v5 )
    {
      v45[0] = *(unsigned int *)(a1 + 6208);
      v44 = v15;
      sub_14096CFE0(1LL, &v44, 5LL, v16);
      goto LABEL_43;
    }
    v18 = v15;
    v19 = v9 << 12;
    v20 = &v15[v19];
    v21 = MemoryInformation;
    if ( v15 < &v15[v19] )
    {
      do
      {
        *(_QWORD *)v21 = v18;
        v18 += 4096;
        v21 += 16;
      }
      while ( v18 < v20 );
    }
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v15,
           MemoryWorkingSetExInformation,
           MemoryInformation,
           16LL * v39,
           0LL) >= 0
      || v15 >= v20 )
    {
      v24 = v15;
      if ( v15 >= v20 )
      {
        v5 = a2;
        goto LABEL_42;
      }
    }
    else
    {
      v22 = (unsigned __int64 *)&v47;
      v23 = ((unsigned __int64)(v19 - 1) >> 12) + 1;
      do
      {
        *v22 = *v22 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
        v22 += 2;
        --v23;
      }
      while ( v23 );
      v24 = v15;
    }
    v25 = MemoryInformation;
    v26 = 0;
    do
    {
      if ( (*((_QWORD *)v25 + 1) & 1) != 0 || (*((_QWORD *)v25 + 1) & 0xC00000LL) == 0x400000 )
      {
        v5 = a2;
        v27 = *((_QWORD *)v25 + 1) & 0x7000000LL;
        if ( v27 == 100663296 )
        {
          if ( !*a2 )
          {
            v32 = 5LL;
            v45[0] = *(unsigned int *)(a1 + 6208);
            v31 = 1LL;
            v44 = v15;
            goto LABEL_40;
          }
          v28 = *a2 - 1;
          goto LABEL_31;
        }
        if ( v27 < 0x6000000 )
        {
          v29 = *a2;
          if ( *a2 )
          {
            v30 = 2LL * v26++;
            v45[v30 - 1] = *(_QWORD *)v25;
            v28 = v29 - 1;
            v45[v30] = 4096LL;
LABEL_31:
            *a2 = v28;
          }
        }
      }
      else
      {
        v5 = a2;
      }
      v24 += 4096;
      v25 += 16;
    }
    while ( v24 < v20 );
    if ( !v26 )
      goto LABEL_42;
    v31 = v26;
    v32 = 6LL;
LABEL_40:
    sub_14096CFE0(v31, &v44, v32, v25);
LABEL_42:
    v9 = v39;
LABEL_43:
    v33 = KeGetCurrentThread();
    --*((_WORD *)v33 + 243);
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    sub_140379A64(a1, v14, v34, v35, MemoryInformationLength, 0);
LABEL_44:
    v13 = v41;
    v8 = v40;
LABEL_45:
    ++v14;
  }
  while ( v14 < *(_DWORD *)(a1 + 6212) );
LABEL_46:
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  sub_1402AFC00(a1 + 6024);
  v36 = KeGetCurrentThread();
  v4 = (*((_WORD *)v36 + 243))++ == 0xFFFF;
  if ( v4 && *((struct _KTHREAD **)v36 + 19) != (struct _KTHREAD *)((char *)v36 + 152) )
    KiCheckForKernelApcDelivery();
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6596), 0xFFFFFFFF);
  sub_1402D0930((__int64)v43, 0LL);
  return v7;
}
