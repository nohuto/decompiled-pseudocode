/*
 * XREFs of ?UnregisterAppVolumePolicyChange@CProcess@@UEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18002A760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18002A6A4 (-UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 */

__int64 __fastcall CProcess::UnregisterAppVolumePolicyChange(CProcess *this, struct IAudioAppVolumePolicyChange *a2)
{
  CApplication *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CApplication *)*((_QWORD *)this + 28);
  if ( !v2 )
    return 0LL;
  v3 = CApplication::UnregisterAppVolumePolicyChange(v2, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x115D,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
