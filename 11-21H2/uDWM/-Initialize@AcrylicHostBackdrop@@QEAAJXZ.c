/*
 * XREFs of ?Initialize@AcrylicHostBackdrop@@QEAAJXZ @ 0x180036DA4
 * Callers:
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024870 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x180036E64 (-Initialize@UdwmDcompVisual@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AcrylicHostBackdrop::Initialize(AcrylicHostBackdrop *this)
{
  __int64 v2; // rax
  UdwmDcompVisual *v3; // rbx
  CBaseObject *v4; // rcx
  int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  v3 = (UdwmDcompVisual *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)v2 = &UdwmDcompVisual::`vftable';
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v2 + 72) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
  {
    if ( *((_BYTE *)this + 24) )
      return 0LL;
    v5 = UdwmDcompVisual::Initialize(v3);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 12LL;
  }
  else
  {
    v5 = -2147024882;
    v7 = 9LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"clientcore\\windows\\dwm\\udwm\\acrylichostbackdrop.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
