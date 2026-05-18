/*
 * XREFs of ??_GRenderOutputDwm@@UEAAPEAXI@Z @ 0x1800110F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderOutputDwm@@UEAA@XZ @ 0x180010F94 (--1RenderOutputDwm@@UEAA@XZ.c)
 */

RenderOutputDwm *__fastcall RenderOutputDwm::`scalar deleting destructor'(RenderOutputDwm *this, char a2)
{
  RenderOutputDwm::~RenderOutputDwm(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
