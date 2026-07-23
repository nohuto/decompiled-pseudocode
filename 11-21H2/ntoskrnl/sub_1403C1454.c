/*
 * XREFs of sub_1403C1454 @ 0x1403C1454
 * Callers:
 *     sub_1403C13E4 @ 0x1403C13E4 (sub_1403C13E4.c)
 *     sub_140A590DC @ 0x140A590DC (sub_140A590DC.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     sub_1403C1A84 @ 0x1403C1A84 (sub_1403C1A84.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     sub_140A48020 @ 0x140A48020 (sub_140A48020.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

__int64 __fastcall sub_1403C1454(
        void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 a6,
        __int64 a7,
        __int64 a8,
        __int16 a9,
        int a10)
{
  char v10; // r14
  __int64 v11; // rbx
  char *v13; // rdi
  __int64 v14; // rcx
  int Object; // esi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rsi
  unsigned __int16 **v18; // r13
  _DWORD *v19; // rcx
  unsigned __int16 *v20; // rcx
  unsigned __int16 *v21; // rbx
  unsigned __int16 *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int16 *v25; // r8
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  char v34; // al
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v36; // r8d
  __int64 v37; // rbx
  unsigned int v38; // ecx
  int v39; // r9d
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  __int64 v43; // rax
  int v44; // ebx
  __int64 Pool3; // rax
  __int64 v46; // rcx
  __int16 v47; // bx
  unsigned __int16 *v48; // rcx
  void *v49; // rcx
  void *v50; // rcx
  __int64 Size; // [rsp+58h] [rbp-69h]
  __int128 v52; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v53[4]; // [rsp+78h] [rbp-49h] BYREF
  __int128 v54; // [rsp+98h] [rbp-29h]
  void *v55; // [rsp+A8h] [rbp-19h]
  int v56; // [rsp+B0h] [rbp-11h]
  int v57; // [rsp+B4h] [rbp-Dh]
  __int64 v58; // [rsp+B8h] [rbp-9h]
  int v61; // [rsp+120h] [rbp+5Fh] BYREF
  int v62; // [rsp+124h] [rbp+63h]

  v62 = HIDWORD(a4);
  v10 = a9;
  v11 = a7;
  v61 = 0;
  a6 = 0;
  v13 = 0LL;
  v52 = 0LL;
  if ( (_BYTE)a9 )
  {
    v17 = a2;
    a5 = a2;
  }
  else
  {
    v14 = *(unsigned int *)(a7 + 36);
    v61 = -1;
    a6 = -1;
    Object = sub_1403C1A84(v14, &v61, &a6);
    if ( Object )
      goto LABEL_55;
    a5 = sub_1402F4B70(0, a6, 0LL);
    v16 = a5;
    if ( !a5 )
    {
      Object = -1073741670;
      goto LABEL_55;
    }
    *a1 = 0LL;
    Object = ObCreateObject(0, (_DWORD)PsThreadType, 0, 0, 0, 2288, 0, 2288, (__int64)a1);
    if ( Object < 0 )
      goto LABEL_53;
    memset(*a1, 0, 0x8F0uLL);
    v17 = v16;
  }
  v13 = (char *)*a1;
  a9 = word_140D05018;
  v18 = (unsigned __int16 **)(v13 + 552);
  if ( v10 )
  {
    if ( *(_DWORD *)(v11 + 36) )
    {
      v19 = (_DWORD *)*((_QWORD *)v13 + 72);
    }
    else
    {
      v19 = &unk_140D0CAC0;
      *((_QWORD *)v13 + 72) = &unk_140D0CAC0;
      *v18 = (unsigned __int16 *)&unk_140D08790;
    }
    v19[1] = 0;
    *v19 = 2097153;
    memset(v19 + 2, 0, 0x100uLL);
    v20 = *v18;
    *((_DWORD *)v20 + 1) = 0;
    *(_DWORD *)v20 = 2097153;
    memset(v20 + 4, 0, 0x100uLL);
  }
  else
  {
    v43 = *(_QWORD *)(v11 + 192);
    LOBYTE(v52) = 3;
    DWORD2(v52) = *(unsigned __int16 *)(v43 + 138);
    Size = 8LL * (unsigned __int16)word_140D05018;
    v44 = 8 * (unsigned __int16)word_140D05018 + 8;
    *((_QWORD *)v13 + 72) = ExAllocatePool3(64, v44, 538993995, (unsigned int)&v52, 1);
    Pool3 = ExAllocatePool3(64, v44, 538993995, (unsigned int)&v52, 1);
    v46 = *((_QWORD *)v13 + 72);
    *v18 = (unsigned __int16 *)Pool3;
    if ( !v46 || !Pool3 )
    {
      Object = -1073741670;
LABEL_52:
      v16 = a5;
      if ( a5 )
      {
LABEL_53:
        if ( !a2 )
          sub_1402C1900(v16, 0, 0LL);
      }
LABEL_55:
      v49 = (void *)*((_QWORD *)v13 + 72);
      if ( v49 && !v10 )
      {
        ExFreePoolWithTag(v49, 0);
        *((_QWORD *)v13 + 72) = 0LL;
      }
      v50 = (void *)*((_QWORD *)v13 + 69);
      if ( v50 && !v10 )
      {
        ExFreePoolWithTag(v50, 0);
        *((_QWORD *)v13 + 69) = 0LL;
      }
      if ( *a1 && !v10 )
        ObfDereferenceObjectWithTag(*a1, 0x746C6644u);
      return (unsigned int)Object;
    }
    *(_DWORD *)(v46 + 4) = 0;
    v47 = a9;
    *(_WORD *)(v46 + 2) = a9;
    *(_WORD *)v46 = 1;
    memset((void *)(v46 + 8), 0, Size);
    v48 = *v18;
    v48[1] = v47;
    *((_DWORD *)v48 + 1) = 0;
    *v48 = 1;
    memset(v48 + 4, 0, Size);
  }
  v53[1] = a3;
  *((_DWORD *)v13 + 20) = 0;
  v55 = &unk_140D32B00;
  v54 = 0LL;
  v57 = a10 | 2;
  v56 = 0;
  v58 = 0LL;
  v53[0] = v17;
  v53[2] = 0LL;
  v53[3] = 0LL;
  Object = sub_140A48020(v13, v53);
  if ( Object < 0 )
    goto LABEL_52;
  sub_140292350((__int64)v13, 0LL, 0LL);
  *((_QWORD *)*a1 + 204) = a8;
  v21 = (unsigned __int16 *)*((_QWORD *)v13 + 72);
  memset(v21 + 4, 0, 8LL * *v21);
  *v21 = 1;
  v22 = *v18;
  memset(*v18 + 4, 0, 8LL * **v18);
  *v22 = 1;
  v23 = a7;
  KeAddProcessorAffinityEx(*v18, *(_DWORD *)(a7 + 36));
  v24 = *((_QWORD *)v13 + 72);
  v25 = *v18;
  *((_WORD *)v13 + 280) = *(unsigned __int8 *)(v23 + 208);
  *((_DWORD *)v13 + 49) = *(_DWORD *)(v23 + 36);
  sub_140300030(v24, *(_WORD *)(v24 + 2), v25);
  *((_WORD *)v13 + 292) = *(unsigned __int8 *)(v23 + 208);
  *((_DWORD *)v13 + 147) = *(_DWORD *)(v23 + 36);
  v28 = *(_DWORD *)(v23 + 36);
  *((_DWORD *)v13 + 29) |= 8u;
  *((_DWORD *)v13 + 134) = v28;
  v29 = *a1;
  v29[148] = a3;
  v29[164] = a3;
  v30 = (char *)*a1 + 1456;
  v30[1] = v30;
  *v30 = v30;
  v31 = (char *)*a1 + 1472;
  v31[1] = v31;
  *v31 = v31;
  *((_QWORD *)*a1 + 186) = 0LL;
  if ( v10 && !*(_DWORD *)(v23 + 36) )
    goto LABEL_18;
  if ( dword_140D06BA0 )
    _interlockedbittestandset((volatile signed __int32 *)v13, 0x16u);
  if ( v10 && !*(_DWORD *)(v23 + 36) || byte_140C24528 )
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)v13, 0x15u);
  v13[195] = 63;
  if ( v10 )
  {
    v13[388] = 2;
    v13[113] = 1;
    KeInterlockedSetProcessorAffinityEx(&unk_140D32C70, *(unsigned int *)(v23 + 36), v26, v27);
    v40 = (_QWORD *)qword_140D330E8;
    v41 = (char *)*a1 + 1336;
    if ( *(_UNKNOWN **)qword_140D330E8 == &unk_140D330E0 )
    {
      *v41 = &unk_140D330E0;
      v41[1] = v40;
      *v40 = v41;
      qword_140D330E8 = (__int64)v41;
      return (unsigned int)Object;
    }
LABEL_47:
    __fastfail(3u);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140D33360, 0LL);
  v32 = (_QWORD *)qword_140D330E8;
  v33 = (char *)*a1 + 1336;
  if ( *(_UNKNOWN **)qword_140D330E8 != &unk_140D330E0 )
    goto LABEL_47;
  *v33 = &unk_140D330E0;
  v33[1] = v32;
  *v32 = v33;
  qword_140D330E8 = (__int64)v33;
  v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140D33360, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v34 & 2) != 0 && (v34 & 4) == 0 )
    ExfTryToWakePushLock(qword_140D33360);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)qword_140D33360 - qword_140C50630 < 0x8000000000LL )
    v36 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v36 = -1;
  _disable();
  v37 = (__int64)CurrentThread + 1696;
  v38 = 0;
  while ( (*(_QWORD *)v37 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)qword_140D33360 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v37 + 18)
       || (*(_DWORD *)v37 & 1) != 0
       || *(_DWORD *)(v37 + 8) != v36 )
  {
    ++v38;
    v37 += 96LL;
    if ( v38 >= 6 )
      goto LABEL_42;
  }
  *(_BYTE *)(v37 + 18) = 0;
  if ( v37 )
  {
    if ( *(__int64 *)v37 < 0 )
    {
      *(_BYTE *)v37 |= 2u;
      _enable();
      sub_14034EE30(v37);
      _disable();
    }
    v39 = *(_DWORD *)(v37 + 88);
    *(_DWORD *)(v37 + 88) = 0;
    *(_BYTE *)(v37 + 17) = 0;
    *(_QWORD *)v37 = 0LL;
    *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v37 + 16);
    _enable();
    if ( v39 )
      sub_14022B568((ULONG_PTR)CurrentThread, (__int64)qword_140D33360, v39);
    return (unsigned int)Object;
  }
LABEL_42:
  if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)qword_140D33360, v36, 0LL);
  _enable();
  return (unsigned int)Object;
}
