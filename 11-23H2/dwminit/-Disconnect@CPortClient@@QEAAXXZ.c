/*
 * XREFs of ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000E778
 * Callers:
 *     ??1CPortClient@@UEAA@XZ @ 0x18000E4AC (--1CPortClient@@UEAA@XZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x18000E7E4 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NXZ @ 0x18000E250 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NX.c)
 */

void __fastcall CPortClient::Disconnect(CPortClient *this)
{
  void *v2; // rcx

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_2163525945>::GetImpl'::`2'::impl)
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
}
