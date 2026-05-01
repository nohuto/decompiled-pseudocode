/*
 * XREFs of ??0TimelineHost@TimelineUI@@QE$AAA@XZ @ 0x180015CF4
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::operator() @ 0x18042FDDC (_lambda_baaea9c5454d5217874bd274f7881db0_--operator().c)
 * Callees:
 *     ?ActivateInstance@IActivationFactory@Details@Platform@@UE$AAAPE$AAVObject@3@XZ @ 0x1800F518C (-ActivateInstance@IActivationFactory@Details@Platform@@UE$AAAPE$AAVObject@3@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018E6A4 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TimelineUI::TimelineHost::TimelineHost(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]
  int v13; // [rsp+2Ch] [rbp-4h]
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h]
  __int64 v16; // [rsp+70h] [rbp+40h]

  v11 = 53LL;
  v12 = 192;
  v13 = 1174405120;
  v14 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"TimelineUI.TimelineHost",
                                &v11,
                                (struct Platform::Guid *)&v14,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  v5 = Platform::Details::IActivationFactory::ActivateInstance(v14);
  v15 = v5;
  LOBYTE(v6) = 1;
  v7 = __abi_winrt_cast_to(v6, v5, &_uuidof__AVTimelineHost_TimelineUI__);
  v16 = v7;
  v8 = __abi_winrt_ptr_ctor(v7);
  v16 = v8;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v9 = __abi_winrt_ptr_ctor(v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v9;
}
