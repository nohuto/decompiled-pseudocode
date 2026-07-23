/*
 * XREFs of sub_14024D180 @ 0x14024D180
 * Callers:
 *     sub_14024D0D4 @ 0x14024D0D4 (sub_14024D0D4.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     RtlFindClearBitsAndSetEx @ 0x14029E780 (RtlFindClearBitsAndSetEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14024D180(unsigned int a1)
{
  unsigned __int64 v1; // r12
  __int64 v2; // r13
  unsigned __int64 v3; // r8
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // r11
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 ClearBitsAndSet; // rdi
  __int64 v19; // rsi
  struct _KTHREAD *v20; // r15
  unsigned int v21; // ecx
  char *v22; // rbx
  __int64 v23; // r8
  int v24; // r9d
  bool v25; // zf
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r10
  __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  unsigned __int64 *v34; // r9
  unsigned int v35; // r9d
  __int64 v36; // rcx
  unsigned int v37; // r10d
  unsigned __int64 *v38; // r11
  __int64 v39; // rax
  unsigned int v40; // r10d
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rdi
  struct _KTHREAD *v47; // rsi
  unsigned int v48; // ecx
  char *v49; // rbx
  __int64 v50; // r8
  int v51; // r9d
  unsigned __int64 v52; // [rsp+40h] [rbp-28h]

  v1 = a1;
  v2 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
  v4 = v2 + 760;
  v5 = *(_QWORD *)(v2 + 760);
  v6 = *(_QWORD *)(v2 + 768);
  v3 = *(_QWORD *)(v2 + 776);
  v52 = v5;
  v7 = v3 & -(__int64)(v3 < v5);
  v8 = v5 - 1;
  if ( (_DWORD)v1 )
  {
    while ( v8 - v7 + 1 < v1 )
    {
      v15 = -1LL;
LABEL_99:
      if ( !v7 )
        goto LABEL_12;
      v6 = *(_QWORD *)(v2 + 768);
      v45 = v1 + v3;
      if ( v1 + v3 > v5 )
        v45 = v5;
      v8 = v45 - 1;
      v7 = 0LL;
    }
    v9 = v8 - v1 + 1;
    v10 = v6 + 8 * (v9 >> 6);
    v11 = (unsigned __int64 *)(v6 + 8 * (v7 >> 6));
    v12 = *v11 | ((1LL << (v7 & 0x3F)) - 1);
    if ( v1 > 0x7F )
    {
      v30 = v10 + 8;
      if ( (v9 & 0x3F) == 0 )
        v30 = v6 + 8 * ((v8 - v1 + 1) >> 6);
      if ( v12 )
      {
        if ( *++v11 )
          goto LABEL_64;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v31, v12);
        if ( v25 )
          v32 = 64;
        else
          v32 = 63 - v31;
      }
      else
      {
        v32 = 0;
      }
LABEL_68:
      v15 = (((__int64)v11 - v6) >> 3 << 6) - v32;
      if ( v15 > v9 )
      {
LABEL_43:
        v15 = -1LL;
LABEL_44:
        v3 = *(_QWORD *)(v2 + 776);
        v5 = v52;
        goto LABEL_99;
      }
      v34 = &v11[(v1 - v32) >> 6];
      while ( ++v11 != v34 )
      {
        if ( *v11 )
          goto LABEL_64;
      }
      v35 = ((_BYTE)v1 - (_BYTE)v32) & 0x3F;
      if ( (((_BYTE)v1 - (_BYTE)v32) & 0x3F) != 0 )
      {
        v25 = !_BitScanForward64((unsigned __int64 *)&v36, *v11);
        if ( v25 )
          LODWORD(v36) = 64;
        if ( (unsigned int)v36 < v35 )
        {
LABEL_64:
          while ( (unsigned __int64)v11 <= v30 )
          {
            if ( !*++v11 )
            {
              v25 = !_BitScanReverse64((unsigned __int64 *)&v33, *(v11 - 1));
              if ( v25 )
                v32 = 64;
              else
                v32 = 63 - v33;
              goto LABEL_68;
            }
          }
LABEL_42:
          v15 = -1LL;
          goto LABEL_44;
        }
      }
LABEL_11:
      if ( v15 != -1LL )
      {
LABEL_12:
        v16 = v15;
        v4 = v2 + 760;
        goto LABEL_13;
      }
      goto LABEL_44;
    }
    v13 = 64;
    if ( v1 < 0x40 )
    {
      if ( v1 <= 1 )
      {
        while ( 1 )
        {
          if ( v12 != -1 )
          {
            _BitScanForward64(&v14, ~v12);
            v15 = v14 + (((__int64)v11 - v6) >> 3 << 6);
            goto LABEL_10;
          }
          if ( (unsigned __int64)++v11 > v10 )
            break;
          v12 = *v11;
        }
        v15 = -1LL;
        goto LABEL_44;
      }
      v37 = 0;
      v38 = (unsigned __int64 *)(v6 + 8 * (v8 >> 6));
      while ( 1 )
      {
        if ( v12 == -1 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v11 > v10 )
              goto LABEL_43;
            v12 = *v11;
            if ( *v11 != -1LL )
            {
              v37 = 0;
              break;
            }
          }
        }
        v25 = !_BitScanForward64((unsigned __int64 *)&v39, v12);
        if ( v25 )
          LODWORD(v39) = 64;
        if ( v37 + (unsigned int)v39 >= v1 )
          break;
        v40 = v1;
        v41 = ~v12;
        while ( 1 )
        {
          v41 &= v41 >> (v40 >> 1);
          if ( !v41 )
            break;
          v40 -= v40 >> 1;
          if ( v40 <= 1 )
          {
            _BitScanForward64(&v42, v41);
            v43 = (unsigned int)v42;
            goto LABEL_88;
          }
        }
        if ( v11 == v38 )
          goto LABEL_43;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v44, v12);
        if ( v25 )
          v37 = 64;
        else
          v37 = 63 - v44;
        v12 = *++v11;
      }
      v43 = -(__int64)v37;
LABEL_88:
      v15 = (((__int64)v11 - *(_QWORD *)(v2 + 768)) >> 3 << 6) + v43;
LABEL_10:
      if ( v15 > v9 )
        goto LABEL_43;
      goto LABEL_11;
    }
    while ( 1 )
    {
      while ( v12 < 0 )
      {
        if ( (unsigned __int64)++v11 > v10 )
          goto LABEL_42;
        v12 = *v11;
      }
      v25 = !_BitScanReverse64((unsigned __int64 *)&v27, v12);
      if ( !v25 )
        v13 = 63 - v27;
      v15 = (((((__int64)v11 - v6) >> 3) + 1) << 6) - v13;
      if ( v15 > v9 )
        goto LABEL_42;
      v28 = v1 - v13;
      if ( v1 == v13 )
        goto LABEL_11;
      v12 = *++v11;
      if ( v28 >= 0x40 )
      {
        if ( *v11 )
          goto LABEL_39;
        v28 -= 64LL;
        if ( !v28 )
          goto LABEL_11;
        v12 = *++v11;
      }
      v25 = !_BitScanForward64(&v29, v12);
      if ( v25 )
        v29 = 64LL;
      if ( v29 >= v28 )
        goto LABEL_11;
LABEL_39:
      v13 = 64;
    }
  }
  v16 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 == -1LL )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 752LL, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v4, v1, v16);
  if ( ClearBitsAndSet == -1 )
  {
    v46 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 752LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v46);
    v47 = KeGetCurrentThread();
    if ( (unsigned __int64)(v46 - qword_140C50630) >= 0x8000000000LL )
      v48 = -1;
    else
      v48 = sub_140287F30(*((_QWORD *)v47 + 23));
    _disable();
    v49 = (char *)v47 + 1696;
    v50 = 0LL;
    while ( (*(_QWORD *)v49 & 0x7FFFFFFFFFFFFFFCLL) != (v46 & 0x7FFFFFFFFFFFFFFCLL)
         || !v49[18]
         || (*(_DWORD *)v49 & 1) != 0
         || *((_DWORD *)v49 + 2) != v48 )
    {
      v50 = (unsigned int)(v50 + 1);
      v49 += 96;
      if ( (unsigned int)v50 >= 6 )
        goto LABEL_122;
    }
    v49[18] = 0;
    if ( v49 )
    {
      if ( *(__int64 *)v49 < 0 )
      {
        *v49 |= 2u;
        _enable();
        sub_14034EE30(v49, 0x7FFFFFFFFFFFFFFCLL, v50);
        _disable();
      }
      v51 = *((_DWORD *)v49 + 22);
      *((_DWORD *)v49 + 22) = 0;
      v49[17] = 0;
      *(_QWORD *)v49 = 0LL;
      *((_BYTE *)v47 + 792) |= 1 << v49[16];
      _enable();
      if ( v51 )
        sub_14022B568((ULONG_PTR)v47, v46, v51);
      goto LABEL_125;
    }
LABEL_122:
    if ( (*((_DWORD *)v47 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v47, v46, v48, 0LL);
    _enable();
LABEL_125:
    v25 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v25 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  if ( (_DWORD)v1 == 1 )
    *(_QWORD *)(v2 + 776) = ClearBitsAndSet + 1;
  *(_DWORD *)(v2 + 800) += v1;
  v19 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 752LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v19);
  v20 = KeGetCurrentThread();
  if ( (unsigned __int64)(v19 - qword_140C50630) < 0x8000000000LL )
    v21 = sub_140287F30(*((_QWORD *)v20 + 23));
  else
    v21 = -1;
  _disable();
  v22 = (char *)v20 + 1696;
  v23 = 0LL;
  while ( (*(_QWORD *)v22 & 0x7FFFFFFFFFFFFFFCLL) != (v19 & 0x7FFFFFFFFFFFFFFCLL)
       || !v22[18]
       || (*(_DWORD *)v22 & 1) != 0
       || *((_DWORD *)v22 + 2) != v21 )
  {
    v23 = (unsigned int)(v23 + 1);
    v22 += 96;
    if ( (unsigned int)v23 >= 6 )
      goto LABEL_36;
  }
  v22[18] = 0;
  if ( v22 )
  {
    if ( *(__int64 *)v22 < 0 )
    {
      *v22 |= 2u;
      _enable();
      sub_14034EE30(v22, 0x7FFFFFFFFFFFFFFCLL, v23);
      _disable();
    }
    v24 = *((_DWORD *)v22 + 22);
    *((_DWORD *)v22 + 22) = 0;
    v22[17] = 0;
    *(_QWORD *)v22 = 0LL;
    *((_BYTE *)v20 + 792) |= 1 << v22[16];
    _enable();
    if ( v24 )
      sub_14022B568((ULONG_PTR)v20, v19, v24);
    goto LABEL_31;
  }
LABEL_36:
  if ( (*((_DWORD *)v20 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, v19, v21, 0LL);
  _enable();
LABEL_31:
  v25 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v25 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return qword_140C4F608 + (ClearBitsAndSet << 21);
}
