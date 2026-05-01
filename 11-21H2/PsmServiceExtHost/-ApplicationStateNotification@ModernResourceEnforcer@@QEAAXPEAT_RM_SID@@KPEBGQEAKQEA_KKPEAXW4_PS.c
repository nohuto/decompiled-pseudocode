/*
 * XREFs of ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180038390
 * Callers:
 *     PsmHostStateNotification2 @ 0x180038780 (PsmHostStateNotification2.c)
 * Callees:
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x1800385F4 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ??3@YAXPEAX@Z @ 0x18004DD94 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F7E8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004F874 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x180083558 (--1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
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
  __int64 v10; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // r12
  unsigned __int64 v15; // rbx
  char *v16; // rcx
  _QWORD *v17; // r13
  unsigned __int64 v18; // rax
  char *v19; // rbp
  size_t v20; // rbx
  char *v21; // rbx
  _QWORD *v22; // rcx
  void *v23; // rax
  char *v24; // rcx
  __int128 v25; // xmm1
  int v26; // eax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  _QWORD *v29; // rcx
  size_t v30; // rbx
  _WORD *v31; // rcx
  PVOID Heap; // rdi
  PVOID v33; // rbp
  void *v34[2]; // [rsp+20h] [rbp-48h] BYREF

  v10 = a2;
  if ( a9 > 1 || a7 == 1 && *a5 == 6 )
    return;
  v12 = operator new(0x98uLL);
  v13 = v12;
  if ( !v12 )
    return;
  v12[1] = v12 + 3;
  v14 = v12 + 17;
  v12[2] = v12 + 3;
  *((_WORD *)v12 + 12) = 0;
  v12[14] = 0LL;
  v12[15] = 0LL;
  *((_DWORD *)v12 + 32) = 0;
  *(_OWORD *)(v12 + 17) = 0LL;
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
  v16 = (char *)v12[1];
  v17 = v12 + 3;
  if ( v16 == (char *)(v12 + 3) )
    v18 = 7LL;
  else
    v18 = (__int64)(*v17 - (_QWORD)v16) >> 1;
  if ( v15 <= v18 )
  {
    v30 = 2 * v15;
    memmove_0(v16, a4, v30);
    v31 = (_WORD *)(v30 + v13[1]);
    v13[2] = v31;
    *v31 = 0;
  }
  else
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      v13 + 1,
      v34,
      v15);
    v19 = (char *)v34[0];
    if ( !v34[0] )
      goto LABEL_29;
    v20 = 2 * v15;
    memcpy_0(v34[0], a4, v20);
    v21 = &v19[v20];
    *(_WORD *)v21 = 0;
    v22 = (_QWORD *)v13[1];
    if ( v22 != v17 )
      operator delete(v22);
    v23 = v34[1];
    v24 = v19 - 2;
    v13[1] = v19;
    v10 = a2;
    v13[2] = v21;
    *v17 = &v24[2 * (_QWORD)v23];
  }
  if ( a7 > 1 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * a7);
    if ( Heap )
    {
      v33 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4LL * a7);
      if ( v33 )
      {
        memcpy_0(Heap, Src, 8LL * a7);
        v13[15] = Heap;
        memcpy_0(v33, a5, 4LL * a7);
        v13[14] = v33;
        v10 = a2;
        goto LABEL_17;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
LABEL_29:
    ModernResourceEnforcer::ModernResourceEnforcerWorkItem::~ModernResourceEnforcerWorkItem((ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v13);
    operator delete(v13);
    return;
  }
  *((_DWORD *)v13 + 28) = *a5;
  v13[15] = *Src;
LABEL_17:
  v25 = *(_OWORD *)(v10 + 16);
  *(_OWORD *)(v13 + 5) = *(_OWORD *)v10;
  *((_DWORD *)v13 + 33) = a9;
  v26 = *(_DWORD *)(v10 + 64);
  v27 = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(v13 + 7) = v25;
  *(_DWORD *)v13 = 2;
  v28 = *(_OWORD *)(v10 + 48);
  *(_OWORD *)(v13 + 9) = v27;
  *((_DWORD *)v13 + 32) = a7;
  *(_OWORD *)(v13 + 11) = v28;
  *((_DWORD *)v13 + 26) = v26;
  *((_DWORD *)v13 + 27) = a3;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 224));
  v29 = *(_QWORD **)(a1 + 280);
  if ( *v29 != a1 + 272 )
    __fastfail(3u);
  *v14 = a1 + 272;
  v13[18] = v29;
  *v29 = v14;
  *(_QWORD *)(a1 + 280) = v14;
  if ( (*(_BYTE *)(a1 + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    TpPostWork(*(_QWORD *)(a1 + 264));
    *(_DWORD *)(a1 + 296) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 224));
}
