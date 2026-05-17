/*
 * XREFs of RtlGetAce @ 0x18006CB40
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18006C714 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetAce(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v4; // r9d
  unsigned __int64 v5; // r8

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u && a2 < *(unsigned __int16 *)(a1 + 4) )
  {
    v4 = 0;
    v5 = a1 + 8;
    *a3 = a1 + 8;
    if ( a2 )
    {
      while ( v5 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      {
        ++v4;
        v5 += *(unsigned __int16 *)(v5 + 2);
        *a3 = v5;
        if ( v4 >= a2 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( v5 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
        return 0LL;
    }
  }
  return 3221225485LL;
}
