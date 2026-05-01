/*
 * XREFs of ??0XamlExplorerHost@@QE$AAA@XZ @ 0x180063BA0
 * Callers:
 *     ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x18006366C (-RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ.c)
 * Callees:
 *     ?s_LoadResources@XamlExplorerHost@@CAJXZ @ 0x180063C54 (-s_LoadResources@XamlExplorerHost@@CAJXZ.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z @ 0x1800641DC (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlExplorerHost::XamlExplorerHost(__int64 a1)
{
  int Resources; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &XamlExplorerHost::`vftable'{for `__IXamlExplorerHostPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &XamlExplorerHost::`vftable'{for `WindowsInternal::ComposableShell::Desktop::IDesktopAppHost'};
  *(_QWORD *)(a1 + 16) = &XamlExplorerHost::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &XamlExplorerHost::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &XamlExplorerHost::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 112);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_BYTE *)(a1 + 96) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 104));
  Resources = XamlExplorerHost::s_LoadResources();
  if ( Resources < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)Resources,
      v4);
  return a1;
}
