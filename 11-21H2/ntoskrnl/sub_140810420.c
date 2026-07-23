/*
 * XREFs of sub_140810420 @ 0x140810420
 * Callers:
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 * Callees:
 *     sub_140248854 @ 0x140248854 (sub_140248854.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1403A5AF0 @ 0x1403A5AF0 (sub_1403A5AF0.c)
 */

__int64 __fastcall sub_140810420(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  PVOID *i; // rbx

  v2 = 0;
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v3 = sub_140248854(a1);
  if ( v3 )
  {
    for ( i = (PVOID *)off_140C04388; i != &off_140C04388; i = (PVOID *)*i )
    {
      if ( i[3] == (PVOID)v3 )
      {
        i[3] = 0LL;
        sub_1402E0164(v3);
      }
    }
  }
  KeReleaseMutex(&Object, 0);
  if ( v3 )
  {
    sub_1402E0164(v3);
    sub_1403A5AF0(v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
