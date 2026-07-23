/*
 * XREFs of sub_1406DFEB4 @ 0x1406DFEB4
 * Callers:
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 */

void __fastcall sub_1406DFEB4(signed __int32 a1)
{
  LARGE_INTEGER v1; // rdx
  ULONG v2; // r9d
  signed __int32 v3; // r8d
  signed __int32 v4; // eax

  switch ( a1 )
  {
    case 1:
      v1.QuadPart = qword_140C11448;
      v2 = 500;
      break;
    case 2:
      v1.QuadPart = qword_140C11450;
      v2 = 120;
      break;
    case 3:
      v1 = stru_140C11458;
      v2 = 30;
      break;
    default:
      v1.QuadPart = 0LL;
      v2 = 0;
      break;
  }
  _m_prefetchw(&dword_140C11440);
  v3 = dword_140C11440;
  if ( a1 > dword_140C11440 )
  {
    while ( 1 )
    {
      v4 = _InterlockedCompareExchange(&dword_140C11440, a1, v3);
      if ( v3 == v4 )
        break;
      v3 = v4;
      if ( a1 <= v4 )
        return;
    }
    KeSetCoalescableTimer(&stru_140C11380, v1, 0, v2, 0LL);
  }
}
