/*
 * XREFs of ?Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z @ 0x18007E2E8
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x18006C510 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z @ 0x18007E44C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasSinkContext@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18010FFF8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::Create(struct CCpuClipAntialiasSinkContext **a1)
{
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v3; // rbx
  int v4; // ecx
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ObjectCache = CThreadContext::GetObjectCache((struct CCpuClipAntialiasSinkContext *)a1);
  v3 = 0LL;
  v4 = *((_DWORD *)ObjectCache + 1);
  if ( v4 )
  {
    v3 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v3;
    *((_DWORD *)ObjectCache + 1) = v4 - 1;
  }
  if ( v3 || (v3 = DefaultHeap::Alloc(0x3D0uLL)) != 0LL )
  {
    memset_0(v3, 0, 0x3D0uLL);
    *v3 = &CCpuClipAntialiasSinkContext::`vftable';
    v3[2] = v3 + 5;
    v3[4] = v3 + 113;
    v3[3] = v3 + 5;
    *((_DWORD *)v3 + 242) = 0;
    (*(void (__fastcall **)(_QWORD *))*v3)(v3);
    result = 0LL;
    *a1 = (struct CCpuClipAntialiasSinkContext *)v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)0x8007000ELL,
      v6);
    return 2147942414LL;
  }
  return result;
}
