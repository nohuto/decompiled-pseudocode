/*
 * XREFs of ?WpRpcBindingFree@details@wil@@YAXPEAX@Z @ 0x18003FD54
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004001C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBG@Z @ 0x180050A44 (-s_adPublishApoTelemetry@@YAJPEBG@Z.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x180118630 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::WpRpcBindingFree(wil::details *this, void *a2)
{
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = this;
  RpcBindingFree(&Binding);
}
