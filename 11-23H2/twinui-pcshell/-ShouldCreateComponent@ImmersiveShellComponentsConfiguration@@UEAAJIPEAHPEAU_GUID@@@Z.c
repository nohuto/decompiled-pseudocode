/*
 * XREFs of ?ShouldCreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x18048AB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?at@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@_K@Z @ 0x18048ADEC (-at@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo.c)
 */

__int64 __fastcall ImmersiveShellComponentsConfiguration::ShouldCreateComponent(
        ImmersiveShellComponentsConfiguration *this,
        unsigned int a2,
        int *a3,
        struct _GUID *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(_QWORD); // rax
  int v9; // eax

  v6 = std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::at((char *)this + 24, a2);
  *a3 = 1;
  *a4 = *(struct _GUID *)v6;
  v7 = *(_QWORD *)(v6 + 16);
  v8 = *(__int64 (__fastcall **)(_QWORD))(v7 + 16);
  if ( v8 )
    v9 = v8(*(unsigned int *)(v7 + 12));
  else
    v9 = *(_DWORD *)(v7 + 12);
  if ( (v9 & s_exclusionsInEffect) != 0 )
    *a3 = 0;
  return 0LL;
}
