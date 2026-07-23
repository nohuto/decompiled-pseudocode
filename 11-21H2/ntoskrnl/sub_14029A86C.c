/*
 * XREFs of sub_14029A86C @ 0x14029A86C
 * Callers:
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 * Callees:
 *     sub_14025E1EC @ 0x14025E1EC (sub_14025E1EC.c)
 *     sub_14025E30C @ 0x14025E30C (sub_14025E30C.c)
 *     sub_140294A38 @ 0x140294A38 (sub_140294A38.c)
 *     sub_140298BF0 @ 0x140298BF0 (sub_140298BF0.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14057C724 @ 0x14057C724 (sub_14057C724.c)
 *     sub_1405E805C @ 0x1405E805C (sub_1405E805C.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall sub_14029A86C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  NTSTATUS v13; // eax
  int v14; // r15d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  _QWORD *v19; // rax
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 result; // rax
  _QWORD *v24; // r8
  const char *i; // rax
  unsigned int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int Size; // [rsp+34h] [rbp-184h]
  __int64 v31; // [rsp+40h] [rbp-178h]
  _QWORD *v32; // [rsp+40h] [rbp-178h]
  __int64 v34; // [rsp+58h] [rbp-160h]
  _QWORD *v36; // [rsp+78h] [rbp-140h]
  struct _KTHREAD *v37; // [rsp+80h] [rbp-138h]
  char v38[2]; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v39; // [rsp+AAh] [rbp-10Eh]
  _QWORD *v40; // [rsp+B8h] [rbp-100h]
  _QWORD *v41; // [rsp+C0h] [rbp-F8h]
  SIZE_T v42; // [rsp+C8h] [rbp-F0h]
  __int64 v43; // [rsp+D0h] [rbp-E8h]
  ULONG_PTR v44[19]; // [rsp+E0h] [rbp-D8h] BYREF

  v7 = a4;
  v8 = a3;
  memset(v44, 0, sizeof(v44));
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  if ( a1 )
  {
    v14 = 1048603;
    v15 = 0LL;
    if ( (a7 & 2) != 0 && (qword_140D068D8 & 0x800000) != 0 )
    {
      v14 = 1048667;
      v15 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( (*((_DWORD *)CurrentThread + 29) & 0x100000) != 0 )
    {
      v14 |= 0x100040u;
      v16 = v15 | 0x800;
    }
    else
    {
      v16 = v15 & 0xFFFFFFFFFFFFF7FFuLL;
    }
    v17 = *(_QWORD **)(a2 + 384);
    v32 = v17;
    v18 = v17;
    Size = 0;
    if ( (v14 & 0x100040) == 0x100040 )
    {
      Size = sub_1405E805C(v16);
      v18 = (_QWORD *)(((unsigned __int64)v18 - Size) & 0xFFFFFFFFFFFFFFC0uLL);
      v17 = v32;
    }
    v36 = (_QWORD *)((unsigned __int64)(v18 - 5) & 0xFFFFFFFFFFFFFFF0uLL);
    v40 = v36;
    v31 = (__int64)(v36 - 4);
    v41 = v36 - 12;
    v12 = (__int64)(v36 - 166);
    v42 = (char *)v17 - (char *)(v36 - 166);
    ProbeForWrite(v36 - 166, v42, 0x10u);
    v19 = v36 - 8;
    *(_OWORD *)v19 = 0LL;
    v19[2] = 0LL;
    *(_DWORD *)v19 = 1;
    *((_DWORD *)v19 + 1) = 2;
    if ( (a7 & 1) != 0 )
      *((_DWORD *)v19 + 1) = 3;
    if ( (v14 & 0x100040) == 0x100040 )
    {
      v20 = v36 - 12;
      *v20 = -1232;
      v20[1] = *(_DWORD *)(a2 + 384) - v12;
      v20[2] = -1232;
      v20[3] = 1232;
      v20[4] = (_DWORD)v18 - ((_DWORD)v36 - 96);
      v20[5] = *(_DWORD *)(a2 + 384) - (_DWORD)v18;
      memset(v18, 0, Size);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        v18[1] = v16 | 0x8000000000000000uLL;
    }
    *(_DWORD *)(v12 + 48) = v14;
    sub_140298BF0(a2, a1, v12);
    *(_QWORD *)(((unsigned __int64)(v18 - 5) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18) = *(_QWORD *)(v12 + 152);
    v21 = *(_QWORD *)(v12 + 248);
    *v36 = v21;
    sub_140294A38(v21);
    v7 = a4;
    v8 = a3;
  }
  else
  {
    v34 = *(_QWORD *)(a2 + 208);
    v11 = v34 + 1296;
    v31 = v34 + 1296;
    if ( (((_BYTE)v34 + 16) & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 31) = *(_BYTE *)(v11 + 31);
    v12 = v34;
    if ( (*((_DWORD *)v37 + 29) & 0x100000) != 0 )
    {
      v13 = sub_14057C724(v34);
      if ( v13 < 0 )
        RtlRaiseStatus(v13);
    }
  }
  v22 = v31;
  *(_OWORD *)v31 = 0LL;
  *(_OWORD *)(v31 + 16) = 0LL;
  if ( (a7 & 4) != 0 )
  {
    *(_QWORD *)v31 = a5;
    *(_QWORD *)(v31 + 8) = v12;
    a5 = v31;
  }
  *(_QWORD *)v12 = v7;
  *(_QWORD *)(v12 + 8) = a5;
  *(_QWORD *)(v12 + 16) = a6;
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = a7;
  *(_QWORD *)(a2 + 384) = v12;
  *(_QWORD *)(a2 + 360) = qword_140D07188;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    sub_14025E30C(a2);
  LOBYTE(v22) = 1;
  result = sub_1402F5718(v22);
  if ( result >= qword_140C4EEB0 )
  {
    __sidt(v38);
    v24 = (_QWORD *)v39;
    for ( i = (const char *)v39; (unsigned __int64)i < v39 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v26 = 848;
    v27 = qword_140C4EEA0;
    v28 = (unsigned int)qword_140C4EEA8;
    while ( v26 >= 8 )
    {
      v27 = __ROR8__(v27 - *v24++, qword_140C4EEA8);
      v26 -= 8;
    }
    while ( v26 )
    {
      v27 = __ROR8__(v27 - *(unsigned __int8 *)v24, qword_140C4EEA8);
      v24 = (_QWORD *)((char *)v24 + 1);
      --v26;
    }
    if ( qword_140C4EEB8 != v27 )
    {
      if ( qword_140C4EE70 )
        goto LABEL_39;
      qword_140C4EE70 = (unsigned int)__ROR4__(150994945, 88);
      qword_140C4EE78 = 0LL;
      qword_140C4EE80 = 0LL;
      qword_140C4EE88 = 269LL;
      qword_140C4EE90 = v39;
    }
    if ( !qword_140C4EE70 )
    {
LABEL_42:
      LOBYTE(v28) = 1;
      v43 = sub_1402F5718(v28);
      result = v43 + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C4EEB0 = result;
      return result;
    }
LABEL_39:
    if ( Dpc.DeferredRoutine != DeferredRoutine )
    {
      Dpc.TargetInfoAsUlong = 275;
      Dpc.DeferredRoutine = DeferredRoutine;
      Dpc.DeferredContext = &Dpc;
      Dpc.DpcData = 0LL;
      Dpc.ProcessorHistory = 0LL;
    }
    qword_140C4EE98 = 1019616LL;
    KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    goto LABEL_42;
  }
  return result;
}
