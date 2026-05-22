/*
 * XREFs of ??0?$unordered_map@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@4@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@@std@@QEAA@XZ @ 0x180042624
 * Callers:
 *     _dynamic_initializer_for__VirtualTouchpadControllerProxy::s_configuredControllers__ @ 0x1800015E0 (_dynamic_initializer_for__VirtualTouchpadControllerProxy--s_configuredControllers__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
int *std::unordered_map<VirtualTouchpadControllerProxy *,VPTP_ID>::unordered_map<VirtualTouchpadControllerProxy *,VPTP_ID>()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rax
  _QWORD *v2; // rcx

  VirtualTouchpadControllerProxy::s_configuredControllers = 0;
  qword_180242FD8 = 0LL;
  qword_180242FE0 = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v0 = v0;
  v0[1] = v0;
  qword_180242FD8 = (__int64)v0;
  qword_180242FE8 = 0LL;
  xmmword_180242FF0 = 0LL;
  qword_180243000 = 7LL;
  qword_180243008 = 8LL;
  VirtualTouchpadControllerProxy::s_configuredControllers = LODWORD(FLOAT_1_0);
  v1 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
  qword_180242FE8 = (__int64)v1;
  v2 = v1 + 16;
  *(_QWORD *)&xmmword_180242FF0 = v1 + 16;
  *((_QWORD *)&xmmword_180242FF0 + 1) = v1 + 16;
  while ( v1 != v2 )
    *v1++ = v0;
  return &VirtualTouchpadControllerProxy::s_configuredControllers;
}
