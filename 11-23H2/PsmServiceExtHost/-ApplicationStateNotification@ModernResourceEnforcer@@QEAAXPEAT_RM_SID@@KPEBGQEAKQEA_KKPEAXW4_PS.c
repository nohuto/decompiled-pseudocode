/*
 * XREFs of ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000E3E0
 * Callers:
 *     PsmHostStateNotification2 @ 0x18000CAB0 (PsmHostStateNotification2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180048F50 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004A9B8 (--2@YAPEAX_K@Z.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AU?$pair@PEAG_K@2@_K@Z @ 0x18004F1C0 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AU-$pair@PEAG_K@2@.c)
 *     ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXU?$pair@PEAG_K@2@_K@Z @ 0x18004F268 (-_Reinit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXU-$pair@PEAG_K@2@_K@Z.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     memmove_0 @ 0x1800534AE (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x180081CD0 (--1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 */

void __fastcall ModernResourceEnforcer::ApplicationStateNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        _WORD *a4,
        _DWORD *a5,
        _QWORD *Src,
        unsigned int a7,
        __int64 a8,
        unsigned int a9)
{
  char *v11; // rax
  char *v12; // rbx
  _WORD *v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rsi
  _WORD *v16; // rcx
  unsigned __int64 v17; // rax
  _WORD *v18; // rcx
  _WORD *v19; // r13
  PVOID Heap; // rdi
  PVOID v21; // rsi
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax
  _QWORD *v26; // rcx
  void *v27[2]; // [rsp+20h] [rbp-48h] BYREF

  if ( a9 > 1 || a7 == 1 && *a5 == 6 )
    return;
  v11 = (char *)operator new(0x98uLL);
  v12 = v11;
  if ( !v11 )
    return;
  v13 = v11 + 24;
  v14 = v12 + 136;
  *((_QWORD *)v12 + 1) = v13;
  *((_QWORD *)v12 + 2) = v13;
  *v13 = 0;
  *((_QWORD *)v12 + 14) = 0LL;
  *((_QWORD *)v12 + 15) = 0LL;
  *((_DWORD *)v12 + 32) = 0;
  *(_OWORD *)(v12 + 136) = 0LL;
  if ( a4 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a4[v15] );
  }
  else
  {
    v15 = 0LL;
  }
  v16 = (_WORD *)*((_QWORD *)v12 + 1);
  if ( v16 == v13 )
    v17 = 7LL;
  else
    v17 = (__int64)(*(_QWORD *)v13 - (_QWORD)v16) >> 1;
  if ( v15 > v17 )
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      v12 + 8,
      v27,
      v15);
    v19 = v27[0];
    if ( !v27[0] )
      goto LABEL_22;
    memcpy_0(v27[0], a4, 2 * v15);
    v19[v15] = 0;
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
      v12 + 8,
      v27,
      v15);
  }
  else
  {
    memmove_0(v16, a4, 2 * v15);
    v18 = (_WORD *)(2 * v15 + *((_QWORD *)v12 + 1));
    *((_QWORD *)v12 + 2) = v18;
    *v18 = 0;
  }
  if ( a7 <= 1 )
  {
    *((_DWORD *)v12 + 28) = *a5;
    *((_QWORD *)v12 + 15) = *Src;
    goto LABEL_25;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * a7);
  if ( !Heap )
  {
LABEL_22:
    ModernResourceEnforcer::ModernResourceEnforcerWorkItem::~ModernResourceEnforcerWorkItem((ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v12);
    operator delete(v12);
    return;
  }
  v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4LL * a7);
  if ( !v21 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_22;
  }
  memcpy_0(Heap, Src, 8LL * a7);
  *((_QWORD *)v12 + 15) = Heap;
  memcpy_0(v21, a5, 4LL * a7);
  *((_QWORD *)v12 + 14) = v21;
LABEL_25:
  *((_DWORD *)v12 + 33) = a9;
  *(_DWORD *)v12 = 2;
  *((_DWORD *)v12 + 32) = a7;
  v22 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v12 + 40) = *(_OWORD *)a2;
  v23 = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v12 + 56) = v22;
  v24 = *(_OWORD *)(a2 + 48);
  v25 = *(_DWORD *)(a2 + 64);
  *(_OWORD *)(v12 + 72) = v23;
  *(_OWORD *)(v12 + 88) = v24;
  *((_DWORD *)v12 + 26) = v25;
  *((_DWORD *)v12 + 27) = a3;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 224));
  v26 = *(_QWORD **)(a1 + 280);
  if ( *v26 != a1 + 272 )
    __fastfail(3u);
  *v14 = a1 + 272;
  *((_QWORD *)v12 + 18) = v26;
  *v26 = v14;
  *(_QWORD *)(a1 + 280) = v14;
  if ( (*(_BYTE *)(a1 + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    TpPostWork(*(_QWORD *)(a1 + 264));
    *(_DWORD *)(a1 + 296) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 224));
}
