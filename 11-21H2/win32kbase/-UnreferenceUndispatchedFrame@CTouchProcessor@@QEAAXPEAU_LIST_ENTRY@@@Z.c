/*
 * XREFs of ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C01D8CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C00E7E48 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01CB830 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C01CD5C8 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE088 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8878 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionEdgyResetDataFrames @ 0x1C0207468 (ApiSetEditionEdgyResetDataFrames.c)
 */

void __fastcall CTouchProcessor::UnreferenceUndispatchedFrame(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  __int64 v4; // rdx
  CTouchProcessor *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned int i; // esi
  __int64 v10; // rbx
  PVOID CurrentProcess; // rax
  int v12; // r14d
  const struct CPointerMsgData *PrevMsgId; // rax
  __int64 v14; // r8
  PERESOURCE *v15[8]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v15,
    (struct CInpLockGuard *)(this + 4),
    0LL);
  p_Blink = &a2[-2].Blink;
  for ( i = 0; i < *((_DWORD *)p_Blink + 12); ++i )
  {
    v10 = (__int64)&p_Blink[30][30 * i];
    CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4, v6, v7);
    if ( !CurrentProcess
      || CurrentProcess != g_pepDwm
      || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v10) && (*(_DWORD *)(v10 + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(v10 + 16)
        || (v5 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                        v5,
                                                        (const struct CPointerInputFrame *)p_Blink,
                                                        (const struct CPointerInfoNode *)v10)
                                    + 35),
            ((unsigned __int8)v5 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v10) )
          CTouchProcessor::FreePointerInfoNode(this, v4, *((unsigned int *)p_Blink + 10), i);
      }
      else
      {
        v12 = *(_DWORD *)(v10 + 180) & 2;
        if ( (*(_DWORD *)(v10 + 180) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v5, *(_QWORD *)(v10 + 16), v6);
          if ( PrevMsgId )
          {
            v5 = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
            if ( ((unsigned __int8)v5 & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData((PDEVICE_OBJECT)this, (__int64)PrevMsgId, 1LL);
          }
        }
        if ( !v12 )
          CTouchProcessor::UnreferenceMsgData((PDEVICE_OBJECT)this, *(_QWORD *)(v10 + 16), 1LL);
      }
    }
  }
  ApiSetEditionEdgyResetDataFrames(p_Blink);
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)p_Blink, v14);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v15);
}
