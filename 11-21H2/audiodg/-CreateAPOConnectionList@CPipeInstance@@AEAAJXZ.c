/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400140E0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011930 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140013114 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddHead@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@AEBQEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@@Z @ 0x140013A88 (-AddHead@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140013B44 (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140014B30 (-GetFreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION@@PEAVCProcessNode@@3@Z @ 0x140015BA8 (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140015C00 (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14001D1D4 (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14001D214 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ?AddTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x14002B184 (-AddTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140059218 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x140059F28 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  __int64 v2; // r15
  CPipeInstance *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r12
  CConnectionInstance *v10; // rax
  CConnectionInstance *v11; // rsi
  int v12; // ecx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 **v15; // rax
  __int64 **v16; // r14
  __int64 *v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rsi
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  void *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  struct ATL::CAtlPlex *v29; // r8
  int v30; // edx
  _QWORD *v31; // rcx
  int i; // edx
  const struct CConnectionInstance *LoopbackConnection; // rax
  __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // r14
  _QWORD *v40; // rax
  __int64 v41; // rdx
  void *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  int pExceptionObject; // [rsp+40h] [rbp-78h] BYREF
  int v47; // [rsp+44h] [rbp-74h] BYREF
  int v48; // [rsp+48h] [rbp-70h] BYREF
  int v49; // [rsp+4Ch] [rbp-6Ch] BYREF
  int v50; // [rsp+50h] [rbp-68h] BYREF
  int v51; // [rsp+54h] [rbp-64h] BYREF
  int v52; // [rsp+58h] [rbp-60h] BYREF
  int v53; // [rsp+5Ch] [rbp-5Ch] BYREF
  int v54; // [rsp+60h] [rbp-58h] BYREF
  int v55; // [rsp+64h] [rbp-54h] BYREF
  int v56; // [rsp+68h] [rbp-50h] BYREF
  int v57; // [rsp+6Ch] [rbp-4Ch] BYREF
  __int64 v58; // [rsp+C0h] [rbp+8h] BYREF
  CConnectionInstance *v59; // [rsp+C8h] [rbp+10h] BYREF
  _QWORD *v60; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v61; // [rsp+D8h] [rbp+20h] BYREF

  v61 = 0LL;
  v59 = 0LL;
  v58 = *((_QWORD *)this + 3);
  if ( !v58 )
  {
    pExceptionObject = -2005139408;
    throw (long *)&pExceptionObject;
  }
  v2 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev((__int64)this, &v58);
  v3 = *(CPipeInstance **)this;
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 30) )
      LoopbackConnection = CPipeInstance::GetLoopbackConnection(v3);
    else
      LoopbackConnection = (const struct CConnectionInstance *)CPipeInstance::GetMixSplitConnection_Internal(v3, 0LL);
    v34 = *((_QWORD *)LoopbackConnection + 1);
    v35 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v60 = v35;
    if ( !v35
      || (v59 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                         v35,
                                         v36,
                                         *((_QWORD *)this + 30),
                                         v34,
                                         *(_DWORD *)(v2 + 24),
                                         v2)) == 0LL )
    {
      v49 = -2147024882;
      throw (long *)&v49;
    }
    v37 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v38 = v37;
    if ( !v37 )
    {
      v48 = -2147024882;
      throw (long *)&v48;
    }
    *v37 = 0LL;
    v37[1] = 0LL;
    v37[2] = 0LL;
    v37[3] = 0LL;
    v37[4] = 0LL;
    *((_DWORD *)v37 + 10) = 10;
    v60 = v37;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v37, &v59);
    ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
      (struct ATL::CAtlPlex **)this + 8,
      &v60);
    v59 = 0LL;
    if ( *((_DWORD *)this + 3) || !*((_BYTE *)this + 316) )
      goto LABEL_9;
    v39 = *((_QWORD *)CPipeInstance::GetSecondaryLoopbackConnection(*(CPipeInstance **)this) + 1);
    v40 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v60 = v40;
    if ( !v40
      || (v59 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                         v40,
                                         v41,
                                         *((_QWORD *)this + 30),
                                         v39,
                                         *(_DWORD *)(v2 + 24),
                                         v2)) == 0LL )
    {
      v47 = -2147024882;
      throw (long *)&v47;
    }
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v38, &v59);
  }
  else
  {
    if ( !*((_DWORD *)this + 2) )
      goto LABEL_9;
    v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v60 = v4;
    if ( !v4
      || (v59 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                         v4,
                                         v5,
                                         *((_QWORD *)this + 30),
                                         -1LL,
                                         *(_DWORD *)(v2 + 24),
                                         v2)) == 0LL )
    {
      v52 = -2147024882;
      throw (long *)&v52;
    }
    v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( !v6 )
    {
      v51 = -2147024882;
      throw (long *)&v51;
    }
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v6[4] = 0LL;
    *((_DWORD *)v6 + 10) = 10;
    v60 = v6;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v6, &v59);
    ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
      (struct ATL::CAtlPlex **)this + 8,
      &v60);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead((_QWORD *)this + 31, &v59);
    v59 = 0LL;
    if ( *((_DWORD *)this + 3) || !*((_BYTE *)this + 316) )
      goto LABEL_9;
    v44 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v60 = v44;
    if ( !v44
      || (v59 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                         v44,
                                         v45,
                                         *((_QWORD *)this + 30),
                                         -2LL,
                                         *(_DWORD *)(v2 + 24),
                                         v2)) == 0LL )
    {
      v50 = -2147024882;
      throw (long *)&v50;
    }
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v7, &v59);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead((_QWORD *)this + 31, &v59);
  }
  v59 = 0LL;
