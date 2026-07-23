/*
 * XREFs of sub_140990100 @ 0x140990100
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     sub_1407F2A20 @ 0x1407F2A20 (sub_1407F2A20.c)
 *     sub_14099007C @ 0x14099007C (sub_14099007C.c)
 */

__int64 __fastcall sub_140990100(int a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
  {
    if ( !byte_140C232D1 )
    {
      if ( byte_140C232D0 )
      {
        KeResetEvent(&stru_140C23660);
        _InterlockedExchange(&dword_140C232D4, 1);
        if ( _InterlockedCompareExchange(&dword_140C23640, 0, 0) )
          KeWaitForSingleObject(&stru_140C23660, Executive, 0, 0, 0LL);
        KeInitializeDpc(&stru_140C23600, (PKDEFERRED_ROUTINE)sub_140373000, &dword_140C232D4);
        sub_1402E2D20((unsigned __int64)&qword_140D00B80, -30000000LL, 0, 0, (__int64)&stru_140C23600);
        sub_140256CA0(&stru_140014958);
        sub_14099007C(1);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else if ( byte_140C232D1 )
  {
    sub_14099007C(0);
    sub_1407F2A20(0, dword_140C223AC);
  }
  return v1;
}
