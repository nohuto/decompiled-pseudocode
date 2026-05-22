/*
 * XREFs of ?FreeProxy@CProxyTable@DirectComposition@@QEAAXPEAX@Z @ 0x18002493C
 * Callers:
 *     ?RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180021EF0 (-RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024678 (-ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z @ 0x18006A704 (-OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CProxyTable::FreeProxy(DirectComposition::CProxyTable *this, _QWORD *a2)
{
  bool v2; // zf

  *(_OWORD *)a2 = 0LL;
  a2[1] = *((_QWORD *)this + 3);
  v2 = (*((_DWORD *)this + 2))-- == 1;
  *((_QWORD *)this + 3) = a2;
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 3) = 0;
  }
}
