/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800CC5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180043300 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800C9B74 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800CB3E0 (WPP_SF_qD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  CVolumeSoftware *v6; // rdi
  int v7; // ebx
  __int64 i; // rsi
  _QWORD *v9; // r12
  unsigned int v11; // eax
  unsigned int j; // ebx
  _OWORD *v13; // rax
  int v14; // eax
  ATL::CAtlException *v15; // rbx
  unsigned int v16; // [rsp+30h] [rbp-88h]
  int v17; // [rsp+34h] [rbp-84h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp-80h] BYREF
  ATL::CAtlException *v19; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v20[4]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp+18h] BYREF

  v6 = this;
  v22 = 0;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x35u,
      (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
      this);
  }
  if ( !a3 )
    return 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 256));
  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 256);
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    v9 = (_QWORD *)((char *)v6 + 248);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)v6 + 31);
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4[i]->lpVtbl->QueryInterface)(
           a4[i],
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           (char *)v6 + 248) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v9 + 40LL))(*v9, &v22);
      if ( v7 < 0 )
        goto LABEL_19;
      if ( *v9 )
        break;
    }
  }
  if ( !*((_QWORD *)v6 + 31) )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids);
    }
    v7 = -2147467262;
LABEL_19:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
LABEL_20:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::InitializeAPOs", 2188, v7);
    return (unsigned int)v7;
  }
  v11 = v22;
  if ( *((_DWORD *)v6 + 29) != v22 && *((_DWORD *)v6 + 29) )
  {
    for ( j = 1; ; ++j )
    {
      v16 = j;
      if ( j >= v11 )
        break;
      v13 = (_OWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)v6 + 10, 0LL);
      try
      {
        v20[0] = *v13;
        v20[1] = v13[1];
        v20[2] = v13[2];
        v20[3] = v13[3];
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v6 + 10, j, (__int64)v20);
      }
      catch ( ATL::CAtlException *v19 )
      {
        v15 = v19;
        if ( *(_DWORD *)v19 == -1073741571 )
          _o__resetstkoflw();
        v17 = *(_DWORD *)v15;
        v7 = *(_DWORD *)v15;
        if ( v17 < 0 )
          goto LABEL_19;
        v6 = this;
        j = v16;
      }
      v11 = v22;
    }
    *((_DWORD *)v6 + 29) = v11;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v18);
  v14 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v6 + 232LL))(v6);
  v7 = v14;
  if ( v14 < 0 )
    goto LABEL_20;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x37u,
      (__int64)&WPP_972200849a753c8240eefd9f39169899_Traceguids,
      v6,
      v14);
  }
  return (unsigned int)v7;
}
