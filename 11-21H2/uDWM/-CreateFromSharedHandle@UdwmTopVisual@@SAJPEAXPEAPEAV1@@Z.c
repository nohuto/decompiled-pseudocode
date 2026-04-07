/*
 * XREFs of ?CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037184
 * Callers:
 *     ?CreateSharedVisual@UdwmDcompVisual@@AEAAJAEAUSharedDwmDcompVisual@@_N@Z @ 0x180036F40 (-CreateSharedVisual@UdwmDcompVisual@@AEAAJAEAUSharedDwmDcompVisual@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180026FFC (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z @ 0x1800373E0 (-InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UdwmTopVisual::CreateFromSharedHandle(void *a1, struct UdwmTopVisual **a2)
{
  CVisual *v4; // rax
  CVisual *v5; // rsi
  CBaseObject *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (int)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    256LL);
  v5 = v4;
  if ( !v4 )
  {
    v6 = 0LL;
    v8 = -2147024882;
    v10 = 2147942414LL;
    v11 = 232LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)v10);
    goto LABEL_5;
  }
  memset_0(v4, 0, 0x100uLL);
  CVisual::CVisual(v5);
  *(_QWORD *)v5 = &UdwmTopVisual::`vftable';
  *((_QWORD *)v5 + 31) = 0LL;
  v6 = v5;
  v7 = CVisual::InitializeFromSharedHandle(v5, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 234LL;
    goto LABEL_11;
  }
  v6 = 0LL;
  *a2 = v5;
  v8 = 0;
LABEL_5:
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
