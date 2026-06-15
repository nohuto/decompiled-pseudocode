/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140009DBC
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009D48 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140007750 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000BC04 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140013CA0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140029B14 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002A2F8 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::FixupStreamPipe(CPipeInstance *this)
{
  int v2; // ebx
  unsigned int *v4; // r15
  _QWORD *v5; // r13
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  unsigned int *v8; // r15
  __int64 v9[4]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v10[4]; // [rsp+60h] [rbp-48h] BYREF
  CPipeInstance *v11; // [rsp+B0h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+B8h] [rbp+10h] BYREF
  _QWORD *v13; // [rsp+C0h] [rbp+18h] BYREF
  _QWORD *v14; // [rsp+C8h] [rbp+20h] BYREF

  v11 = this;
  v2 = 0;
  if ( *((_DWORD *)this + 28) == 2 && *((_QWORD *)this + 4) > 1uLL )
  {
    v12 = (_QWORD *)*((_QWORD *)this + 2);
    v4 = (unsigned int *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                            (__int64)this,
                            &v12);
    v5 = v12;
    if ( !v12 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = v12[2];
    if ( v4[10] == 3
      && *(_DWORD *)(v6 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v6 + 32) + 4LL)
      && (*(_BYTE *)(v6 + 48) & 1) != 0 )
    {
      v14 = 0LL;
      v13 = 0LL;
      v10[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v2 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
             0LL,
             v4[6],
             1LL,
             0,
             v10,
             &v14);
      if ( v2 < 0 )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v13);
        if ( v14 )
          (*(void (__fastcall **)(_QWORD *, __int64))*v14)(v14, 1LL);
        goto LABEL_18;
      }
      v7 = v14;
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 30) + 24LL))(
             *((_QWORD *)this + 30),
             v14[4] + 8LL,
             *(unsigned int *)(v14[4] + 4LL),
             *((_QWORD *)this + 24),
             *(_QWORD *)(v14[4] + 56LL),
             v14[4] + 40LL);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD **))(*(_QWORD *)v4 + 16LL))(v4, &v13);
        if ( v2 >= 0 )
        {
          v9[0] = 0LL;
          if ( !(*(unsigned int (__fastcall **)(_QWORD *, _QWORD *, __int64 *, _QWORD *))(*v7 + 40LL))(v7, v13, v9, v13) )
          {
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 24LL))(v7, v13);
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v13);
            v12 = v7;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore((char *)this + 16, v5, &v12);
            JUMPOUT(0x14003DB64LL);
          }
          JUMPOUT(0x14003DB68LL);
        }
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v13);
      goto LABEL_17;
    }
  }
  if ( *((_DWORD *)this + 28) == 5 && *((_QWORD *)this + 4) == 1LL )
  {
    v13 = 0LL;
    v11 = 0LL;
    v8 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)this + 16);
    v10[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v2 = CAPOProcessNode::CreateAPOProcessNode(
           &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
           0LL,
           v8[6],
           1LL,
           0,
           v10,
           &v13);
    if ( v2 < 0 )
    {
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v11);
      if ( v13 )
        JUMPOUT(0x14003DB4ALL);
      goto LABEL_18;
    }
    v7 = v13;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 30) + 24LL))(
           *((_QWORD *)this + 30),
           v13[4] + 8LL,
           *(unsigned int *)(v13[4] + 4LL),
           *((_QWORD *)this + 24),
           *(_QWORD *)(v13[4] + 56LL),
           v13[4] + 40LL);
    if ( v2 < 0
      || (v2 = (*(__int64 (__fastcall **)(unsigned int *, CPipeInstance **))(*(_QWORD *)v8 + 16LL))(v8, &v11), v2 < 0) )
    {
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v11);
LABEL_17:
      (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
      goto LABEL_18;
    }
    v14 = 0LL;
    if ( (*(unsigned int (__fastcall **)(_QWORD *, CPipeInstance *, _QWORD **, CPipeInstance *))(*v7 + 40LL))(
           v7,
           v11,
           &v14,
           v11) )
    {
      v2 = -2005139404;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, CPipeInstance *))(*v7 + 24LL))(v7, v11);
      (*(void (__fastcall **)(_QWORD *, CPipeInstance *))(*v7 + 32LL))(v7, v11);
      v2 = 0;
      v12 = v7;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((char *)this + 16, &v12);
      v7 = 0LL;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v14);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v11);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
  }
  if ( v2 < 0 )
LABEL_18:
    AudDGTraceLoggingErrorHelper("CPipeInstance::FixupStreamPipe", 0x9A6u, v2);
  return (unsigned int)v2;
}
