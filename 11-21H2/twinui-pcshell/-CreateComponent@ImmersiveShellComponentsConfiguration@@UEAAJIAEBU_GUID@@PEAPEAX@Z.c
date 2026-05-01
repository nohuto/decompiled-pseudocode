/*
 * XREFs of ?CreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1803AFEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?at@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@_K@Z @ 0x1803B1510 (-at@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo.c)
 */

__int64 __fastcall ImmersiveShellComponentsConfiguration::CreateComponent(
        ImmersiveShellComponentsConfiguration *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v7; // rax
  int v8; // r10d
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::at((char *)this + 24, a2);
  v8 = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 8LL);
  if ( (v8 & 4) != 0 )
  {
    v9 = 96LL;
  }
  else if ( (v8 & 2) != 0 )
  {
    v9 = 104LL;
  }
  else
  {
    v9 = ~(_BYTE)v8 & 8 | 0x70LL;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, void **))(**(_QWORD **)((char *)this + v9)
                                                                                  + 24LL))(
          *(_QWORD *)((char *)this + v9),
          v7,
          a3,
          a4);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x363,
    (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
