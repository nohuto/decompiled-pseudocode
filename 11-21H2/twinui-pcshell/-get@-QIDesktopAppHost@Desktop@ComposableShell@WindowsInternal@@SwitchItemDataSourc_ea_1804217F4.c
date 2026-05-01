/*
 * XREFs of ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@UE$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x1804217F4
 * Callers:
 *     ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@W7E$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x1801FD9F0 (-get@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplore.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18006337C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_0361bfdb57f0c2eeee46865918d0f50e_::operator() @ 0x18041FFB0 (_lambda_0361bfdb57f0c2eeee46865918d0f50e_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _get__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__SwitchItemDataSource_XamlExplorerHost__UE_AAAPE_AAUISwitchItemDataSource_Multitasking_3Internal_Windows__XZ(
        __int64 a1)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = __abi_winrt_ptr_ctor(a1);
  v9 = v2;
  if ( !__std_init_once_begin_initialize((LPINIT_ONCE)(a1 + 80), 0, (PBOOL)&fPending, 0LL) )
    abort();
  if ( (_DWORD)fPending )
  {
    v6 = a1 + 80;
    lambda_0361bfdb57f0c2eeee46865918d0f50e_::operator()((__int64)&v9);
    v7 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v6);
    v2 = v9;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (RTL_SRWLOCK *)(a1 + 104);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 104));
  fPending = a1 + 104;
  v4 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 72));
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v4;
}
