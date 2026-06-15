/*
 * XREFs of ?IsType@EndpointDevice@@UEAAHU_GUID@@@Z @ 0x18015DC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EndpointDevice::IsType(EndpointDevice *this, struct _GUID *a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 12) - *(_QWORD *)&a2->Data1;
  if ( !v2 )
    v2 = *((_QWORD *)this + 13) - *(_QWORD *)a2->Data4;
  return v2 == 0;
}
