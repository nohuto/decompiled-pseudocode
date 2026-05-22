/*
 * XREFs of ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18002A230
 * Callers:
 *     <none>
 * Callees:
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x18002A0E8 (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18002A2EC (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall RIMRawInputProvider::Create(
        struct IRawInputClient *a1,
        unsigned int a2,
        struct IRawInputProvider **a3)
{
  RIMRawInputProvider *v6; // rbx
  RIMRawInputProvider *v7; // rax
  RIMRawInputProvider *v8; // rbx
  RIMRawInputProvider *v9; // rsi
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0LL;
  if ( !a1 || !a3 )
  {
    v11 = -2147024809;
    v13 = 64LL;
    goto LABEL_15;
  }
  v7 = (RIMRawInputProvider *)malloc(0x108uLL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x108uLL);
    v9 = RIMRawInputProvider::RIMRawInputProvider(v8, a1);
  }
  else
  {
    v9 = 0LL;
  }
  v6 = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
    v13 = 71LL;
LABEL_15:
    v14 = v11;
    goto LABEL_16;
  }
  v10 = RIMRawInputProvider::Initialize(v9, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v6 = 0LL;
    *a3 = v9;
    v11 = 0;
    goto LABEL_8;
  }
  v14 = (unsigned int)v10;
  v13 = 74LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)v14,
    v15);
LABEL_8:
  if ( v6 )
    (*(void (__fastcall **)(RIMRawInputProvider *))(*(_QWORD *)v6 + 16LL))(v6);
  return v11;
}
