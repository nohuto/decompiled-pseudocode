/*
 * XREFs of ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180040B94
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18003BB9C (--0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180040C48 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMCursorBroker::Create(struct ISystemInputRouter *a1, struct ICursorBroker **a2)
{
  DWMCursorBroker *v4; // rbx
  DWMCursorBroker *v5; // rax
  DWMCursorBroker *v6; // rbx
  DWMCursorBroker *v7; // rsi
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v5 = (DWMCursorBroker *)malloc(0x200uLL);
    v6 = v5;
    if ( v5 )
      memset_0(v5, 0, 0x200uLL);
    if ( v6 )
      v7 = DWMCursorBroker::DWMCursorBroker(v6, a1);
    else
      v7 = 0LL;
    v4 = v7;
    if ( v7 )
    {
      v8 = DWMCursorBroker::Initialize(v7);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v4 = 0LL;
        *a2 = v7;
        v9 = 0;
        goto LABEL_9;
      }
      v11 = (unsigned int)v8;
      v12 = 132LL;
    }
    else
    {
      v9 = -2147024882;
      v11 = 2147942414LL;
      v12 = 129LL;
    }
  }
  else
  {
    v9 = -2147024809;
    v11 = 2147942487LL;
    v12 = 120LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)v11,
    v13);
LABEL_9:
  if ( v4 )
    (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)v4 + 16LL))(v4);
  return v9;
}
