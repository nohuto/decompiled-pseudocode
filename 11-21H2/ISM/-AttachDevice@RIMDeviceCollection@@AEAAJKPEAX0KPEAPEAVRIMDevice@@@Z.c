/*
 * XREFs of ?AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z @ 0x1800BBB74
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x1800BC3E0 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800BC300 (-InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::AttachDevice(
        RIMDeviceCollection *this,
        __int64 a2,
        void *a3,
        void *a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // esi
  int inserted; // edi
  __int64 v13; // rdx
  struct RIMDevice *v15; // r8
  int v16; // ebx
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct RIMDevice *v19; // [rsp+60h] [rbp+8h] BYREF

  v9 = (*(__int64 (__fastcall **)(RIMDeviceCollection *))(*(_QWORD *)this + 104LL))(this);
  v10 = *(_QWORD *)this;
  v11 = v9;
  a6 = 0LL;
  v19 = 0LL;
  inserted = (*(__int64 (__fastcall **)(RIMDeviceCollection *, void *, void *, _QWORD, unsigned int, struct RIMDevice ***))(v10 + 88))(
               this,
               a3,
               a4,
               a5,
               v9,
               &a6);
  if ( inserted < 0 )
  {
    v13 = 1049LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  inserted = RIMDeviceCollection::InsertDevice(this, (struct RIMDevice *)a6);
  if ( inserted < 0 )
  {
    v13 = 1051LL;
    goto LABEL_3;
  }
  inserted = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD, struct RIMDevice **))(*(_QWORD *)this + 64LL))(
               this,
               v11,
               &v19);
  if ( inserted < 0 )
  {
    v13 = 1058LL;
    goto LABEL_3;
  }
  v15 = v19;
  if ( v19 && *((_DWORD *)v19 + 1) )
  {
    *(_DWORD *)v19 = v11;
    NtRIMGetSourceProcessId(a3, a4, (char *)v15 + 16);
    if ( *(_DWORD *)v19 == *((_DWORD *)a6 + 10) && *((_DWORD *)v19 + 1) )
    {
      a6[4] = v19;
      if ( (*((_DWORD *)v19 + 1) & 0xFFFFFEFF) == 0 )
        return 0LL;
      v16 = (*(__int64 (__fastcall **)(_QWORD, struct RIMDevice *, _QWORD))(**((_QWORD **)this + 2) + 40LL))(
              *((_QWORD *)this + 2),
              v19,
              *((_QWORD *)this + 3));
      if ( v16 >= 0 )
        return 0LL;
      v17 = 1094LL;
    }
    else
    {
      v16 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevice.cpp",
        (const char *)0x80070057LL);
      v17 = 1073LL;
    }
  }
  else
  {
    v16 = -2147418113;
    v17 = 1068LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}
