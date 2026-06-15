/*
 * XREFs of ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400131E0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14000C530 (-GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14000D610 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000EAA4 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION@@PEAVCProcessNode@@3@Z @ 0x140010E8C (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@W4AUDIO_DIRECTION.c)
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x1400135F0 (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?AddHead@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@AEBQEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@@Z @ 0x140013764 (-AddHead@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400148CC (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140022D94 (--0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTI.c)
 *     ?AddTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140024084 (-AddTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14005CB80 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateAPOConnectionList(CPipeInstance *this)
{
  __int64 v2; // rcx
  __int64 v3; // r15
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rsi
  CConnectionInstance *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  int v12; // ecx
  CConnectionInstance *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  CPipeInstance *v22; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  void *v29; // rax
  __int64 v30; // rdx
  int pExceptionObject; // [rsp+40h] [rbp-88h] BYREF
  int v32; // [rsp+44h] [rbp-84h] BYREF
  int v33; // [rsp+48h] [rbp-80h] BYREF
  int v34; // [rsp+4Ch] [rbp-7Ch] BYREF
  int v35; // [rsp+50h] [rbp-78h] BYREF
  int v36; // [rsp+54h] [rbp-74h] BYREF
  int v37; // [rsp+58h] [rbp-70h] BYREF
  int v38; // [rsp+5Ch] [rbp-6Ch] BYREF
  int v39; // [rsp+60h] [rbp-68h] BYREF
  int v40; // [rsp+64h] [rbp-64h] BYREF
  int v41; // [rsp+68h] [rbp-60h] BYREF
  int v42; // [rsp+6Ch] [rbp-5Ch] BYREF
  __int64 v43[11]; // [rsp+70h] [rbp-58h] BYREF
  CConnectionInstance *v44; // [rsp+D8h] [rbp+10h] BYREF
  _QWORD *v45; // [rsp+E0h] [rbp+18h] BYREF
  _QWORD *v46; // [rsp+E8h] [rbp+20h] BYREF

  v43[0] = 0LL;
  v44 = 0LL;
  v45 = (_QWORD *)*((_QWORD *)this + 3);
  if ( !v45 )
  {
    pExceptionObject = -2005139408;
    throw (long *)&pExceptionObject;
  }
  v3 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(this, &v45);
  if ( !*(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 2) )
      goto LABEL_9;
    v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v46 = v4;
    if ( !v4
      || (v44 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                         v4,
                                         v5,
                                         *((_QWORD *)this + 30),
                                         -1LL,
                                         *(_DWORD *)(v3 + 24),
                                         v3)) == 0LL )
    {
      v37 = -2147024882;
      throw (long *)&v37;
    }
    v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( !v6 )
    {
      v36 = -2147024882;
      throw (long *)&v36;
    }
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v6[4] = 0LL;
    *((_DWORD *)v6 + 10) = 10;
    v46 = v6;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v6, &v44);
    ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
      (char *)this + 64,
      &v46);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead((char *)this + 248, &v44);
    v44 = 0LL;
    if ( *((_DWORD *)this + 3) || !*((_BYTE *)this + 316) )
      goto LABEL_9;
    v20 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v46 = v20;
    if ( !v20
      || (v44 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                         v20,
                                         v21,
                                         *((_QWORD *)this + 30),
                                         -2LL,
                                         *(_DWORD *)(v3 + 24),
                                         v3)) == 0LL )
    {
      v35 = -2147024882;
      throw (long *)&v35;
    }
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v7, &v44);
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead((char *)this + 248, &v44);
LABEL_28:
    v44 = 0LL;
    goto LABEL_9;
  }
  v22 = *(CPipeInstance **)this;
  if ( *((_DWORD *)this + 30) )
    LoopbackConnection = CPipeInstance::GetLoopbackConnection(v22);
  else
    LoopbackConnection = (const struct CConnectionInstance *)CPipeInstance::GetMixSplitConnection_Internal(
                                                               (__int64)v22,
                                                               0);
  v24 = *((_QWORD *)LoopbackConnection + 1);
  v25 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v46 = v25;
  if ( !v25
    || (v44 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                       v25,
                                       v26,
                                       *((_QWORD *)this + 30),
                                       v24,
                                       *(_DWORD *)(v3 + 24),
                                       v3)) == 0LL )
  {
    v34 = -2147024882;
    throw (long *)&v34;
  }
  v27 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v28 = v27;
  if ( !v27 )
  {
    v33 = -2147024882;
    throw (long *)&v33;
  }
  *v27 = 0LL;
  v27[1] = 0LL;
  v27[2] = 0LL;
  v27[3] = 0LL;
  v27[4] = 0LL;
  *((_DWORD *)v27 + 10) = 10;
  v46 = v27;
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v27, &v44);
  ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
    (char *)this + 64,
    &v46);
  v44 = 0LL;
  if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 316) )
  {
    v46 = (_QWORD *)*((_QWORD *)CPipeInstance::GetSecondaryLoopbackConnection(*(CPipeInstance **)this) + 1);
    v29 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v43[1] = (__int64)v29;
    if ( !v29
      || (v44 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                         v29,
                                         v30,
                                         *((_QWORD *)this + 30),
                                         v46,
                                         *(_DWORD *)(v3 + 24),
                                         v3)) == 0LL )
    {
      v32 = -2147024882;
      throw (long *)&v32;
    }
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v28, &v44);
    goto LABEL_28;
  }
LABEL_9:
  while ( v45 )
  {
    v8 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(v2, &v45);
    v9 = (CConnectionInstance *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v44 = v9;
    if ( !v9 )
    {
      v44 = 0LL;
LABEL_50:
      v39 = -2147024882;
      throw (long *)&v39;
    }
    v44 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                   (__int64)v9,
                                   v10,
                                   *((struct IUnknown **)this + 30),
                                   *(_DWORD *)(v8 + 24),
                                   v8,
                                   v3);
    if ( !v44 )
      goto LABEL_50;
    v11 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v11 )
    {
      v38 = -2147024882;
      throw (long *)&v38;
    }
    *v11 = 0LL;
    v11[1] = 0LL;
    v11[2] = 0LL;
    v11[3] = 0LL;
    v11[4] = 0LL;
    *((_DWORD *)v11 + 10) = 10;
    v46 = v11;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v11, &v44);
    ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
      (char *)this + 64,
      &v46);
    v44 = 0LL;
    v3 = v8;
  }
  v12 = *((_DWORD *)this + 28);
  if ( ((v12 - 1) & 0xFFFFFFFC) == 0 && v12 != 2 )
  {
    v13 = (CConnectionInstance *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v44 = v13;
    if ( v13 )
    {
      v44 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                     (__int64)v13,
                                     v14,
                                     *((struct IUnknown **)this + 30),
                                     *(_DWORD *)(v3 + 24),
                                     0LL,
                                     v3);
      if ( v44 )
      {
        v15 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v16 = v15;
        if ( !v15 )
        {
          v41 = -2147024882;
          throw (long *)&v41;
        }
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        v15[3] = 0LL;
        v15[4] = 0LL;
        *((_DWORD *)v15 + 10) = 10;
        v45 = v15;
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddHead(v15, &v44);
        ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::AddHead(
          (char *)this + 64,
          &v45);
        v44 = 0LL;
        if ( !*((_DWORD *)this + 3) && *((_BYTE *)this + 317) )
        {
          v17 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
          v45 = v17;
          if ( !v17
            || (v44 = (CConnectionInstance *)CConnectionInstance::CConnectionInstance(
                                               (__int64)v17,
                                               v18,
                                               *((struct IUnknown **)this + 30),
                                               *(_DWORD *)(v3 + 24),
                                               0LL,
                                               v3)) == 0LL )
          {
            v40 = -2147024882;
            throw (long *)&v40;
          }
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::AddTail(v16, &v44);
          v44 = 0LL;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v44 = 0LL;
    }
    v42 = -2147024882;
    throw (long *)&v42;
  }
LABEL_24:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v43);
  return 0LL;
}
