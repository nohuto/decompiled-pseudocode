/*
 * XREFs of ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C005F660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dqd @ 0x1C00572AC (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x1C005CC6C (WPP_IFR_SF_qdd.c)
 *     ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C005E100 (-GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C005F0A8 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int _a3; // edi
  bool v8; // cf
  int v9; // ebx
  unsigned __int8 v10; // r8
  unsigned int v11; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a1; // rax
  int v14; // r8d
  _FX_DRIVER_GLOBALS *v15; // r10
  const void *ObjectHandleUnchecked; // rax
  unsigned int _a2; // r8d
  _FX_DRIVER_GLOBALS *v18; // r10
  _NAMED_PIPE_CREATE_PARAMETERS *v19; // r11
  unsigned __int64 v20; // rax
  unsigned int v21; // ebp
  const void *v22; // rax
  int v23; // r8d
  unsigned int LowPart; // r10d
  unsigned int v26; // r10d
  unsigned int *p_OutboundQuota; // rsi
  unsigned int m_MinInstanceBufferSize; // r9d
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  FxWmiInstance *InstanceReferenced; // rax
  unsigned int v32; // r8d
  const void *v33; // rax
  int v34; // edx
  unsigned int *v35; // rax
  int v36; // eax
  signed int v37; // edx
  const void *v38; // rax
  unsigned int v39; // edx
  const void *v40; // rax
  unsigned __int8 v41; // dl
  int v42; // r8d
  unsigned int *v43; // rax
  const void *v44; // rax
  const void *v45; // rax
  int v46; // r8d
  const void *v47; // rax
  _FX_DRIVER_GLOBALS *v48; // r10
  char v49; // [rsp+50h] [rbp-68h]
  unsigned __int8 irql[3]; // [rsp+51h] [rbp-67h] BYREF
  unsigned int v51; // [rsp+54h] [rbp-64h]
  unsigned int m_NumInstances; // [rsp+58h] [rbp-60h]
  unsigned int tmpSize; // [rsp+5Ch] [rbp-5Ch] BYREF
  unsigned int v54; // [rsp+60h] [rbp-58h]
  unsigned int v55; // [rsp+64h] [rbp-54h]
  __int64 v56; // [rsp+68h] [rbp-50h]
  unsigned int *v57; // [rsp+70h] [rbp-48h]
  FxObject *v58; // [rsp+78h] [rbp-40h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+80h] [rbp-38h]
  unsigned int *v60; // [rsp+88h] [rbp-30h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  irql[0] = 0;
  v55 = 0;
  _a3 = 0;
  v49 = 0;
  v8 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( v8 )
  {
    v9 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  FxNonPagedObject::Lock(This, irql, (unsigned __int8)Provider);
  m_NumInstances = Provider->m_NumInstances;
  FxNonPagedObject::Unlock(This, irql[0], v10);
  v11 = m_NumInstances;
  m_Globals = This->m_Globals;
  if ( !m_NumInstances )
  {
    v9 = -1073741162;
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
      WPP_IFR_SF_qL(v15, 5u, v14 + 12, v14 + 15, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, 0xC0000296);
    }
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  if ( m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
    WPP_IFR_SF_qL(v18, 5u, 0xCu, 0x10u, WPP_FxWmiIrpHandler_cpp_Traceguids, ObjectHandleUnchecked, _a2);
    v11 = m_NumInstances;
  }
  v19 = Parameters;
  v20 = 8LL * v11;
  Parameters[1].ReadMode &= ~0x10u;
  v19[1].MaximumInstances = v11;
  if ( v20 > 0xFFFFFFFF
    || (unsigned int)v20 >= 0xFFFFFFC4
    || (v9 = 0, v21 = (v20 + 75) & 0xFFFFFFF0, v21 < (int)v20 + 60) )
  {
    v9 = -1073741675;
    v22 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
    WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, WPP_FxWmiIrpHandler_cpp_Traceguids, v23, v22, -1073741675);
    _a3 = 0;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  v19[1].CompletionMode = v21;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v21 > LowPart )
  {
    v56 = 0LL;
    p_OutboundQuota = 0LL;
    v26 = 0;
    v49 = 1;
    v9 = -1073741789;
  }
  else
  {
    v26 = LowPart - v21;
    p_OutboundQuota = &v19[1].OutboundQuota;
    v56 = (__int64)v19 + v21;
  }
  m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
  v51 = v26;
  v60 = p_OutboundQuota;
  if ( m_MinInstanceBufferSize )
  {
    v29 = (v11 - 1) * (unsigned __int64)((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
    if ( v29 > 0xFFFFFFFF || m_MinInstanceBufferSize + (unsigned int)v29 < (unsigned int)v29 )
    {
      v9 = -1073741675;
      return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
    }
    v9 = 0;
    if ( v26 < m_MinInstanceBufferSize + (unsigned int)v29 )
    {
      _a3 = m_MinInstanceBufferSize + v29;
      v9 = -1073741789;
      return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
    }
  }
  v30 = 0;
  v54 = 0;
  if ( v11 )
  {
    v57 = p_OutboundQuota;
    do
    {
      InstanceReferenced = FxWmiProvider::GetInstanceReferenced(Provider, v30, Irp);
      v58 = InstanceReferenced;
      if ( !InstanceReferenced )
        break;
      if ( InstanceReferenced->IsQueryInstanceSupported(InstanceReferenced) )
      {
        tmpSize = 0;
        v9 = ((__int64 (__fastcall *)(FxObject *, _QWORD, __int64, unsigned int *))v58->__vftable[1].~FxObject)(
               v58,
               v51,
               v56,
               &tmpSize);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741789 )
        {
          v32 = (tmpSize + 15) & 0xFFFFFFF0;
          if ( v32 >= tmpSize )
          {
            v55 = v32 - tmpSize;
            if ( v9 < 0 || v49 )
            {
              v49 = 1;
            }
            else
            {
              v35 = v57;
              v57[1] = tmpSize;
              *v35 = v21;
              v56 += v32;
            }
            if ( v32 > v51 )
            {
              v36 = -1;
              if ( v51 + v21 >= v21 )
                v36 = v51 + v21;
              v37 = v51 + v21 < v21 ? 0xC0000095 : 0;
              v51 = 0;
            }
            else
            {
              v51 -= v32;
              v36 = -1;
              if ( v32 + v21 >= v21 )
                v36 = v32 + v21;
              v37 = v32 + v21 < v21 ? 0xC0000095 : 0;
            }
            v21 = v36;
            if ( v37 >= 0 )
            {
              if ( v32 + _a3 < _a3 )
              {
                _a3 = -1;
                v9 = -1073741675;
                v40 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
                WPP_IFR_SF_qddd(
                  This->m_Globals,
                  v41,
                  0xCu,
                  0x14u,
                  WPP_FxWmiIrpHandler_cpp_Traceguids,
                  v40,
                  -1,
                  v42,
                  -1073741675);
              }
              else
              {
                _a3 += v32;
              }
            }
            else
            {
              v9 = v37;
              v38 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
              WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v38, v39);
            }
          }
          else
          {
            v9 = -1073741675;
            v33 = (const void *)FxObject::GetObjectHandleUnchecked(v58);
            WPP_IFR_SF_qdd(This->m_Globals, 2u, 0xCu, 0x12u, WPP_FxWmiIrpHandler_cpp_Traceguids, v33, v34, 0xC0000095);
          }
        }
      }
      else if ( v60 )
      {
        v43 = v57;
        v57[1] = 0;
        *v43 = v21;
      }
      v58->Release(v58, Irp, 1178, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
        goto LABEL_56;
      v57 += 2;
      v30 = v54 + 1;
      v54 = v30;
    }
    while ( v30 < m_NumInstances );
    v19 = Parameters;
  }
  if ( v9 != -1073741789 )
  {
    if ( v9 < 0 )
    {
LABEL_56:
      v44 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
      WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v44, v9);
      _a3 = 0;
      goto LABEL_58;
    }
    if ( !v49 )
    {
      _a3 = v21 - v55 - v19[1].CompletionMode;
      goto LABEL_58;
    }
  }
  _a3 -= v55;
  v9 = -1073741789;
  v45 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
  WPP_IFR_SF_qdd(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v45, v46, _a3);
LABEL_58:
  if ( This->m_Globals->FxVerboseOn )
  {
    v47 = (const void *)FxObject::GetObjectHandleUnchecked(Provider);
    WPP_IFR_SF_qdd(v48, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v47, v9, _a3);
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
}
