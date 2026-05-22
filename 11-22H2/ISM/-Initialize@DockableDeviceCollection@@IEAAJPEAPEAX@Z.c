/*
 * XREFs of ?Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800F2574
 * Callers:
 *     ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800F2284 (-Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041DD0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockableDeviceCollection::Initialize(HANDLE *this, void **a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  HANDLE v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 65554;
  v5 = HIDDeviceCollection::Initialize(this, (__int64)a2, (struct _RIM_USAGE_ANDPAGE *const)&v10, a4, 0x40u, a2);
  if ( v5 < 0 )
  {
    v6 = 71LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = this[345];
  this[345] = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v8 + 16LL))(v8);
  v5 = CoreUICreate(this + 345);
  if ( v5 < 0 )
  {
    v6 = 73LL;
    goto LABEL_3;
  }
  return 0LL;
}
