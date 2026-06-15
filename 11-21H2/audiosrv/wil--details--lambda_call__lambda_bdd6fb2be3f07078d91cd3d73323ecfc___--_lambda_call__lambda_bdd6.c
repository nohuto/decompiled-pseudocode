/*
 * XREFs of wil::details::lambda_call__lambda_bdd6fb2be3f07078d91cd3d73323ecfc___::_lambda_call__lambda_bdd6fb2be3f07078d91cd3d73323ecfc___ @ 0x18014416C
 * Callers:
 *     _CEndpointCharacteristics::GetCustomDeviceFormatsSupportedOnEndpoint_::_1_::dtor$2 @ 0x180148BB4 (_CEndpointCharacteristics--GetCustomDeviceFormatsSupportedOnEndpoint_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::GetCustomDeviceFormatsSupportedOnEndpoint_::_1_::dtor$3 @ 0x180148BC0 (_CEndpointCharacteristics--GetCustomDeviceFormatsSupportedOnEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_bdd6fb2be3f07078d91cd3d73323ecfc___::_lambda_call__lambda_bdd6fb2be3f07078d91cd3d73323ecfc___(
        __int64 a1)
{
  __int64 v1; // rdi

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( **(_DWORD **)a1 )
    {
      do
      {
        operator delete(*(void **)(**(_QWORD **)(a1 + 8) + 8 * v1));
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < **(_DWORD **)a1 );
    }
    operator delete(**(void ***)(a1 + 8));
  }
}
