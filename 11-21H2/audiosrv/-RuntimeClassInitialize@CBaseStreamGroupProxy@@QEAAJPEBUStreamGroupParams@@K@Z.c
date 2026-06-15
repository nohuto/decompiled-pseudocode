/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x1800FA5D0
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800FA79C (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x1800F6F80 (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        int a3)
{
  void **v6; // r15
  const unsigned __int16 *v7; // r12
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  int v10; // ebx
  __int64 v11; // rbp
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  CResourcePriorityTracker *v15; // rax
  CResourcePriorityTracker *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (void **)((char *)this + 48);
  v7 = *(const unsigned __int16 **)a2;
  v8 = -1LL;
  do
    ++v8;
  while ( v7[v8] );
  *v6 = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 < v8 || !is_mul_ok(v9, 2uLL) )
  {
    v10 = -2147024362;
    goto LABEL_18;
  }
  v10 = CTCoAllocPolicy::Alloc(0LL, (v9 * (unsigned __int128)2uLL) >> 64, 2 * v9, v6);
  if ( v10 < 0 )
  {
LABEL_18:
    v13 = 168LL;
    goto LABEL_19;
  }
  StringCchCopyNExW((char *)*v6, v8 + 1, v7, v8);
  v11 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
  v10 = CTCoAllocPolicy::Alloc(v12, 1, v11 + 18, (void **)this + 5);
  if ( v10 >= 0 )
  {
    memcpy_0(*((void **)this + 5), *((const void **)a2 + 2), v11 + 18);
    v14 = *((_QWORD *)a2 + 7);
    if ( v14
      && (v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 16LL))(v14, (char *)this + 64), v10 < 0) )
    {
      v13 = 176LL;
    }
    else
    {
      *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 2);
      *((_QWORD *)this + 2) = *((_QWORD *)a2 + 3);
      *((_DWORD *)this + 15) = *((_DWORD *)a2 + 2);
      *((_QWORD *)this + 17) = 0LL;
      *((_DWORD *)this + 36) = 0;
      *((_BYTE *)this + 56) = *((_BYTE *)a2 + 49);
      *((_BYTE *)this + 57) = *((_BYTE *)a2 + 50);
      v15 = (CResourcePriorityTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v15 )
        v16 = CResourcePriorityTracker::CResourcePriorityTracker(v15, a3);
      else
        v16 = 0LL;
      *((_QWORD *)this + 9) = v16;
      if ( v16 )
        return 0LL;
      v10 = -2147024882;
      v13 = 188LL;
    }
  }
  else
  {
    v13 = 171LL;
  }
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
