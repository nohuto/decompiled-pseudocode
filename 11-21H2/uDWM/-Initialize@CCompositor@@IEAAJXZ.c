/*
 * XREFs of ?Initialize@CCompositor@@IEAAJXZ @ 0x180052A5C
 * Callers:
 *     ?Create@CCompositor@@SAJPEAPEAV1@@Z @ 0x180052990 (-Create@CCompositor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0 (--1-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@.c)
 *     ?InitializeInteropCompositor@CCompositor@@AEAAJXZ @ 0x180052B14 (-InitializeInteropCompositor@CCompositor@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCompositor::Initialize(CCompositor *this)
{
  int v2; // eax
  int Device3; // ebx
  __int64 v4; // rcx
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // r8
  struct IDwmChannel *v8; // rax
  __int64 v9; // rcx
  unsigned int v11; // eax
  struct IDwmChannel *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = MilCompositionEngine_CreateChannel(&v12);
  Device3 = v2;
  if ( v2 < 0 )
  {
    v5 = v2;
    v11 = 50;
  }
  else
  {
    v4 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    Device3 = DCompositionCreateDevice3(0LL, &GUID_e01eb649_787e_4560_b398_0de7a2065d8b, (char *)this + 24);
    v5 = Device3;
    if ( Device3 < 0 )
    {
      v11 = 52;
    }
    else
    {
      Device3 = CCompositor::InitializeInteropCompositor(this);
      v5 = Device3;
      if ( Device3 >= 0 )
      {
        v8 = v12;
        v12 = 0LL;
        v9 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 2) = v8;
        if ( v9 )
          (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 16LL))(
            v9,
            v6,
            v7,
            (unsigned int)Device3);
        Device3 = 0;
        goto LABEL_9;
      }
      v11 = 53;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v11);
  if ( v12 )
  {
    (*(void (__fastcall **)(struct IDwmChannel *))(*(_QWORD *)v12 + 40LL))(v12);
    v12 = 0LL;
  }
LABEL_9:
  wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>((__int64 *)&v12);
  return (unsigned int)Device3;
}
