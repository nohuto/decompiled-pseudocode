/*
 * XREFs of ??_EInputInfoValidator@@UEAAPEAXI@Z @ 0x1801B50E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InputInfoValidator@@UEAA@XZ @ 0x1801B506C (--1InputInfoValidator@@UEAA@XZ.c)
 */

void **__fastcall InputInfoValidator::`vector deleting destructor'(void **this, char a2)
{
  InputInfoValidator::~InputInfoValidator(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
