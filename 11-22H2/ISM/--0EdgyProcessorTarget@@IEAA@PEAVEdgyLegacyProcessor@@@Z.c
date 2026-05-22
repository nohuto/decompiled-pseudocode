/*
 * XREFs of ??0EdgyProcessorTarget@@IEAA@PEAVEdgyLegacyProcessor@@@Z @ 0x1801D8420
 * Callers:
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1801D8A50 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
EdgyProcessorTarget *__fastcall EdgyProcessorTarget::EdgyProcessorTarget(
        EdgyProcessorTarget *this,
        struct EdgyLegacyProcessor *a2)
{
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &EdgyProcessorTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &EdgyProcessorTarget::`vftable'{for `ITouchInfoAdapterClient'};
  *((_QWORD *)this + 2) = &EdgyProcessorTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 12) = -1;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = -1;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct EdgyLegacyProcessor *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = this;
  *((_QWORD *)this + 22) = 0LL;
  return this;
}
