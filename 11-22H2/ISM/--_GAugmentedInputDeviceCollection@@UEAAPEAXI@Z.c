/*
 * XREFs of ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x1800E2DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800E2D0C (--1AugmentedInputDeviceCollection@@UEAA@XZ.c)
 */

AugmentedInputDeviceCollection *__fastcall AugmentedInputDeviceCollection::`scalar deleting destructor'(
        AugmentedInputDeviceCollection *this,
        char a2)
{
  AugmentedInputDeviceCollection::~AugmentedInputDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
