/*
 * XREFs of ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00C816C
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0009010 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7908 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C79BC (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request,
        __int16 *OrigVerifierFlags)
{
  unsigned __int8 v7; // r8
  bool v8; // zf
  int IsDriverOwned; // ebx
  FxPkgIo *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(Request, (unsigned __int8 *)&irql, (unsigned __int8)Request);
  v8 = FxDriverGlobals->FxVerifierOn == 0;
  *OrigVerifierFlags = Request->m_VerifierFlags;
  if ( v8 )
    goto LABEL_6;
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsInCallerContext(Request, FxDriverGlobals);
  if ( IsDriverOwned < 0 )
    goto LABEL_8;
  if ( !FxDriverGlobals->FxVerifierOn )
  {
LABEL_6:
    IsDriverOwned = 0;
LABEL_7:
    Request->m_VerifierFlags &= 0xFFDEu;
    goto LABEL_8;
  }
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
    goto LABEL_7;
LABEL_8:
  FxNonPagedObject::Unlock(Request, (unsigned __int8)irql, v7);
  return (unsigned int)IsDriverOwned;
}
