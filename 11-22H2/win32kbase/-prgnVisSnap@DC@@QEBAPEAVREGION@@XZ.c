/*
 * XREFs of ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0038B60
 * Callers:
 *     GreGetClipBox @ 0x1C00389B0 (GreGetClipBox.c)
 *     EngUpdateDeviceSurface @ 0x1C015F100 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C005FDE0 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

struct REGION *__fastcall DC::prgnVisSnap(DC *this)
{
  struct REGION *result; // rax
  bool v2; // zf
  struct REGION *v3; // r8

  if ( !*((_QWORD *)this + 145) )
    return (struct REGION *)*((_QWORD *)this + 143);
  if ( (*((_DWORD *)this + 10) & 2) == 0 )
    return (struct REGION *)*((_QWORD *)this + 143);
  v2 = (unsigned int)DC::bDpiScaledSurface(this) == 0;
  result = v3;
  if ( v2 )
    return (struct REGION *)*((_QWORD *)this + 143);
  return result;
}
