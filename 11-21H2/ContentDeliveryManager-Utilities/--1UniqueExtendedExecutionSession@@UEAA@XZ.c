/*
 * XREFs of ??1UniqueExtendedExecutionSession@@UEAA@XZ @ 0x1800B40A0
 * Callers:
 *     ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x1800B4400 (--_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006940C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800B4560 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UniqueExtendedExecutionSession::~UniqueExtendedExecutionSession(UniqueExtendedExecutionSession *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &UniqueExtendedExecutionSession::`vftable';
  *((_QWORD *)this + 1) = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 5) = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource>>'};
  v2 = *((_QWORD *)this + 8);
  if ( v2 && *((_QWORD *)this + 9) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)(unsigned int)v3);
    *((_QWORD *)this + 9) = 0LL;
  }
  UniqueExtendedExecutionSession::CloseSession(this, 0);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>((__int64)this);
}
