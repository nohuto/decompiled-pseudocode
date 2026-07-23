/*
 * XREFs of sub_1406DBDA0 @ 0x1406DBDA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402541A8 @ 0x1402541A8 (sub_1402541A8.c)
 *     sub_140254F5C @ 0x140254F5C (sub_140254F5C.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     sub_140363C8C @ 0x140363C8C (sub_140363C8C.c)
 *     sub_140416F1C @ 0x140416F1C (sub_140416F1C.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 */

char sub_1406DBDA0()
{
  signed __int32 v0; // eax
  char v1; // si

  v0 = sub_140416F1C();
  if ( !v0 || byte_140C49880 )
  {
    _InterlockedExchange(&dword_140C499D8, 0);
    if ( !(unsigned int)sub_140416F1C() )
    {
      v0 = _InterlockedCompareExchange(&dword_140CE1C0C, 1, 0);
      if ( v0 )
      {
        if ( !byte_140C4E898 )
          return v0;
      }
      else
      {
        sub_1406D2264((char *)&dword_140C02EE8, 0LL, 0LL);
        byte_140C4E898 = 1;
      }
    }
    sub_140416F1C();
    v0 = _InterlockedIncrement(&dword_140C499D0);
    if ( v0 == 1 )
    {
      v0 = _InterlockedCompareExchange(&dword_140C499D4, 1, 0);
      if ( !v0 )
      {
        ++qword_140C498D0;
        qword_140C498D8 += (unsigned int)dword_140C4E880;
        v1 = sub_140254F5C();
        sub_140363C8C((__int64)sub_1406E14E0, 0LL, 1, 1);
        LOBYTE(v0) = sub_1402541A8();
        if ( byte_140C498C1 || !v1 )
          _InterlockedExchange(&dword_140C499D4, 0);
        else
          LOBYTE(v0) = KeSetCoalescableTimer(&stru_140C49A20, stru_140C498A0, 0, 0x3A98u, &stru_140C499E0);
      }
    }
    _InterlockedDecrement(&dword_140C499D0);
  }
  return v0;
}
