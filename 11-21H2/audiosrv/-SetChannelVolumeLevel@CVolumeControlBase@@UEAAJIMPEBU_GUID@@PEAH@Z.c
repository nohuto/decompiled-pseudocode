/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CDD90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180043034 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180043060 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004356C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevel(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  unsigned __int64 v6; // rbp
  char *v8; // rbx
  __int64 v9; // rdx
  CVolumeUnit *v10; // rax
  float DB; // xmm0_4
  __int64 v12; // rax
  CVolumeUnit *v13; // rax
  char v14; // si
  int v15; // eax
  unsigned int v16; // ebx
  CVolumeUnit *v17; // rax
  int v19[2]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = a2;
  v8 = (char *)this + 8;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  *(_QWORD *)v19 = v8;
  if ( (unsigned int)v6 >= *((_DWORD *)this + 29) )
  {
    v9 = 638LL;
LABEL_14:
    v16 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    goto LABEL_15;
  }
  v10 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v6);
  DB = CVolumeUnit::GetDB(v10);
  v12 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v6);
  if ( *(float *)(v12 + 8) > a3 || a3 > *(float *)(v12 + 12) )
  {
    v9 = 643LL;
    goto LABEL_14;
  }
  v13 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v6);
  CVolumeUnit::SetDB(v13, a3);
  v14 = 1;
  v15 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 224LL))(this, (unsigned int)v6);
  v16 = v15;
  if ( v15 >= 0 )
  {
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
      *((_QWORD *)this + 16),
      0LL,
      a4);
    if ( a5 )
      *a5 = DB == a3;
    v14 = 0;
    v16 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v15);
  }
  if ( v14 )
  {
    v17 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           v6);
    CVolumeUnit::SetDB(v17, DB);
  }
LABEL_15:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v19);
  return v16;
}
