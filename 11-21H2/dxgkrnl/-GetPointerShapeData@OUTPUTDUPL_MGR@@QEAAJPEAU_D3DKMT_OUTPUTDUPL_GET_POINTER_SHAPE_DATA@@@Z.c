/*
 * XREFs of ?GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C032152C
 * Callers:
 *     _lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_ @ 0x1C031EEB0 (_lambda_323a6f2bac221de0325809d248e0690f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C019F5D0 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C02247CE (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0321960 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0321EF8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C03268DC (-GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetPointerShapeData(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *a2)
{
  struct DXGFASTMUTEX *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  unsigned int PointerShapeData; // ebx
  OUTPUTDUPL_MGR *v12; // rcx
  _BYTE v14[16]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v15[12]; // [rsp+30h] [rbp-29h] BYREF

  v4 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5, v7, v8);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v4, CurrentProcess, 0LL);
  if ( ContextForProcess )
    PointerShapeData = OUTPUTDUPL_CONTEXT::GetPointerShapeData(*ContextForProcess, a2);
  else
    PointerShapeData = -1073741275;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    memset(v15, 0, 0x58uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v12, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v15);
    HIDWORD(v15[6]) = a2->VidPnSourceId;
    v15[7] = *(_QWORD *)&a2->ShapeInfo.Type;
    v15[8] = *(_QWORD *)&a2->ShapeInfo.Height;
    v15[9] = a2->ShapeInfo.HotSpot;
    LODWORD(v15[10]) = a2->BufferSizeSupplied;
    HIDWORD(v15[10]) = a2->BufferSizeRequired;
    HIDWORD(v15[0]) = 88;
    LODWORD(v15[6]) = 9;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v15, 1);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return PointerShapeData;
}
