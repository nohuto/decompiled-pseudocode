/*
 * XREFs of ?CertCloseStoreNoParam@details@wil@@YAXPEAX@Z @ 0x18056AFE0
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CertCloseStoreNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18056AE68 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CertCloseStoreNoParam@details@wil@@YAX0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::CertCloseStoreNoParam(wil::details *this, void *a2)
{
  CertCloseStore(this, 0);
}
