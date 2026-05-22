/*
 * XREFs of ?AttachDevice@RIMDeviceCollection@@AEAAJPEAX0KPEAPEAVRIMDevice@@@Z @ 0x1800E3B44
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x1800E4330 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x1800E4278 (-InsertDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::AttachDevice(
        RIMDeviceCollection *this,
        void *a2,
        void *a3,
        unsigned int a4,
        struct RIMDevice **a5)
{
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // esi
  int inserted; // ebx
  __int64 v13; // rdx
  struct RIMDevice *v14; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct RIMDevice *v17; // [rsp+60h] [rbp+8h] BYREF

  v9 = (*(__int64 (__fastcall **)(RIMDeviceCollection *))(*(_QWORD *)this + 104LL))(this);
  v10 = *(_QWORD *)this;
  v11 = v9;
  a5 = 0LL;
  v17 = 0LL;
  inserted = (*(__int64 (__fastcall **)(RIMDeviceCollection *, void *, void *, _QWORD, unsigned int, struct RIMDevice ***))(v10 + 88))(
               this,
               a2,
               a3,
               a4,
               v9,
               &a5);
  if ( inserted >= 0 )
  {
    inserted = RIMDeviceCollection::InsertDevice(this, (struct RIMDevice *)a5);
    if ( inserted >= 0 )
    {
      inserted = (*(__int64 (__fastcall **)(RIMDeviceCollection *, _QWORD, struct RIMDevice **))(*(_QWORD *)this + 64LL))(
                   this,
                   v11,
                   &v17);
      if ( inserted >= 0 )
      {
        v14 = v17;
        if ( v17 && *((_DWORD *)v17 + 1) )
        {
          *(_DWORD *)v17 = v11;
          NtRIMGetSourceProcessId(a2, a3, (char *)v14 + 16);
          if ( *(_DWORD *)v17 == *((_DWORD *)a5 + 10) && *((_DWORD *)v17 + 1) )
          {
            a5[4] = v17;
            if ( (*((_DWORD *)v17 + 1) & 0xFFFFFEFF) == 0 )
              return 0LL;
            inserted = (*(__int64 (__fastcall **)(_QWORD, struct RIMDevice *, _QWORD))(**((_QWORD **)this + 2) + 40LL))(
                         *((_QWORD *)this + 2),
                         v17,
                         *((_QWORD *)this + 3));
            if ( inserted >= 0 )
              return 0LL;
            v13 = 1087LL;
          }
          else
          {
            inserted = -2147024809;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2E,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevice.cpp",
              (const char *)0x80070057LL);
            v13 = 1066LL;
          }
        }
        else
        {
          inserted = -2147418113;
          v13 = 1061LL;
        }
      }
      else
      {
        v13 = 1051LL;
      }
    }
    else
    {
      v13 = 1044LL;
    }
  }
  else
  {
    v13 = 1042LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
