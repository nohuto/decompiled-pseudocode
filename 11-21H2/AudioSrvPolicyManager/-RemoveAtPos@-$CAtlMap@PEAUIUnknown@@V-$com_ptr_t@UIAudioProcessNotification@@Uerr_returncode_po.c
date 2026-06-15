/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18001AA34
 * Callers:
 *     _ATL::CAtlMap_IUnknown___wil::com_ptr_t_IAudioProcessNotification_wil::err_returncode_policy__ATL::CElementTraits_IUnknown____ATL::CElementTraits_wil::com_ptr_t_IAudioProcessNotification_wil::err_returncode_policy_____::SetAt_::_1_::catch$2 @ 0x1800456CB (_ATL--CAtlMap_IUnknown___wil--com_ptr_t_IAudioProcessNotification_wil--err_returnco_ea_1800456CB.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180016FDC (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_polic.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 i; // rcx
  __int64 v8; // rcx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16));
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
  if ( a2 == v6 )
  {
    v6 = 0LL;
  }
  else
  {
    for ( i = *(_QWORD *)(v6 + 16); i != a2; i = *(_QWORD *)(i + 16) )
      v6 = i;
  }
  v8 = *(_QWORD *)(a2 + 16);
  if ( v6 )
    *(_QWORD *)(v6 + 16) = v8;
  else
    *(_QWORD *)(v5 + 8 * v4) = v8;
  ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::FreeNode(
    a1,
    a2);
}
