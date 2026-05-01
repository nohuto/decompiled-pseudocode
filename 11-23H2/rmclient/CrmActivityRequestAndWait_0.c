/*
 * XREFs of CrmActivityRequestAndWait_0 @ 0x18001EDF4
 * Callers:
 *     CrmActivityRequestAndWait @ 0x18001EF00 (CrmActivityRequestAndWait.c)
 * Callees:
 *     <none>
 */

signed int __fastcall CrmActivityRequestAndWait_0(__int64 a1)
{
  signed int result; // eax
  DWORD v3; // edx
  DWORD v4; // ecx

  result = RtlSubscribeWnfStateChangeNotification(a1 + 48, *(_QWORD *)(a1 + 40), 0LL, sub_18001EEB0, a1, 0LL, 0, 0);
  if ( result >= 0 )
  {
    if ( *(_DWORD *)(a1 + 56) <= 0x418937u )
      v3 = 1000 * *(_DWORD *)(a1 + 56);
    else
      v3 = -1;
    v4 = WaitForSingleObject(*(HANDLE *)(a1 + 64), v3);
    if ( v4 == -1 )
    {
      if ( (int)GetLastError() > 0 )
        return (unsigned __int16)GetLastError() | 0xC0070000;
      else
        return GetLastError();
    }
    else
    {
      result = 0;
      if ( v4 == 258 )
        return 258;
    }
  }
  return result;
}
