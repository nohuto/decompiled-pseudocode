/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x18001C900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAMAEA_J@Z @ 0x1800324FC (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetPolicyVolumeForStreamClass(
        CWindowsPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2,
        struct StreamCategoryPolicyVolumes *a3)
{
  int PolicyVolumeForStreamClass; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)a3 + 3) = 1065353216;
  *((_BYTE *)a3 + 8) = 0;
  PolicyVolumeForStreamClass = CStreamClassPolicyManager::GetPolicyVolumeForStreamClass(
                                 this,
                                 a2,
                                 (float *)a3 + 1,
                                 (__int64 *)a3 + 2);
  v5 = PolicyVolumeForStreamClass;
  if ( PolicyVolumeForStreamClass >= 0 )
  {
    *(_BYTE *)a3 = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)PolicyVolumeForStreamClass);
    return v5;
  }
}
