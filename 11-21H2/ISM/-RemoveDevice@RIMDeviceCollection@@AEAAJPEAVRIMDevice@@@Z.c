/*
 * XREFs of ?RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800BCA80
 * Callers:
 *     ?DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800BBEFC (-DetachDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800BBFE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::RemoveDevice(RIMDeviceCollection *this, struct RIMDevice *a2)
{
  void *v2; // r8
  int Device; // eax
  unsigned int v5; // edi
  __int64 v7; // rdi
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = (void *)*((_QWORD *)a2 + 2);
  v10 = 0;
  Device = RIMDeviceCollection::FindDevice(this, 0, v2, 0LL, &v10);
  v5 = Device;
  if ( Device >= 0 )
  {
    v7 = v10;
    v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + v10 + 78);
    if ( v8 )
      (**v8)(v8, 1LL);
    *((_QWORD *)this + v7 + 78) = 0LL;
    --*((_DWORD *)this + 668);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return v5;
  }
}
