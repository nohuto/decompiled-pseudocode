/*
 * XREFs of sub_1406DC970 @ 0x1406DC970
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406DC970(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG v3; // eax
  __int64 *v4; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v2 = _InterlockedExchange(&dword_140C222B0, 0);
    if ( !v2 )
      break;
    do
    {
      _BitScanForward(&v3, v2);
      v2 &= ~(1 << v3);
      Interval.LowPart = v3;
      v4 = &qword_1400015E0[2 * v3];
      if ( *v4 )
      {
        sub_14042A5E0(*((unsigned int *)v4 + 2), a2);
        if ( *((_DWORD *)KeGetCurrentThread() + 121) )
          __fastfail(0x20u);
      }
    }
    while ( v2 );
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}
