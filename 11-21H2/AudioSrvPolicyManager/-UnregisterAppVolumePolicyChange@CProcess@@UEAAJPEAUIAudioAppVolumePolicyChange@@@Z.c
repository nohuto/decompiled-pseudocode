/*
 * XREFs of ?UnregisterAppVolumePolicyChange@CProcess@@UEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x18001C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000BFFC (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 */

__int64 __fastcall CProcess::UnregisterAppVolumePolicyChange(CProcess *this, struct IAudioAppVolumePolicyChange *a2)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 **v5; // r8
  __int64 *i; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 28);
  if ( !v3 )
    return 0LL;
  v4 = -2147023728;
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 168));
  v5 = (__int64 **)(v3 + 120);
  for ( i = *(__int64 **)(v3 + 120); i; i = (__int64 *)*i )
  {
    if ( (struct IAudioAppVolumePolicyChange *)i[2] == a2 )
    {
      v7 = (__int64 *)*i;
      if ( i == *v5 )
        *v5 = v7;
      else
        *(_QWORD *)i[1] = v7;
      v8 = i[1];
      if ( i == *(__int64 **)(v3 + 128) )
        *(_QWORD *)(v3 + 128) = v8;
      else
        *(_QWORD *)(*i + 8) = v8;
      *i = *(_QWORD *)(v3 + 152);
      *(_QWORD *)(v3 + 152) = i;
      if ( (*(_QWORD *)(v3 + 136))-- == 1LL )
        ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(v3 + 120);
      v4 = 0;
      break;
    }
  }
  if ( v3 != -168 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 168));
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x115D,
    (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
