/*
 * XREFs of ?Resume@CAnimationInstance@DirectComposition@@UEAAJXZ @ 0x18008C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationInstance::Resume(DirectComposition::CAnimationInstance *this)
{
  __int64 v1; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v3 = 0;
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(v1 + 8),
           11,
           &v3,
           1uLL);
}
