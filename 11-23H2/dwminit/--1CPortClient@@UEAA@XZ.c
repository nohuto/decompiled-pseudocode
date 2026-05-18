/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x18000E4AC
 * Callers:
 *     ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x18000D430 (--_ECPortClientRefCounted@@MEAAPEAXI@Z.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x18000E520 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NXZ @ 0x18000E250 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NX.c)
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000E778 (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::~CPortClient(CPortClient *this)
{
  void *v2; // rdi
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CPortClient::`vftable';
  CPortClient::Disconnect(this);
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_2163525945>::GetImpl'::`2'::impl) )
  {
    v2 = (void *)*((_QWORD *)this + 6);
    if ( v2 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
