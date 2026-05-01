/*
 * XREFs of ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x18073A930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::InitializeViewDependent(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v9 = (RTL_SRWLOCK *)(a1 + 128);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 128));
  if ( a4 && *(_QWORD *)(a1 + 72) != a4 )
  {
    v13 = a4;
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef(&v13);
    v13 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = a4;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  }
  *(_DWORD *)(a1 + 60) = a2;
  *(_BYTE *)(a1 + 96) = a5;
  if ( *(_DWORD *)(a1 + 80) )
    MicrosoftTelemetryAssertTriggeredNoArgs(v11, v10);
  else
    *(_DWORD *)(a1 + 80) = a3;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  return 0LL;
}
