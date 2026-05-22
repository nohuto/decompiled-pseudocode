/*
 * XREFs of wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___ @ 0x1800E3A78
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180041DD0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     _HIDDeviceCollection::Initialize_::_1_::dtor$0 @ 0x180082769 (_HIDDeviceCollection--Initialize_--_1_--dtor$0.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800E4064 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     _RIMDeviceCollection::Initialize_::_1_::dtor$0 @ 0x1800E417E (_RIMDeviceCollection--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x1800E3D0C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    RIMDeviceCollection::Close(*(RIMDeviceCollection **)a1);
  }
}
