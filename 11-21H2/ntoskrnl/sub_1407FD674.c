/*
 * XREFs of sub_1407FD674 @ 0x1407FD674
 * Callers:
 *     sub_1407FD634 @ 0x1407FD634 (sub_1407FD634.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 *     sub_140A48B0C @ 0x140A48B0C (sub_140A48B0C.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     sub_1407FD710 @ 0x1407FD710 (sub_1407FD710.c)
 */

__int64 __fastcall sub_1407FD674(__int64 a1, int a2)
{
  unsigned int *v2; // rsi
  unsigned int v3; // edi
  unsigned int i; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx

  v2 = (unsigned int *)qword_140D06950;
  v3 = 0;
  for ( i = 1; v3 < *v2; ++v3 )
  {
    v7 = *(_QWORD *)&v2[4 * v3 + 6];
    v8 = *(_QWORD *)&v2[4 * v3 + 4];
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        RtlSetBitsEx(a1, v8, v7);
      }
      else if ( a2 == 2 )
      {
        RtlClearBitsEx(a1, v8, v7);
      }
    }
    else if ( !(unsigned int)sub_1407FD710(a1, v8, v7) )
    {
      return 0;
    }
  }
  return i;
}
