/*
 * XREFs of ?PushBack@?$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXPEAULampArrayDeviceListEntry@LampArrayRawInputProvider@@@Z @ 0x1800F86D0
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800F804C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::PushBack(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 8);
  if ( *result != a1 )
    __fastfail(3u);
  *a2 = a1;
  a2[1] = result;
  *result = a2;
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
