/*
 * XREFs of ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800268E8
 * Callers:
 *     ??0PhoneTopology@@IEAA@XZ @ 0x180026820 (--0PhoneTopology@@IEAA@XZ.c)
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x180059294 (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x18005AD80 (--0EndpointCollection@@IEAA@XZ.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x18005BD14 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x180063D94 (--0PhoneCallAudio@@IEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180026928 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
ATL::CComAutoCriticalSection *__fastcall ATL::CComAutoCriticalSection::CComAutoCriticalSection(
        ATL::CComAutoCriticalSection *this)
{
  int v2; // eax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v2 = ATL::CComCriticalSection::Init(this);
  if ( v2 < 0 )
    ATL::AtlThrowImpl(v2);
  return this;
}
