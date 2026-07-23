/*
 * XREFs of ObWaitForMultipleObjects @ 0x1407A1400
 * Callers:
 *     sub_1407A1050 @ 0x1407A1050 (sub_1407A1050.c)
 *     sub_1407A12B0 @ 0x1407A12B0 (sub_1407A12B0.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     sub_14025032C @ 0x14025032C (sub_14025032C.c)
 *     sub_140251008 @ 0x140251008 (sub_140251008.c)
 *     sub_1402AC270 @ 0x1402AC270 (sub_1402AC270.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F3424 @ 0x1402F3424 (sub_1402F3424.c)
 *     sub_1402F344C @ 0x1402F344C (sub_1402F344C.c)
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObWaitForMultipleObjects(
        ULONG a1,
        unsigned __int64 *a2,
        char a3,
        WAIT_TYPE a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a7)
{
  char v7; // bl
  unsigned __int64 *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r8
  int v12; // edi
  struct _KTHREAD *CurrentThread; // r15
  struct _EX_RUNDOWN_REF *v14; // r10
  char v15; // r12
  ULONG_PTR v16; // rcx
  __int64 v17; // r12
  unsigned int v18; // r10d
  unsigned __int64 v19; // r11
  __int64 v20; // r9
  ULONG_PTR v21; // r15
  __int64 v22; // r13
  __int64 *v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // rax
  __int128 v26; // rt0
  unsigned __int8 v27; // tt
  int v28; // eax
  unsigned __int64 v29; // r15
  __int64 v30; // rsi
  WAIT_TYPE v31; // r13d
  __int64 v32; // rax
  ULONG v33; // esi
  bool v34; // zf
  _SLIST_ENTRY *v35; // r14
  unsigned int v36; // esi
  struct _EX_RUNDOWN_REF *v37; // r13
  PVOID *v38; // rbx
  unsigned __int64 v40; // rbx
  struct _KWAIT_BLOCK *Pool2; // rax
  int v42; // eax
  unsigned __int64 *v43; // r9
  unsigned int v44; // r10d
  unsigned int v45; // ebx
  __int64 v46; // rdx
  PVOID v47; // rcx
  unsigned __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rax
  void *v51; // rsp
  unsigned __int64 *v52; // rbx
  char v53; // r9
  signed __int32 v54[8]; // [rsp+0h] [rbp-40h] BYREF
  char v55; // [rsp+40h] [rbp+0h] BYREF
  char v56; // [rsp+41h] [rbp+1h]
  char v57; // [rsp+42h] [rbp+2h]
  BOOLEAN v58; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v60; // [rsp+50h] [rbp+10h]
  struct _KTHREAD *v61; // [rsp+58h] [rbp+18h]
  __int128 v62; // [rsp+60h] [rbp+20h] BYREF
  WAIT_TYPE WaitType; // [rsp+70h] [rbp+30h]
  ULONG Count; // [rsp+74h] [rbp+34h]
  unsigned int v65; // [rsp+78h] [rbp+38h]
  int v66; // [rsp+7Ch] [rbp+3Ch]
  ULONG_PTR v67; // [rsp+80h] [rbp+40h]
  __int64 v68; // [rsp+88h] [rbp+48h]
  unsigned __int64 *v69; // [rsp+90h] [rbp+50h]
  PLARGE_INTEGER Timeout; // [rsp+98h] [rbp+58h]
  struct _EX_RUNDOWN_REF *v71; // [rsp+A0h] [rbp+60h]
  PVOID Object[64]; // [rsp+B0h] [rbp+70h] BYREF
  _QWORD v73[64]; // [rsp+2B0h] [rbp+270h] BYREF

  WaitType = a4;
  v7 = a3;
  v55 = a3;
  v8 = a2;
  v69 = a2;
  v9 = a1;
  Count = a1;
  Timeout = a7;
  v62 = 0LL;
  memset(v73, 0, sizeof(v73));
  v10 = 0LL;
  memset(Object, 0, sizeof(Object));
  v58 = 0;
  v57 = 0;
  WaitBlockArray = 0LL;
  v12 = 0;
  v68 = 0LL;
  if ( (unsigned int)v9 > 3 )
  {
    if ( (unsigned int)v9 > 0xA )
    {
      v68 = (__int64)&unk_140CF5C00 + 128 * (unsigned __int64)(((int)v9 - 11) / 0xEu);
      Pool2 = (struct _KWAIT_BLOCK *)sub_140202234(v68);
      v40 = 48 * v9;
    }
    else
    {
      v40 = 48 * v9;
      Pool2 = (struct _KWAIT_BLOCK *)ExAllocatePool2(64LL, 48 * v9, 1834443343LL);
    }
    WaitBlockArray = Pool2;
    if ( Pool2 )
    {
      v57 = 1;
    }
    else
    {
      v58 = KeSetKernelStackSwapEnable(0);
      v50 = v40 + 15;
      if ( v40 + 15 < v40 )
        v50 = 0xFFFFFFFFFFFFFF0LL;
      v51 = alloca(v50 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (PKWAIT_BLOCK)&v55;
    }
    v7 = v55;
  }
  v56 = 0;
  CurrentThread = KeGetCurrentThread();
  v61 = CurrentThread;
  v14 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)CurrentThread + 23);
  v60 = v14;
  v71 = v14;
  v15 = 1;
  --*((_WORD *)CurrentThread + 242);
  if ( v14 == *((struct _EX_RUNDOWN_REF **)CurrentThread + 68) )
  {
    v16 = v14[174].Count;
    v67 = v16;
    goto LABEL_4;
  }
  v16 = sub_14066B3D8(v14);
  v67 = v16;
  if ( v16 )
  {
    v56 = 1;
    goto LABEL_4;
  }
  v11 = 0LL;
  if ( !(_DWORD)v9 )
  {
LABEL_4:
    v17 = 0LL;
    v18 = 1;
    v19 = 0x140000000uLL;
    while ( 1 )
    {
      v20 = (unsigned int)v17;
      v21 = v8[v17];
      if ( v7 || (v21 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v21 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v22 = v16;
      }
      else
      {
        v21 ^= 0xFFFFFFFF80000000uLL;
        v22 = qword_140C24F88;
      }
      if ( (v21 & 0x3FC) != 0 )
      {
        v23 = (__int64 *)sub_140733340((unsigned int *)v22, v21);
        v24 = v23;
        if ( v23 )
        {
          _m_prefetchw(v23);
          v62 = *(_OWORD *)v23;
LABEL_10:
          v11 = v62;
          while ( (v11 & 0x1FFFE) != 0 )
          {
            if ( (v11 & 1) == 0 )
            {
              sub_1407ED9FC(v22, v24, v11);
              _m_prefetchw(v24);
              v62 = *(_OWORD *)v24;
              goto LABEL_10;
            }
            *(_QWORD *)&v26 = v11;
            *((_QWORD *)&v26 + 1) = *((_QWORD *)&v62 + 1);
            v27 = _InterlockedCompareExchange128(v24, *((signed __int64 *)&v26 + 1), v11 - 2, (signed __int64 *)&v26);
            v25 = v26;
            v11 = v26;
            v62 = v26;
            if ( v27 )
            {
              if ( (unsigned __int16)((unsigned __int64)v25 >> 1) != 16 )
              {
                v10 = (v25 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                goto LABEL_16;
              }
              *(_QWORD *)&v62 = ((unsigned int)v11 ^ (2 * (unsigned int)((unsigned __int64)v25 >> 1) - 2)) & 0x1FFFE ^ v11;
              v10 = ((__int64)v62 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              sub_1402F3424((volatile signed __int64 *)v10, 32752);
              v49 = sub_140251008(v24, (signed __int64 *)&v62, 32752);
              v18 = 1;
              if ( v49 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)v10, -v49);
              goto LABEL_17;
            }
          }
          if ( sub_1402F344C(v22, v24) )
          {
            v10 = (*v24 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
            v62 = *(_OWORD *)v24;
            v42 = sub_1402AC270((unsigned __int64 *)v24);
            sub_1402F3424((volatile signed __int64 *)v10, v42 + 1);
            v18 = 1;
            _InterlockedExchangeAdd64(v24, 1uLL);
            _InterlockedOr(v54, 0);
            if ( *(_QWORD *)(v22 + 48) )
            {
              ExfUnblockPushLock((volatile __int64 *)(v22 + 48), 0LL);
LABEL_16:
              v18 = 1;
            }
LABEL_17:
            v20 = (unsigned int)v17;
            v7 = v55;
            v19 = 0x140000000uLL;
            goto LABEL_18;
          }
          v20 = (unsigned int)v17;
          v7 = v55;
          v18 = 1;
          v19 = 0x140000000uLL;
        }
      }
      if ( v21 )
      {
        sub_14025032C(v22, v21, *((_BYTE *)KeGetCurrentThread() + 562));
        v20 = (unsigned int)v17;
        v18 = 1;
        v19 = 0x140000000uLL;
      }
      v24 = 0LL;
LABEL_18:
      if ( !v24 )
      {
LABEL_105:
        v36 = -1073741816;
        goto LABEL_85;
      }
      v28 = DWORD2(v62) & 0x1FFFFFF;
      v66 = ++v12;
      v29 = v10 + 48;
      v73[v20] = v10 + 48;
      if ( v7 == 1 )
      {
        if ( (~v28 & 0x100000) != 0 )
        {
          v36 = -1073741790;
          goto LABEL_85;
        }
        if ( (*(_BYTE *)(v10 + 26) & 0x40) != 0 )
        {
          v48 = v10 - *(unsigned __int8 *)((*(_BYTE *)(v10 + 26) & 0x7F) + v19 + 12735552);
          if ( *(_BYTE *)(*(_QWORD *)v48 + 24LL) )
          {
            if ( *(_QWORD *)(*(_QWORD *)v48 + 16LL) == 1LL )
            {
              v36 = -1073700858;
LABEL_85:
              CurrentThread = v61;
              v15 = 1;
              goto LABEL_86;
            }
          }
        }
      }
      v30 = *(_QWORD *)(v19
                      + 8
                      * ((unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v10 + 24) ^ (unsigned __int64)BYTE1(v10))
                      + 13661328);
      v31 = WaitType;
      if ( WaitType != WaitAny && (POBJECT_TYPE)v30 == IoCompletionObjectType )
        goto LABEL_105;
      if ( (POBJECT_TYPE)v30 == qword_140C10D30 )
      {
        v36 = -1073741788;
        goto LABEL_85;
      }
      if ( dword_140D05010 )
      {
        sub_1405C5EC8(v10, 1, v18, 0x7457624Fu);
        v20 = (unsigned int)v17;
        v18 = 1;
        v19 = 0x140000000uLL;
      }
      v32 = *(_QWORD *)(v30 + 32);
      if ( (v32 & 1) == 0 )
        break;
      if ( (v32 & 2) != 0 )
      {
        v7 = v55;
        if ( (*(_DWORD *)(v30 + 176) & *(_DWORD *)(*(unsigned __int16 *)(v30 + 180) + v29)) != *(_DWORD *)(v30 + 176) )
        {
          v32 -= 3LL;
LABEL_28:
          v32 += v29;
          goto LABEL_29;
        }
        v32 = *(_QWORD *)(*(unsigned __int16 *)(v30 + 182) + v29);
      }
      else
      {
        v32 = *(_QWORD *)(v32 + v29 - 1);
      }
LABEL_29:
      Object[v20] = (PVOID)v32;
      v17 = (unsigned int)(v17 + 1);
      v33 = Count;
      if ( (unsigned int)v17 >= Count )
      {
        if ( v56 )
        {
          v56 = 0;
          sub_1402AD030(v60 + 139);
        }
        CurrentThread = v61;
        v34 = (*((_WORD *)v61 + 242))++ == 0xFFFF;
        if ( v34
          && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152)
          && !*((_WORD *)CurrentThread + 243) )
        {
          KiCheckForKernelApcDelivery();
        }
        v15 = 0;
        v55 = 0;
        if ( v31 == WaitAll && v33 > 1 )
        {
          v43 = (unsigned __int64 *)&Object[1];
          v44 = 1;
          while ( 2 )
          {
            v45 = v44;
            v11 = *v43;
            do
            {
              v46 = v45 - 1;
              v47 = Object[v46];
              if ( v11 > (unsigned __int64)v47 )
                break;
              if ( (PVOID)v11 == v47 )
              {
                v36 = -1073741776;
                goto LABEL_86;
              }
              Object[v45--] = v47;
            }
            while ( (_DWORD)v46 );
            Object[v45] = (PVOID)v11;
            ++v44;
            ++v43;
            if ( v44 < v33 )
              continue;
            break;
          }
        }
        v35 = (_SLIST_ENTRY *)WaitBlockArray;
        v36 = KeWaitForMultipleObjects(v33, Object, v31, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
        v65 = v36;
        v37 = v60;
        goto LABEL_37;
      }
      v16 = v67;
      v8 = v69;
    }
    if ( v32 < 0 )
      goto LABEL_29;
    goto LABEL_28;
  }
  v52 = v8;
  v53 = v55;
  while ( sub_1402F3558(*v52, v53) )
  {
    v11 = (unsigned int)(v11 + 1);
    ++v52;
    if ( (unsigned int)v11 >= (unsigned int)v9 )
    {
      v7 = v53;
      v16 = v67;
      goto LABEL_4;
    }
  }
  v36 = -1073741558;
LABEL_86:
  v35 = (_SLIST_ENTRY *)WaitBlockArray;
  v37 = v60;
LABEL_37:
  if ( v12 )
  {
    v38 = (PVOID *)&v73[v12];
    do
    {
      ObfDereferenceObjectWithTag(*--v38, 0x7457624Fu);
      --v12;
    }
    while ( v12 );
  }
  if ( v15 )
  {
    if ( v56 )
      sub_1402AD030(v37 + 139);
    sub_1402F9540((__int64)CurrentThread);
  }
  if ( v35 )
  {
    if ( v57 )
    {
      if ( v68 )
        sub_140203D88(v68, v35, v11);
      else
        ExFreePoolWithTag(v35, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v58);
    }
  }
  return v36;
}
