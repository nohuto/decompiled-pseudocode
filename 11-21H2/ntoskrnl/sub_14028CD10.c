/*
 * XREFs of sub_14028CD10 @ 0x14028CD10
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14028CD10(ULONG_PTR *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v4; // rcx
  bool v5; // zf
  signed __int32 v6; // eax

  v2 = a2;
  if ( a1 == &StartContext )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v4 != -1 )
    {
      if ( a2 + v4 <= 0x100 )
      {
        while ( a2 < 0x80000 )
        {
          v6 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, a2 + v4, v4);
          v5 = (_DWORD)v4 == v6;
          LODWORD(v4) = v6;
          if ( v5 )
            return 0LL;
          if ( v6 == -1 || a2 + v6 > 0x100 )
            break;
        }
      }
      if ( (int)v4 > 192
        && (_DWORD)v4 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v4) )
      {
        return (int)v4 - 192 + a2;
      }
    }
  }
  return v2;
}
