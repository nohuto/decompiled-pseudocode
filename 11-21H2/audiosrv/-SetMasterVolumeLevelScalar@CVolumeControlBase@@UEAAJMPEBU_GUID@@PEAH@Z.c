/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800CE400
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18000FC20 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001156C (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180043034 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180043060 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180043890 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qdg @ 0x1800CF278 (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x1800CF2D8 (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x1800CF428 (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x1800CF4FC (WPP_SF_qggg.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  int *v4; // r12
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned __int64 v8; // rdx
  CVolumeUnit *v9; // rax
  int v10; // r8d
  float Wiper; // xmm12_4
  int v12; // r14d
  CVolumeUnit *v13; // rax
  float DB; // xmm11_4
  CVolumeUnit *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  _DWORD *v19; // rax
  int v20; // xmm9_4
  int v21; // xmm8_4
  int v22; // xmm7_4
  CVolumeUnit *v23; // rax
  float v24; // xmm0_4
  CVolumeUnit *v25; // rax
  float v26; // xmm7_4
  CVolumeUnit *v27; // rax
  double v28; // xmm3_8
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // ebx
  CVolumeUnit *v32; // rax
  float v33; // xmm6_4
  CVolumeUnit *v34; // rax
  double v35; // xmm3_8
  CVolumeUnit *v36; // rax
  __int64 v37; // rax
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+40h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = a4;
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v17 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return v17;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v8 = *((unsigned int *)this + 28);
  v39 = v7;
  v9 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v8);
  Wiper = CVolumeUnit::GetWiper(v9);
  v12 = 1;
  if ( a2 == Wiper )
    goto LABEL_35;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23, v10, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v13 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  DB = CVolumeUnit::GetDB(v13);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      24LL,
      &WPP_972200849a753c8240eefd9f39169899_Traceguids,
      this,
      *((_DWORD *)this + 28),
      a2);
  }
  v15 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  v16 = CVolumeUnit::SetWiper(v15, a2);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v19 = (_DWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                      (_QWORD *)this + 10,
                      *((unsigned int *)this + 28));
    v20 = v19[4];
    v21 = v19[3];
    v22 = v19[2];
    v23 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    v24 = CVolumeUnit::GetDB(v23);
    AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
    *((float *)this + 52) = v24;
    *((_DWORD *)this + 53) = v22;
    *((_DWORD *)this + 54) = v21;
    *((_DWORD *)this + 55) = v20;
    v25 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    v26 = CVolumeUnit::GetDB(v25) - DB;
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v27 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             *((unsigned int *)this + 28));
      v28 = CVolumeUnit::GetDB(v27);
      WPP_SF_qggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v29, v30, this, v26, *(_QWORD *)&v28, DB);
    }
    v31 = 0;
    if ( *((_DWORD *)this + 29) )
    {
      do
      {
        if ( v31 != *((_DWORD *)this + 28) )
        {
          v32 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 10,
                                 v31);
          v33 = CVolumeUnit::GetDB(v32) + v26;
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v34 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                   (_QWORD *)this + 10,
                                   v31);
            v35 = CVolumeUnit::GetDB(v34);
            WPP_SF_qdgg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              26LL,
              &WPP_972200849a753c8240eefd9f39169899_Traceguids,
              this,
              v31,
              *(_QWORD *)&v35,
              v33);
          }
          v36 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 10,
                                 v31);
          CVolumeUnit::SetDB(v36, v33);
        }
        ++v31;
      }
      while ( v31 < *((_DWORD *)this + 29) );
      v4 = a4;
    }
    v16 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 232LL))(this);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 741LL;
      goto LABEL_29;
    }
    if ( !a3 )
      goto LABEL_34;
    v37 = 0x4E8B67CC68F64C3DLL - *(_QWORD *)&a3->Data1;
    if ( *(_QWORD *)&a3->Data1 == 0x4E8B67CC68F64C3DLL )
      v37 = 0x6147AA4EA63F7FA1LL - *(_QWORD *)a3->Data4;
    if ( v37 )
LABEL_34:
      (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
        *((_QWORD *)this + 16),
        0LL,
        a3);
LABEL_35:
    if ( v4 )
    {
      if ( Wiper != a2 )
        v12 = 0;
      *v4 = v12;
    }
    v17 = 0;
    goto LABEL_40;
  }
  v18 = 712LL;
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)(unsigned int)v16);
LABEL_40:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v39);
  return v17;
}
