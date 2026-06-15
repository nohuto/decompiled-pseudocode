/*
 * XREFs of ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000AE60
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000A92C (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ??1CInPlaceBuffer@@QEAA@XZ @ 0x140008794 (--1CInPlaceBuffer@@QEAA@XZ.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x1400087F8 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000AA20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x14000ADFC (-RemoveAll@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionI.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140051850 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140057448 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::Cleanup(struct IAudioProcessor **this)
{
  struct IAudioProcessor *v2; // rcx
  __int64 *v3; // rbx
  struct IAudioProcessor *v4; // rax
  bool v5; // zf
  __int64 *v6; // rcx
  _QWORD **v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  CInPlaceBuffer *v11; // rdi
  _QWORD *v12; // rcx
  ATL::CAtlPlex **v13; // rcx
  struct IAudioProcessor *v14; // rcx
  __int64 v15; // rdi
  struct IAudioProcessor *v16; // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, this);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections(this);
  if ( this[10] )
  {
    while ( 1 )
    {
      v2 = this[8];
      if ( !v2 )
        goto LABEL_49;
      v3 = (__int64 *)*((_QWORD *)v2 + 2);
      v4 = *(struct IAudioProcessor **)v2;
      this[8] = *(struct IAudioProcessor **)v2;
      if ( v4 )
        *((_QWORD *)v4 + 1) = 0LL;
      else
        this[9] = 0LL;
      *(_QWORD *)v2 = this[12];
      this[12] = v2;
      v5 = this[10] == (struct IAudioProcessor *)1;
      this[10] = (struct IAudioProcessor *)((char *)this[10] - 1);
      if ( v5 )
        ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::RemoveAll((__int64)(this + 8));
      if ( v3[2] )
        break;
LABEL_26:
      *v3 = 0LL;
      v3[1] = 0LL;
      v3[4] = 0LL;
      v13 = (ATL::CAtlPlex **)v3[3];
      if ( v13 )
      {
        ATL::CAtlPlex::FreeDataChain(v13);
        v3[3] = 0LL;
      }
      operator delete(v3);
      if ( !this[10] )
        goto LABEL_29;
    }
    while ( 1 )
    {
      v6 = (__int64 *)*v3;
      if ( !*v3 )
        break;
      v7 = (_QWORD **)v6[2];
      v8 = *v6;
      *v3 = *v6;
      if ( v8 )
        *(_QWORD *)(v8 + 8) = 0LL;
      else
        v3[1] = 0LL;
      *v6 = v3[4];
      v3[4] = (__int64)v6;
      v5 = v3[2]-- == 1;
      if ( v5 )
      {
        *v3 = 0LL;
        v3[1] = 0LL;
        v3[4] = 0LL;
        v9 = (_QWORD *)v3[3];
        if ( v9 )
        {
          do
          {
            v10 = (_QWORD *)*v9;
            free(v9);
            v9 = v10;
          }
          while ( v10 );
          v3[3] = 0LL;
        }
      }
      if ( v7 )
      {
        if ( v7[1] && *(_DWORD *)v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v7[6] + 64LL))(v7[6]);
          v7[1] = 0LL;
        }
        v11 = (CInPlaceBuffer *)v7[7];
        if ( v11 )
        {
          v5 = (*((_DWORD *)v11 + 4))-- == 1;
          if ( v5 )
          {
            CInPlaceBuffer::~CInPlaceBuffer(v11);
            operator delete(v11);
          }
          v7[7] = 0LL;
        }
        v12 = v7[6];
        if ( v12 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        operator delete(v7);
      }
      if ( !v3[2] )
        goto LABEL_26;
    }
LABEL_49:
    ATL::AtlThrowImpl(-2147467259);
  }
LABEL_29:
  while ( this[4] )
  {
    v14 = this[2];
    if ( !v14 )
      goto LABEL_49;
    v15 = *((_QWORD *)v14 + 2);
    v16 = *(struct IAudioProcessor **)v14;
    this[2] = *(struct IAudioProcessor **)v14;
    if ( v16 )
      *((_QWORD *)v16 + 1) = 0LL;
    else
      this[3] = 0LL;
    *(_QWORD *)v14 = this[6];
    this[6] = v14;
    v5 = this[4] == (struct IAudioProcessor *)1;
    this[4] = (struct IAudioProcessor *)((char *)this[4] - 1);
    if ( v5 )
      ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll(this + 2);
    if ( *(_DWORD *)(v15 + 40) == 2 )
      (*(void (__fastcall **)(struct IAudioProcessor *, _QWORD))(*(_QWORD *)this[30] + 32LL))(
        this[30],
        *(_QWORD *)(*(_QWORD *)(v15 + 32) + 40LL));
    (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1LL);
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids);
  }
}
