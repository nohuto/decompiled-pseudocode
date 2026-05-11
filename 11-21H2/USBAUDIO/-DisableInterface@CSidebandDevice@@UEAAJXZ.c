/*
 * XREFs of ?DisableInterface@CSidebandDevice@@UEAAJXZ @ 0x1C0009C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::DisableInterface(CSidebandDevice *this)
{
  unsigned int v1; // ebx
  struct _UNICODE_STRING *v2; // rdi

  v1 = 0;
  v2 = (struct _UNICODE_STRING *)((char *)this + 56);
  if ( *((_WORD *)this + 28) )
  {
    v1 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 56), 0);
    RtlFreeUnicodeString(v2);
  }
  return v1;
}
