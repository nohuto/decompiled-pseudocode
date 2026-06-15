/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ @ 0x18005D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync(void)
{
  __int64 v0; // rax
  int v1; // eax
  int v2[14]; // [rsp+20h] [rbp-48h] BYREF
  int *v3; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v0 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
  *(_QWORD *)v2 = &off_180176778;
  v3 = v2;
  v1 = CSerialWorkQueue::QueueWorkItem(v0, v2);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x96E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v1,
      v2[0]);
}
