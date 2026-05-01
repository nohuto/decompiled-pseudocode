/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_8d476462564c7429b3edd0aaa6c2160c__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180042AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18004B690 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_8d476462564c7429b3edd0aaa6c2160c__Windows::Internal::CNoResult_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  volatile signed __int64 *v4; // rcx

  `eh vector destructor iterator'(
    a1 + 4,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  v4 = (volatile signed __int64 *)a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release(v4);
  }
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x28uLL);
  return a1;
}
