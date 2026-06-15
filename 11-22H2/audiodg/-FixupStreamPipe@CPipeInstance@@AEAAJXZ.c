/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140006FD4
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004F18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000CE70 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140012F94 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400144A0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140025E98 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::FixupStreamPipe(CPipeInstance *this)
{
  int v2; // ebx
  _DWORD *v3; // r15
  unsigned int *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int *v9; // r15
  _QWORD v10[4]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v11[4]; // [rsp+60h] [rbp-48h] BYREF
  CPipeInstance *v12; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+20h] BYREF

  v12 = this;
  v2 = 0;
  v3 = (_DWORD *)((char *)this + 112);
  v10[1] = (char *)this + 112;
  if ( *((_DWORD *)this + 28) == 2 && *((_QWORD *)this + 4) > 1uLL )
  {
    v13 = *((_QWORD *)this + 2);
    v5 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(this, &v13);
    v6 = v13;
    if ( !v13 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = *(_QWORD *)(v13 + 16);
    if ( v5[10] == 3
      && *(_DWORD *)(v7 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v7 + 32) + 4LL)
      && (*(_BYTE *)(v7 + 48) & 1) != 0 )
    {
      v15 = 0LL;
      v14 = 0LL;
      v11[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v2 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
             0LL,
             v5[6],
             1LL,
             0,
             v11,
             &v15);
      if ( v2 < 0 )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
        if ( v15 )
          (**(void (__fastcall ***)(__int64, __int64))v15)(v15, 1LL);
        goto LABEL_18;
      }
      v8 = v15;
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 30) + 24LL))(
             *((_QWORD *)this + 30),
             *(_QWORD *)(v15 + 32) + 8LL,
             *(unsigned int *)(*(_QWORD *)(v15 + 32) + 4LL),
             *((_QWORD *)this + 24),
             *(_QWORD *)(*(_QWORD *)(v15 + 32) + 56LL),
             *(_QWORD *)(v15 + 32) + 40LL);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(unsigned int *, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, &v14);
        if ( v2 >= 0 )
        {
          v10[0] = 0LL;
          if ( !(*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v8 + 40LL))(
                  v8,
                  v14,
                  v10,
                  v14) )
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, v14);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v14);
            v13 = v8;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore((char *)this + 16, v6, &v13);
            JUMPOUT(0x14003D1B4LL);
          }
          JUMPOUT(0x14003D1B9LL);
        }
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
      goto LABEL_17;
    }
  }
  if ( *v3 == 5 && *((_QWORD *)this + 4) == 1LL )
  {
    v14 = 0LL;
    v12 = 0LL;
    v9 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)this + 2);
    v11[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v2 = CAPOProcessNode::CreateAPOProcessNode(
           &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
           0LL,
           v9[6],
           1LL,
           0,
           v11,
           &v14);
    if ( v2 < 0 )
    {
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v12);
      if ( v14 )
        JUMPOUT(0x14003D195LL);
      goto LABEL_18;
    }
    v8 = v14;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 30) + 24LL))(
           *((_QWORD *)this + 30),
           *(_QWORD *)(v14 + 32) + 8LL,
           *(unsigned int *)(*(_QWORD *)(v14 + 32) + 4LL),
           *((_QWORD *)this + 24),
           *(_QWORD *)(*(_QWORD *)(v14 + 32) + 56LL),
           *(_QWORD *)(v14 + 32) + 40LL);
    if ( v2 < 0
      || (v2 = (*(__int64 (__fastcall **)(unsigned int *, CPipeInstance **))(*(_QWORD *)v9 + 16LL))(v9, &v12), v2 < 0) )
    {
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v12);
LABEL_17:
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
      goto LABEL_18;
    }
    v15 = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64, CPipeInstance *, __int64 *, CPipeInstance *))(*(_QWORD *)v8 + 40LL))(
           v8,
           v12,
           &v15,
           v12) )
    {
      v2 = -2005139404;
    }
    else
    {
      (*(void (__fastcall **)(__int64, CPipeInstance *))(*(_QWORD *)v8 + 24LL))(v8, v12);
      (*(void (__fastcall **)(__int64, CPipeInstance *))(*(_QWORD *)v8 + 32LL))(v8, v12);
      v2 = 0;
      v13 = v8;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((char *)this + 16, &v13);
      v8 = 0LL;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v12);
    if ( v8 )
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
  }
  if ( v2 < 0 )
LABEL_18:
    AudDGTraceLoggingErrorHelper("CPipeInstance::FixupStreamPipe", 0x9CDu, v2);
  return (unsigned int)v2;
}
