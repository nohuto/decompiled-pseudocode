/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x1400027F0
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x14000262C (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140003994 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003B18 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x14000D710 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NXZ @ 0x14000803C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NX.c)
 */

void __fastcall CPortClient::~CPortClient(CPortClient *this)
{
  void *v2; // rcx
  void *v3; // rdi
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CPortClient::`vftable';
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2163525945>::GetImpl'::`2'::impl)
    && *((_QWORD *)this + 4) )
  {
    NtAlpcDeletePortSection(*((_QWORD *)this + 2), 0LL);
  }
  if ( *((_BYTE *)this + 24) )
  {
    v2 = (void *)*((_QWORD *)this + 2);
    if ( v2 )
    {
      CloseHandle(v2);
      *((_BYTE *)this + 24) = 0;
    }
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 2) = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2163525945>::GetImpl'::`2'::impl) )
  {
    v3 = (void *)*((_QWORD *)this + 6);
    if ( v3 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
