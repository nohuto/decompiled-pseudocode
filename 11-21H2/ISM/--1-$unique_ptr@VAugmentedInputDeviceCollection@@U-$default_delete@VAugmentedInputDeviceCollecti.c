/*
 * XREFs of ??1?$unique_ptr@VAugmentedInputDeviceCollection@@U?$default_delete@VAugmentedInputDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x1800BACB8
 * Callers:
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$0 @ 0x180055336 (_AugmentedInputDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VAugmentedInputDeviceCollection@@@std@@QEBAXPEAVAugmentedInputDeviceCollection@@@Z @ 0x1800BAD74 (--R-$default_delete@VAugmentedInputDeviceCollection@@@std@@QEBAXPEAVAugmentedInputDeviceCollecti.c)
 */

__int64 __fastcall std::unique_ptr<AugmentedInputDeviceCollection>::~unique_ptr<AugmentedInputDeviceCollection>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<AugmentedInputDeviceCollection>::operator()(a1, *a1);
  return result;
}
