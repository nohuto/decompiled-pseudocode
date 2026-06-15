/*
 * XREFs of ?InitializeDeviceGraphManager@@YAJXZ @ 0x18004FD0C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x18004FD40 (--$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x18004FEC8 (--$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@$$V@Details@WRL@Microsoft@@YAJP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 InitializeDeviceGraphManager(void)
{
  int v0; // ebx
  int v1; // eax
  __int64 v3; // rdx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager,>();
  if ( v0 < 0 )
  {
    v3 = 2141LL;
  }
  else
  {
    v1 = Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixManager,IProcessSubmixManager,>();
    v0 = v1;
    if ( v1 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v1,
      v4);
    v3 = 2144LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v0,
    v4);
  return (unsigned int)v0;
}
