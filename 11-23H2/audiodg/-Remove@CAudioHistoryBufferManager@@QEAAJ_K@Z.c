/*
 * XREFs of ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x140069DDC
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140002404 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?DestroyStream@CStreamInstance@@UEAAJXZ @ 0x1400259B0 (-DestroyStream@CStreamInstance@@UEAAJXZ.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140067DF0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x140069A68 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?RemoveNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x140069F50 (-RemoveNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CAudioHistoryBufferManager::Remove(LPCRITICAL_SECTION lpCriticalSection, __int64 a2)
{
  __int64 Node; // rax
  int v6; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  EnterCriticalSection(lpCriticalSection);
  v8 = 0LL;
  Node = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
           (__int64)&lpCriticalSection[1],
           a2,
           &v7,
           &v6,
           &v8);
  if ( Node )
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveNode(
      &lpCriticalSection[1],
      Node,
      v8);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
