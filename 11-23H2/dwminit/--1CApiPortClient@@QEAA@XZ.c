/*
 * XREFs of ??1CApiPortClient@@QEAA@XZ @ 0x18000D3A8
 * Callers:
 *     _dynamic_atexit_destructor_for__g_PortClient__ @ 0x18000FBD0 (_dynamic_atexit_destructor_for__g_PortClient__.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000D478 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x18000D880 (-ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NXZ @ 0x18000E250 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@QEAA_NX.c)
 */

void __fastcall CApiPortClient::~CApiPortClient(CApiPortClient *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  CApiPortClient::Disconnect(this);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2163525945>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2163525945>::GetImpl'::`2'::impl) )
    CApiPortClient::ReleaseExtraDataSection(this);
  *((_BYTE *)this + 72) = 1;
  if ( v1 )
    LeaveCriticalSection(v1);
  DeleteCriticalSection(v1);
}
