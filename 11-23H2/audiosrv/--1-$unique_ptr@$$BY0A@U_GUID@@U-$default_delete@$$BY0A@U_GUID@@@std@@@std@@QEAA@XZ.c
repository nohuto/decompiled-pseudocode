/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800EB324
 * Callers:
 *     _CAudioStream::GetDiscoveredEffects_::_1_::dtor$0 @ 0x1800EBF2E (_CAudioStream--GetDiscoveredEffects_--_1_--dtor$0.c)
 *     ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800ECAE0 (-PublishAudioEffects@CAudioStream@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
