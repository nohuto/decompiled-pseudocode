/*
 * XREFs of ?InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800E4278
 * Callers:
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z @ 0x1800E3B44 (-AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x1800E3F9C (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::InsertDevice(RIMDeviceCollection *this, void **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int Device; // edx
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *i; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)this + 668) >= 0x100u )
  {
    v4 = -2147024882;
    v5 = 974LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v4);
    return v4;
  }
  Device = RIMDeviceCollection::FindDevice(this, 0, a2[2], 0LL, 0LL);
  if ( Device != -2147023728 )
  {
    v4 = -2147024883;
    v5 = 982LL;
    goto LABEL_3;
  }
  v9 = 0LL;
  for ( i = (_QWORD *)((char *)this + 624); *i != v8; ++i )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 0x100 )
      return Device;
  }
  *((_QWORD *)this + v9 + 78) = a2;
  ++*((_DWORD *)this + 668);
  return 0;
}
