/*
 * XREFs of ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800137C0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x180013808 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180013834 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800138FC (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::CompleteConstruction(CPerStreamVolumeAudioSession *this, char a2)
{
  const unsigned __int16 *Buffer; // rax
  int v5; // eax
  int MixFormat; // edi
  void *v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  void *v10; // rax
  void *v11; // rcx
  __int64 i; // rdx
  int v13; // esi
  __int64 v14; // rcx
  unsigned int v15; // eax
  int SessionConfiguration; // eax
  void *v17; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  void *v21; // rcx
  bool v22; // zf
  void *v23; // rcx
  EffectPack **v24; // [rsp+20h] [rbp-60h]
  struct _GUID v25; // [rsp+40h] [rbp-40h] BYREF
  EffectPack *v26[2]; // [rsp+50h] [rbp-30h] BYREF
  std::_Ref_count_base *v27; // [rsp+60h] [rbp-20h]
  LPVOID *p_pv; // [rsp+68h] [rbp-18h]
  struct tWAVEFORMATEX *v29; // [rsp+70h] [rbp-10h] BYREF
  char v30; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  LPVOID pv; // [rsp+A0h] [rbp+20h] BYREF

  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerStreamVolumeAudioSession *)((char *)this + 584));
  v24 = v26;
  v5 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                  + 40LL))(
         g_pEndpointCharacteristicsCache,
         Buffer,
         0LL,
         0LL);
  MixFormat = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x602,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v5,
      (int)v26);
LABEL_33:
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    goto LABEL_27;
  }
  pv = 0LL;
  p_pv = &pv;
  v29 = 0LL;
  v30 = 1;
  v25 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = EffectPack::GetMixFormat(v26[1], eHostProcessConnector, &v25, &v29);
  if ( v30 )
  {
    v7 = *p_pv;
    *p_pv = v29;
    if ( v7 )
      CoTaskMemFree(v7);
  }
  if ( MixFormat < 0 )
  {
    v19 = (unsigned int)MixFormat;
    v20 = 1548LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)v19,
      (int)v24);
    v21 = pv;
    v22 = pv == 0LL;
    pv = 0LL;
    if ( !v22 )
      CoTaskMemFree(v21);
    goto LABEL_33;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v8 = *((unsigned __int16 *)pv + 1);
  *((_DWORD *)this + 222) = v8;
  v9 = 4 * v8;
  if ( !is_mul_ok(v8, 4uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (void *)*((_QWORD *)this + 112);
  *((_QWORD *)this + 112) = v10;
  if ( v11 )
    operator delete(v11);
  if ( *((_QWORD *)this + 112) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 222); i = (unsigned int)(i + 1) )
      *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * (unsigned int)i) = 1065353216;
    if ( this != (CPerStreamVolumeAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v13 = a2 & 2;
    *((_BYTE *)this + 920) = v13 != 0;
    if ( *((_DWORD *)v26[0] + 16) == 3 )
    {
      *((_BYTE *)this + 920) = 0;
LABEL_22:
      v17 = pv;
      pv = 0LL;
      if ( v17 )
        CoTaskMemFree(v17);
      if ( v27 )
        std::_Ref_count_base::_Decref(v27);
      MixFormat = 0;
      goto LABEL_27;
    }
    if ( !v13 )
      goto LABEL_22;
    v14 = *((_QWORD *)this + 116);
    *((_QWORD *)this + 116) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, i);
    v15 = CPerStreamVolumeAudioSession::TryOpenSessionPropertyStore(this, (struct IPropertyStore **)this + 116);
    if ( wil::details::in1diag3::Log_IfFailedWithExpected(
           retaddr,
           (void *)0x634,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
           (const char *)v15,
           2,
           0x80070002) < 0 )
      goto LABEL_22;
    if ( !*((_QWORD *)this + 116) )
      goto LABEL_22;
    SessionConfiguration = CPerStreamVolumeAudioSession::LoadSessionConfiguration(this);
    MixFormat = SessionConfiguration;
    if ( SessionConfiguration >= 0 )
      goto LABEL_22;
    v19 = (unsigned int)SessionConfiguration;
    v20 = 1592LL;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x614,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)0x8007000ELL,
    (int)v26);
  if ( this != (CPerStreamVolumeAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v23 = pv;
  pv = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  MixFormat = -2147024882;
LABEL_27:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v26);
  return (unsigned int)MixFormat;
}
