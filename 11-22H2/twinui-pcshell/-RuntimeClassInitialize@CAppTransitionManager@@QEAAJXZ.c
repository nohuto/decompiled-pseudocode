/*
 * XREFs of ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x1801381A8
 * Callers:
 *     ??$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801142A4 (--$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801383A0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::RuntimeClassInitialize(CAppTransitionManager *this)
{
  unsigned __int128 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPMALLOC ppMalloc; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v3) = CObjectWithThreadUseDetection::InitApartmentId((CAppTransitionManager *)((char *)this + 120));
  if ( (v3 & 0x80000000) != 0LL )
  {
    v14 = 22LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  else
  {
    v5 = 0;
    while ( !v5 )
    {
      v6 = *(_QWORD *)&xmmword_180819548[1];
      if ( v6 )
        (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(*(_QWORD *)v6 + 8LL))(
          v6,
          *((_QWORD *)&v2 + 1),
          v4,
          4294967294LL);
      v7 = *((_QWORD *)this + 7);
      LODWORD(v3) = 0;
      v4 = *((_QWORD *)this + 9);
      if ( v7 != v4 )
        goto LABEL_23;
      v8 = v7 + 1;
      LODWORD(v3) = -2147024774;
      if ( (unsigned __int64)(v7 + 1) <= 0xFFFFFFFE )
      {
        v3 = 0LL;
        if ( v8 > v4 )
        {
          v2 = v4 * (unsigned __int128)2u;
          if ( !is_mul_ok(v4, 2uLL) )
            goto LABEL_31;
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
          if ( is_mul_ok(v8, 0x20uLL) )
          {
            v10 = (char *)CoTaskMemRealloc(*((LPVOID *)this + 6), 32 * v8);
            if ( v10 )
            {
              if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
              {
                v3 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v10);
                ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
              }
              if ( v3 > v9 )
                memset_0(&v10[v9], 0, v3 - v9);
              LODWORD(v3) = 0;
              *((_QWORD *)this + 9) = v8;
              *((_QWORD *)this + 6) = v10;
            }
            else
            {
              LODWORD(v3) = -2147024882;
            }
          }
          else
          {
LABEL_31:
            LODWORD(v3) = -2147024362;
          }
        }
      }
      v7 = *((_QWORD *)this + 7);
      if ( (v3 & 0x80000000) == 0LL )
      {
LABEL_23:
        v11 = *((_QWORD *)this + 6);
        v12 = v7 + 1;
        *((_QWORD *)this + 7) = v12;
        *((_QWORD *)&v2 + 1) = 32 * v12 + v11 - 32;
        if ( *((_QWORD *)&v2 + 1) )
        {
          **((_OWORD **)&v2 + 1) = xmmword_180819548[0];
          *(_OWORD *)(*((_QWORD *)&v2 + 1) + 16LL) = xmmword_180819548[1];
        }
      }
      v5 = 1;
      if ( (v3 & 0x80000000) != 0LL )
      {
        v14 = 28LL;
        goto LABEL_29;
      }
    }
    return 0LL;
  }
}
