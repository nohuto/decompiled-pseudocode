/*
 * XREFs of ?FindAll@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x1400830F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAll(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = -2147467261;
    v4 = 775LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v3);
    return v3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 64LL))(*(_QWORD *)(a1 + 112));
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( !*a2 )
    {
      v3 = -2147467259;
      v4 = 777LL;
      goto LABEL_3;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x308,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
