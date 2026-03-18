/*
 * XREFs of ?ReleasePathDataResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0030214
 * Callers:
 *     ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002D060 (-ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x1C00D5B4C (-PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ.c)
 *     Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage @ 0x1C00D6060 (Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleasePathDataResources(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned int i; // edi
  int IsEnabledDeviceUsage; // eax
  __int64 v6; // rdx

  if ( *((_QWORD *)this + 19) )
  {
    for ( i = 0; i < *((_DWORD *)this + 61); ++i )
    {
      IsEnabledDeviceUsage = Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage();
      v6 = *((_QWORD *)this + 19);
      if ( IsEnabledDeviceUsage )
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(v6 + 16LL * i));
      else
        DirectComposition::CResourceMarshaler::PrivateRelease(*(DirectComposition::CResourceMarshaler **)(v6 + 16LL * i));
    }
    Win32FreePool(*((PVOID *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 61) = 0;
    *((_DWORD *)this + 62) = 0;
  }
}
