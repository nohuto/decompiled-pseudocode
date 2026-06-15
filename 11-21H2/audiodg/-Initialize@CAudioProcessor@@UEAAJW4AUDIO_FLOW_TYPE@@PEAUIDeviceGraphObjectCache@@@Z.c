/*
 * XREFs of ?Initialize@CAudioProcessor@@UEAAJW4AUDIO_FLOW_TYPE@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140007A80
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x140007AFC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140009F28 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioProcessor::Initialize(
        CAudioProcessor *this,
        unsigned int a2,
        struct IDeviceGraphObjectCache *a3)
{
  struct IUnknown **v4; // rbx
  struct IUnknown *v5; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 1 )
  {
    v7 = -2147024809;
    v8 = 1198LL;
  }
  else
  {
    v4 = (struct IUnknown **)((char *)this + 784);
    *((_DWORD *)this + 20) = a2 != 0;
    ATL::CComPtr<IDeviceGraphObjectCache>::operator=((char *)this + 784, a3);
    v5 = (struct IUnknown *)*((_QWORD *)this + 99);
    if ( v5 != *v4 )
    {
      ATL::AtlComQIPtrAssign((struct IUnknown **)this + 99, *v4, &GUID_6749eb56_8b5f_4af1_861d_715c84e9094a);
      v5 = (struct IUnknown *)*((_QWORD *)this + 99);
    }
    if ( v5 )
    {
      *((_BYTE *)this + 776) = 1;
      return 0LL;
    }
    v7 = -2147467262;
    v8 = 1205LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)v7,
    v9);
  return v7;
}
