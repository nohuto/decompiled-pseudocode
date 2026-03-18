/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800D266C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800D1B80 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800B3520 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1800D26EC (--0CExpressionManager@@AEAA@XZ.c)
 *     ?PreInitClass@Time@@SAJXZ @ 0x1800D2AEC (-PreInitClass@Time@@SAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // ebx
  CExpressionManager *v3; // rax
  CExpressionManager *v4; // rax
  __int64 v5; // rcx
  struct CExpressionManager *v6; // rdi
  bool v7; // zf
  int inited; // eax
  __int64 v9; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)DefaultHeap::AllocClear(0x2D0uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v4 = CExpressionManager::CExpressionManager(v3);
  v6 = v4;
  if ( v4 )
  {
    CMILRefCountImpl::AddReference((CExpressionManager *)((char *)v4 + 8));
    v7 = byte_1803E5CB8 == 0;
    *a1 = v6;
    if ( v7 )
    {
      byte_1803E5CB8 = 1;
      inited = Time::PreInitClass();
      v2 = inited;
      if ( inited < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, inited, 0x20u, 0LL);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v2;
}
