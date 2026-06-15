/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180002EE0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_s @ 0x1800106EC (memcpy_s.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800679A2 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x1800843EC (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_Sdd @ 0x1800E3B68 (WPP_SF_Sdd.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  unsigned int v9; // edx
  DefaultChangedContext *v10; // rsi
  DefaultChangedContext *v11; // rbx
  unsigned int v12; // r14d
  ATL::CStringData *v13; // rcx
  __int64 v14; // r15
  struct _TP_WORK *ThreadpoolWork; // rax
  CAudioSessionManager *v16; // rcx
  __int64 v17; // r15
  unsigned __int64 v18; // r13
  char *v19; // rcx
  rsize_t v20; // rdx
  signed int LastError; // eax
  unsigned int v22; // [rsp+90h] [rbp+18h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27,
      (unsigned int)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
      (_DWORD)a4,
      a2,
      a3);
  }
  if ( a3 )
    return 0LL;
  v10 = (DefaultChangedContext *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    *(_QWORD *)v10 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    *((_QWORD *)v10 + 2) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v10 + 3) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    v16 = WPP_GLOBAL_Control;
    goto LABEL_31;
  }
  *((_DWORD *)v10 + 2) = a2;
  v12 = 0;
  if ( !a4 )
    goto LABEL_11;
  v17 = -1LL;
  do
    ++v17;
  while ( a4[v17] );
  if ( (_DWORD)v17 )
  {
    v22 = *(_DWORD *)(*(_QWORD *)v10 - 16LL);
    v18 = ((__int64)a4 - *(_QWORD *)v10) >> 1;
    if ( ((1 - *(_DWORD *)(*(_QWORD *)v10 - 8LL)) | (*(_DWORD *)(*(_QWORD *)v10 - 12LL) - (int)v17)) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v10, (unsigned int)v17);
    v19 = *(char **)v10;
    v20 = 2LL * (int)v17;
    if ( v18 <= v22 )
    {
      if ( v20 )
      {
        if ( v19 && &v19[2 * v18] )
        {
          memmove_0(v19, &v19[2 * v18], 2LL * (int)v17);
        }
        else
        {
          *(_DWORD *)_o__errno() = 22;
          invalid_parameter_noinfo();
        }
      }
    }
    else
    {
      memcpy_s(v19, v20, a4, 2LL * (int)v17);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength(v10, (unsigned int)v17);
  }
  else
  {
LABEL_11:
    v13 = (ATL::CStringData *)(*(_QWORD *)v10 - 24LL);
    v14 = *(_QWORD *)v13;
    if ( *((_DWORD *)v13 + 2) )
    {
      if ( *((int *)v13 + 4) >= 0 )
      {
        ATL::CStringData::Release(v13);
        *(_QWORD *)v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetLength(v10, 0LL);
      }
    }
  }
  ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::HandleDefaultDeviceChanged, v10, 0LL);
  *((_QWORD *)v10 + 3) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v11 = 0LL;
LABEL_14:
    v16 = WPP_GLOBAL_Control;
    goto LABEL_15;
  }
  LastError = GetLastError();
  v12 = LastError;
  if ( LastError > 0 )
    v12 = (unsigned __int16)LastError | 0x80070000;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v12);
    goto LABEL_14;
  }
LABEL_15:
  if ( (v12 & 0x80000000) != 0 )
  {
LABEL_31:
    if ( v16 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v16 + 7) & 0x800000) != 0
      && *((_BYTE *)v16 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v16 + 2), 29LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v12);
    }
  }
  if ( v11 )
    DefaultChangedContext::`scalar deleting destructor'(v11, v9);
  return v12;
}
