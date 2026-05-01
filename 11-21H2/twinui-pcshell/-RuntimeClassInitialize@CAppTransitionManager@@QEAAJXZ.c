/*
 * XREFs of ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x1800B0444
 * Callers:
 *     ??$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AE424 (--$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180103744 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::RuntimeClassInitialize(CAppTransitionManager *this)
{
  unsigned __int128 v2; // rax
  int inited; // ebx
  unsigned __int64 v4; // r8
  int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  char *v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPMALLOC ppMalloc; // [rsp+50h] [rbp+8h] BYREF

  inited = CObjectWithThreadUseDetection::InitApartmentId((CAppTransitionManager *)((char *)this + 120));
  if ( inited < 0 )
  {
    v13 = 21LL;
    goto LABEL_28;
  }
  v5 = 0;
  do
  {
    if ( v5 )
      return 0LL;
    v6 = *(_QWORD *)&xmmword_180687908[1];
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(*(_QWORD *)v6 + 8LL))(
        v6,
        *((_QWORD *)&v2 + 1),
        v4,
        4294967294LL);
    v7 = *((_QWORD *)this + 7);
    inited = 0;
    v4 = *((_QWORD *)this + 9);
    if ( v7 == v4 )
    {
      v8 = v7 + 1;
      inited = -2147024774;
      if ( v8 > 0xFFFFFFFE || (inited = 0, v8 <= v4) )
      {
        if ( inited < 0 )
          goto LABEL_25;
      }
      else
      {
        v2 = v4 * (unsigned __int128)2u;
        if ( !is_mul_ok(v4, 2uLL) )
          goto LABEL_30;
        v4 += 4096LL;
        if ( *((_QWORD *)this + 9) <= 0x1000uLL )
          v4 = v2;
        if ( v8 <= v4 )
        {
          v8 = v4;
          if ( v4 > 0xFFFFFFFE )
            v8 = 4294967294LL;
        }
        v2 = v8 * (unsigned __int128)0x20uLL;
        v9 = 32 * v8;
        if ( !is_mul_ok(v8, 0x20uLL) )
        {
LABEL_30:
          inited = -2147024362;
          goto LABEL_25;
        }
        v10 = (char *)CoTaskMemRealloc(*((LPVOID *)this + 6), 32 * v8);
        if ( !v10 )
        {
          inited = -2147024882;
          goto LABEL_25;
        }
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v11 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v10);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          if ( v11 > v9 )
            memset_0(&v10[v9], 0, v11 - v9);
        }
        *((_QWORD *)this + 6) = v10;
        inited = 0;
        *((_QWORD *)this + 9) = v8;
      }
    }
    ++*((_QWORD *)this + 7);
    *((_QWORD *)&v2 + 1) = 32LL * *((_QWORD *)this + 7) + *((_QWORD *)this + 6) - 32LL;
    if ( *((_QWORD *)&v2 + 1) )
    {
      **((_OWORD **)&v2 + 1) = xmmword_180687908[0];
      *(_OWORD *)(*((_QWORD *)&v2 + 1) + 16LL) = xmmword_180687908[1];
    }
LABEL_25:
    v5 = 1;
  }
  while ( inited >= 0 );
  v13 = 27LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)inited);
  return (unsigned int)inited;
}