LABEL_9:
  v8 = v58;
  while ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    v10 = (CConnectionInstance *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    v58 = (__int64)v10;
    if ( !v10 )
    {
      v59 = 0LL;
LABEL_66:
      v54 = -2147024882;
      throw (long *)&v54;
    }
    v12 = *(_DWORD *)(v9 + 24);
    v13 = *((_QWORD *)this + 30);
    *((_QWORD *)v10 + 6) = 0LL;
    *(_QWORD *)v10 = 1LL;
    *((_QWORD *)v10 + 1) = 0LL;
    *((_DWORD *)v10 + 4) = v12;
    *((_QWORD *)v10 + 3) = v9;
    *((_QWORD *)v10 + 4) = v2;
    *((_DWORD *)v10 + 10) = 0;
    *((_QWORD *)v10 + 7) = 0LL;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = *((_QWORD *)v11 + 6);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      *((_QWORD *)v11 + 6) = v13;
    }
    v59 = v11;
    if ( !v11 )
      goto LABEL_66;
    v15 = (__int64 **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    if ( !v15 )
    {
      v53 = -2147024882;
      throw (long *)&v53;
    }
    *v15 = 0LL;
    v15[1] = 0LL;
    v15[2] = 0LL;
    v15[3] = 0LL;
    v15[4] = 0LL;
    *((_DWORD *)v15 + 10) = 10;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(v15);
    v17 = v16[4];
    v18 = (__int64 *)*v17;
    v17[2] = (__int64)v11;
    v16[4] = v18;
    v17[1] = 0LL;
    *v17 = 0LL;
    v16[2] = (__int64 *)((char *)v16[2] + 1);
    if ( *v16 )
      (*v16)[1] = (__int64)v17;
    else
      v16[1] = v17;
    *v16 = v17;
    v19 = *((_QWORD *)this + 8);
    if ( !*((_QWORD *)this + 12) )
    {
      v29 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)this + 11, *((unsigned int *)this + 26), 0x18uLL);
      if ( !v29 )
        ATL::AtlThrowImpl(-2147024882);
      v30 = *((_DWORD *)this + 26);
      v31 = (_QWORD *)((char *)v29 + 16 * (v30 - 1) + 8 * (unsigned int)(v30 - 1) + 8);
      for ( i = v30 - 1; i >= 0; --i )
      {
        *v31 = *((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = v31;
        v31 -= 3;
      }
    }
    v20 = (__int64 *)*((_QWORD *)this + 12);
    v21 = *v20;
    v20[2] = (__int64)v16;
    *((_QWORD *)this + 12) = v21;
    v20[1] = 0LL;
    *v20 = v19;
    ++*((_QWORD *)this + 10);
    v22 = *((_QWORD *)this + 8);
    if ( v22 )
      *(_QWORD *)(v22 + 8) = v20;
    else
      *((_QWORD *)this + 9) = v20;
    *((_QWORD *)this + 8) = v20;
    v59 = 0LL;
    v2 = v9;
  }
  v23 = *((_DWORD *)this + 28);
  if ( ((v23 - 1) & 0xFFFFFFFC) == 0 && v23 != 2 )
  {
    v24 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v58 = (__int64)v24;
    if ( v24 )
    {
      v59 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                     v24,
                                     v25,
                                     *((_QWORD *)this + 30),
                                     *(unsigned int *)(v2 + 24),
                                     0LL,
                                     v2);
      if ( v59 )
      {
        v26 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v27 = v26;
        if ( !v26 )
        {
          v56 = -2147024882;
          throw (long *)&v56;
        }
        *v26 = 0LL;
        v26[1] = 0LL;
        v26[2] = 0LL;
        v26[3] = 0LL;
        v26[4] = 0LL;
        *((_DWORD *)v26 + 10) = 10;
        v58 = (__int64)v26;
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v26, &v59);
        ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
          (struct ATL::CAtlPlex **)this + 8,
          &v58);
        v59 = 0LL;
        if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 317) )
        {
          v42 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
          v58 = (__int64)v42;
          if ( !v42
            || (v59 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                               v42,
                                               v43,
                                               *((_QWORD *)this + 30),
                                               *(unsigned int *)(v2 + 24),
                                               0LL,
                                               v2)) == 0LL )
          {
            v55 = -2147024882;
            throw (long *)&v55;
          }
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v27, &v59);
          v59 = 0LL;
        }
        goto LABEL_31;
      }
    }
    else
    {
      v59 = 0LL;
    }
    v57 = -2147024882;
    throw (long *)&v57;
  }
LABEL_31:
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v61);
  return 0LL;
}
