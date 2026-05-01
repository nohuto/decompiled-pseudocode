/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220_____lambda_955eb04c377e45185ef03ddb06152220___ @ 0x1801B4D40
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_955eb04c377e45185ef03ddb06152220____0 @ 0x1801B4F90 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_955eb04c377e45185ef_ea_1801B4F90.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180544120 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRef_ea_180544120.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220_____lambda_955eb04c377e45185ef03ddb06152220___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 2,
    a3);
  a1[2] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::`vftable';
  a1[42] = *(_QWORD *)(a3 + 320);
  *a1 = off_180644C08;
  result = a1;
  a1[43] = a2;
  return result;
}
