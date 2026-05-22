/*
 * XREFs of wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___ @ 0x1800E3AF0
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041DD0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     _HIDDeviceCollection::Initialize_::_1_::dtor$3 @ 0x18008277B (_HIDDeviceCollection--Initialize_--_1_--dtor$3.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800E4190 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     _RIMDeviceCollection::InitializeRIM_::_1_::dtor$0 @ 0x1800E4266 (_RIMDeviceCollection--InitializeRIM_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    {
      RIMUnregisterForInput();
      CloseHandle(*(HANDLE *)(*(_QWORD *)a1 + 80LL));
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 80LL) = 0LL;
    }
  }
  return result;
}
