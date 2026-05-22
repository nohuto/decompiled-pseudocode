/*
 * XREFs of ?SetViewData@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJPEAX0@Z @ 0x1800E7930
 * Callers:
 *     <none>
 * Callees:
 *     ?SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z @ 0x18001A23C (-SetHandleProperty@CResourceProxy@DirectComposition@@QEAAJIPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveViewProxy::SetViewData(
        DirectComposition::CHolographicExclusiveViewProxy *this,
        void *a2,
        void *a3)
{
  DirectComposition::CResourceProxy *v4; // rdi
  int v5; // ebx

  v4 = (DirectComposition::CHolographicExclusiveViewProxy *)((char *)this + 8);
  v5 = DirectComposition::CResourceProxy::SetHandleProperty(
         (DirectComposition::CHolographicExclusiveViewProxy *)((char *)this + 8),
         4u,
         a2);
  if ( v5 >= 0 )
    DirectComposition::CResourceProxy::SetHandleProperty(v4, 5u, a3);
  return (unsigned int)v5;
}
