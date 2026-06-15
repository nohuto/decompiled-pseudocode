/*
 * XREFs of ?Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z @ 0x1400633E0
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x1400638A4 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?SetAt@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAPEAU__POSITION@@_KAEBV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140063DD4 (-SetAt@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$CE.c)
 *     ??$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Z @ 0x140087560 (--$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemor.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioHistoryBufferManager::Add(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        struct ICrossProcessMemory *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  ATL::CAtlException *v12; // rbx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+40h] [rbp-28h] BYREF
  ATL::CAtlException *v16; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct ICrossProcessMemory *v18; // [rsp+70h] [rbp+8h] BYREF
  char v19; // [rsp+88h] [rbp+20h] BYREF

  EnterCriticalSection(this);
  v14 = this;
  v13 = 0LL;
  v6 = this + 1;
  if ( ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
         (int)this + 40,
         a2,
         (unsigned int)&v19,
         (unsigned int)&v18,
         (__int64)&v15) )
  {
    v7 = -2147024809;
    v8 = 2147942487LL;
    v9 = 52LL;
  }
  else
  {
    v13 = 0LL;
    v18 = a3;
    v10 = Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryControl,ICPAudioHistoryControl,ICrossProcessMemory * &>(
            &v13,
            &v18);
    v7 = v10;
    if ( v10 >= 0 )
    {
      try
      {
        ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::SetAt(
          v6,
          a2,
          &v13);
      }
      catch ( ATL::CAtlException *v16 )
      {
        v12 = v16;
        if ( *(_DWORD *)v16 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v18) = *(_DWORD *)v12;
        v7 = (unsigned int)v18;
        if ( (int)v18 < 0 )
        {
          v8 = (unsigned int)v18;
          v9 = 58LL;
          goto LABEL_5;
        }
      }
      v7 = 0;
      goto LABEL_7;
    }
    v8 = (unsigned int)v10;
    v9 = 54LL;
  }
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiohistorybuffermanager.cpp",
    (const char *)v8);
LABEL_7:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
  return v7;
}
