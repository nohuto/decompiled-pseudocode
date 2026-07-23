/*
 * XREFs of sub_140505998 @ 0x140505998
 * Callers:
 *     HalAllocateHardwareCounters @ 0x1409084C0 (HalAllocateHardwareCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140505998(__int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // rax

  v1 = 0LL;
  if ( (_BYTE)dword_140D06884 )
  {
    do
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(qword_140D088C0[v1] + 88), 1, 0) )
        break;
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (int)v1 < (unsigned __int8)dword_140D06884 );
  }
  if ( (_DWORD)v1 == (unsigned __int8)dword_140D06884 )
  {
    v2 = qword_140C0CA20 + 1;
    qword_140C0CA20 = v2;
    if ( v2 == 3221225472LL )
    {
      v2 = 0x80000000LL;
      qword_140C0CA20 = 0x80000000LL;
    }
    *a1 = v2;
    return 0LL;
  }
  else
  {
    while ( (int)v1 > 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_140D088C0[(unsigned int)(v1 - 1)] + 88));
      LODWORD(v1) = v1 - 1;
    }
    return 3221225626LL;
  }
}
