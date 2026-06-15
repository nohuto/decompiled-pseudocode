/*
 * XREFs of ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000D480
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140004B14 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAVCProcessNode@@XZ @ 0x14000C4AC (-RemoveHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEA.c)
 *     ?FreeNode@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14000C570 (-FreeNode@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIn.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000D290 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14000D610 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14000D684 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D6AC (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140052860 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14005A17C (WPP_SF_q.c)
 */

void __fastcall CPipeInstance::Cleanup(__int64 **this)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  __int64 *v5; // rdi
  __int64 *v6; // rdx
  __int64 v7; // rax
  CConnectionInstance *v8; // rbp
  unsigned int v9; // edx
  __int64 v10; // rax
  void (__fastcall ***v11)(_QWORD, __int64); // rdi

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, this);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections((CPipeInstance *)this);
  if ( this[10] )
  {
    v2 = this + 8;
    do
    {
      v3 = *v2;
      if ( !*v2 )
LABEL_27:
        ATL::AtlThrowImpl(-2147467259);
      v4 = (_QWORD *)*v3;
      v5 = (__int64 *)v3[2];
      *v2 = (_QWORD *)*v3;
      if ( v4 )
        v4[1] = 0LL;
      else
        this[9] = 0LL;
      ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::FreeNode(
        (__int64)(this + 8),
        v3);
      while ( v5[2] )
      {
        v6 = (__int64 *)*v5;
        if ( !*v5 )
          goto LABEL_27;
        v7 = *v6;
        v8 = (CConnectionInstance *)v6[2];
        *v5 = *v6;
        if ( v7 )
          *(_QWORD *)(v7 + 8) = 0LL;
        else
          v5[1] = 0LL;
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode(v5, v6);
        if ( v8 )
          CConnectionInstance::`scalar deleting destructor'(v8, v9);
      }
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(v5);
      operator delete(v5);
    }
    while ( this[10] );
  }
  while ( this[4] )
  {
    v10 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveHead(this + 2);
    v11 = (void (__fastcall ***)(_QWORD, __int64))v10;
    if ( *(_DWORD *)(v10 + 40) == 2 )
      (*(void (__fastcall **)(__int64 *, _QWORD))(*this[30] + 32))(this[30], *(_QWORD *)(*(_QWORD *)(v10 + 32) + 40LL));
    (**v11)(v11, 1LL);
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids);
  }
}
