/*
 * XREFs of imp_WdfMemoryCreateFromLookaside @ 0x1C000D8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfMemoryCreateFromLookaside(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFLOOKASIDE__ *Lookaside,
        WDFMEMORY__ **Memory)
{
  FxLookasideList *v4; // rcx
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // rcx
  void *retaddr; // [rsp+48h] [rbp+18h]
  FxLookasideList *pLookaside; // [rsp+50h] [rbp+20h] BYREF
  FxMemoryObject *pMemory; // [rsp+60h] [rbp+30h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+68h] [rbp+38h] BYREF

  hMemory = 0LL;
  pLookaside = 0LL;
  pMemory = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Lookaside,
    0x1009u,
    (void **)&pLookaside);
  v4 = pLookaside;
  if ( !Memory )
    FxVerifierNullBugCheck(pLookaside->m_Globals, retaddr);
  *Memory = 0LL;
  result = ((__int64 (__fastcall *)(FxLookasideList *, FxMemoryObject **))v4->Allocate)(v4, &pMemory);
  if ( (int)result >= 0 )
  {
    v6 = FxObject::Commit(pMemory, &pLookaside->m_MemoryAttributes, (void **)&hMemory, 0LL, 1u);
    if ( v6 < 0 )
    {
      FxObject::ClearEvtCallbacks(pMemory);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
    }
    else
    {
      *Memory = hMemory;
    }
    return (unsigned int)v6;
  }
  return result;
}
