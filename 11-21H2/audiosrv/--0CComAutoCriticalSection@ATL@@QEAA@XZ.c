/*
 * XREFs of ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x18004C5E4
 * Callers:
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x18004B664 (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ??0AudioDeviceMgr@@IEAA@XZ @ 0x18004C0A4 (--0AudioDeviceMgr@@IEAA@XZ.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x18004C320 (--0EndpointCollection@@IEAA@XZ.c)
 *     ??0CConstraintModelResourceManager@@AEAA@XZ @ 0x18004C438 (--0CConstraintModelResourceManager@@AEAA@XZ.c)
 *     ??0PhoneTopology@@IEAA@XZ @ 0x18004C51C (--0PhoneTopology@@IEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180025018 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
ATL::CComAutoCriticalSection *__fastcall ATL::CComAutoCriticalSection::CComAutoCriticalSection(
        ATL::CComAutoCriticalSection *this)
{
  int v2; // eax

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v2 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)this);
  if ( v2 < 0 )
    ATL::AtlThrowImpl(v2);
  return this;
}
