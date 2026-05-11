/*
 * XREFs of ??_GCSidebandDevice@@UEAAPEAXI@Z @ 0x1C0009030
 * Callers:
 *     ??_ECSidebandDevice@@W7EAAPEAXI@Z @ 0x1C0009020 (--_ECSidebandDevice@@W7EAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

CSidebandDevice *__fastcall CSidebandDevice::`scalar deleting destructor'(CSidebandDevice *this, char a2)
{
  *(_QWORD *)this = &CSidebandDevice::`vftable'{for `ISidebandDevice'};
  *(_QWORD *)(*((_QWORD *)this + 6) + 152LL) = 0LL;
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePool(this);
  return this;
}
