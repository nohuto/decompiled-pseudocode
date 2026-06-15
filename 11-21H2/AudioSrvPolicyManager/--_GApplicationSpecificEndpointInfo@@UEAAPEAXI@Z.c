/*
 * XREFs of ??_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z @ 0x1800154B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x180014E34 (--1ApplicationSpecificEndpointInfo@@UEAA@XZ.c)
 */

ApplicationSpecificEndpointInfo *__fastcall ApplicationSpecificEndpointInfo::`scalar deleting destructor'(
        ApplicationSpecificEndpointInfo *this,
        char a2)
{
  ApplicationSpecificEndpointInfo::~ApplicationSpecificEndpointInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
