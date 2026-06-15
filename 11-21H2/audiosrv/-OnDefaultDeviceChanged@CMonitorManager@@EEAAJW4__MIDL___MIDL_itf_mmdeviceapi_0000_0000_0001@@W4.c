/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x18011D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CA18 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_Sdd @ 0x1800DB64C (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x180119A8C (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        wchar_t *a4)
{
  DefaultChangedContext *v9; // rax
  DefaultChangedContext *v10; // r14
  DefaultChangedContext *v11; // rbx
  signed int v12; // esi
  CEndpointStoreCache *v13; // rcx
  __int64 v14; // rax
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax
  signed int *v17; // rbx
  ATL::CAtlException *v18; // [rsp+40h] [rbp-38h] BYREF

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
      a4);
  }
  if ( a3 )
    return 0LL;
  v9 = (DefaultChangedContext *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v9, (__int64)&ATL::g_strmgr);
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
    v13 = WPP_GLOBAL_Control;
LABEL_32:
    if ( v13 != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v13 + 7) & 0x800000) != 0
      && *((_BYTE *)v13 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v13 + 2), 0x1Du, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v12);
    }
    goto LABEL_36;
  }
  *((_DWORD *)v10 + 2) = a2;
  v12 = 0;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
  }
  else
  {
    LODWORD(v14) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((void **)v10, (char *)a4, v14);
  }
  catch ( ATL::CAtlException *v18 )
  {
    v17 = (signed int *)v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v12 = *v17;
    if ( *v17 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'(v10);
      v11 = v10;
LABEL_30:
      v13 = WPP_GLOBAL_Control;
      goto LABEL_31;
    }
    v11 = v10;
  }
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::HandleDefaultDeviceChanged, v10, 0LL);
  *((_QWORD *)v10 + 3) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v11 = 0LL;
    goto LABEL_30;
  }
  LastError = GetLastError();
  v12 = LastError;
  if ( LastError > 0 )
    v12 = (unsigned __int16)LastError | 0x80070000;
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v12);
    goto LABEL_30;
  }
LABEL_31:
  if ( v12 < 0 )
    goto LABEL_32;
LABEL_36:
  if ( v11 )
    DefaultChangedContext::`scalar deleting destructor'(v11);
  return (unsigned int)v12;
}
