/*
 * XREFs of sub_1409A27A8 @ 0x1409A27A8
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A1960 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1409A1A20 (TtmNotifyDeviceInput.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1409A27A8(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 *v4; // r10
  __int64 **v5; // rcx
  __int64 *i; // rax

  v4 = 0LL;
  v5 = (__int64 **)(a1 + 96);
  for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 && i[3] == a3 )
    {
      v4 = i;
      break;
    }
  }
  if ( a4 )
    *a4 = v4;
  return v4 != 0LL;
}
