/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800CE120
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18000FC20 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180043034 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180043060 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qg_guid_ @ 0x1800CF428 (WPP_SF_qg_guid_.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  float v10; // xmm10_4
  float v11; // xmm9_4
  int v12; // xmm11_4
  CVolumeUnit *v13; // rax
  unsigned int v14; // esi
  int v15; // r8d
  float DB; // xmm8_4
  int v17; // r15d
  CVolumeUnit *v18; // rax
  float v19; // xmm6_4
  CVolumeUnit *v20; // rax
  float v21; // xmm6_4
  __int64 v22; // rax
  CVolumeUnit *v23; // rax
  CVolumeUnit *v24; // rax
  unsigned int v25; // ebp
  float i; // xmm9_4
  CVolumeUnit *v27; // rax
  float v28; // xmm0_4
  CVolumeUnit *v29; // rax
  int v30; // eax
  int v31; // ebx
  __int64 v32; // r9
  __int64 v33; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+C0h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v8 = *((unsigned int *)this + 28);
  v36 = v4;
  v9 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v8);
  v10 = *(float *)(v9 + 8);
  v11 = *(float *)(v9 + 12);
  v12 = *(_DWORD *)(v9 + 16);
  if ( v10 > a2 || a2 > v11 )
  {
    v33 = 568LL;
    goto LABEL_23;
  }
  v13 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  v14 = 0;
  DB = CVolumeUnit::GetDB(v13);
  v17 = 1;
  if ( DB == a2 )
    goto LABEL_17;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22, v15, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v18 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  v19 = CVolumeUnit::GetDB(v18);
  AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
  *((float *)this + 52) = v19;
  *((float *)this + 53) = v10;
  *((float *)this + 54) = v11;
  *((_DWORD *)this + 55) = v12;
  v20 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  v21 = CVolumeUnit::GetDB(v20);
  v22 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
          (_QWORD *)this + 10,
          *((unsigned int *)this + 28));
  if ( *(float *)(v22 + 8) > a2 || a2 > *(float *)(v22 + 12) )
  {
    v33 = 585LL;
LABEL_23:
    v31 = -2147024809;
    v32 = 2147942487LL;
    goto LABEL_24;
  }
  v23 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  CVolumeUnit::SetDB(v23, a2);
  v24 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  v25 = 0;
  for ( i = CVolumeUnit::GetDB(v24) - v21; v25 < *((_DWORD *)this + 29); ++v25 )
  {
    if ( v25 != *((_DWORD *)this + 28) )
    {
      v27 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             v25);
      v28 = CVolumeUnit::GetDB(v27);
      v29 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             v25);
      CVolumeUnit::SetDB(v29, v28 + i);
    }
  }
  v30 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 232LL))(this);
  v31 = v30;
  if ( v30 < 0 )
  {
    v32 = (unsigned int)v30;
    v33 = 602LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v32);
    v14 = v31;
    goto LABEL_25;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
    *((_QWORD *)this + 16),
    0LL,
    a3);
LABEL_17:
  if ( a4 )
  {
    if ( DB != a2 )
      v17 = 0;
    *a4 = v17;
  }
LABEL_25:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v36);
  return v14;
}
