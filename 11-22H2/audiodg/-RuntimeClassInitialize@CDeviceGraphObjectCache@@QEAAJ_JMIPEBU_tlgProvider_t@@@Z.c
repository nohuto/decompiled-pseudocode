/*
 * XREFs of ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140003468
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140003840 (--$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@W.c)
 * Callees:
 *     ?CreateConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z @ 0x140003070 (-CreateConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x1400033FC (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCache::RuntimeClassInitialize(
        CDeviceGraphObjectCache *this,
        __int64 a2,
        float a3,
        unsigned int a4,
        const struct _tlgProvider_t *a5)
{
  int ConnectionHeap; // ebx
  __int64 v7; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 41) = a5;
  ConnectionHeap = CDeviceGraphObjectCache::CreateConnectionHeap(this, a2, a3, a4);
  if ( ConnectionHeap < 0 )
  {
    v9 = 558LL;
  }
  else
  {
    v7 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    ConnectionHeap = GetAPOProcessingHostInstance((struct IAPOProcessingHost **)this + 13);
    if ( ConnectionHeap >= 0 )
      return 0LL;
    v9 = 559LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)(unsigned int)ConnectionHeap,
    v10);
  return (unsigned int)ConnectionHeap;
}
