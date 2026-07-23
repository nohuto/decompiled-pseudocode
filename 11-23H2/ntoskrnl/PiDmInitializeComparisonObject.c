/*
 * XREFs of PiDmInitializeComparisonObject @ 0x1406D82A0
 * Callers:
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407882A4 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x1407896F8 (PiPnpRtlObjectEventCreate.c)
 *     PiDmLookupObject @ 0x1407C2554 (PiDmLookupObject.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall PiDmInitializeComparisonObject(_WORD *a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  _WORD *v5; // rax
  __int64 v6; // rcx
  unsigned __int16 v7; // r8
  int *v8; // rdi
  __int64 v9; // rbx
  unsigned __int16 v10; // r8
  int v11; // r9d
  unsigned __int16 *v12; // r11
  int v13; // r10d
  unsigned __int64 v14; // r8

  v3 = 0;
  *(_QWORD *)(a3 + 16) = a1;
  *(_DWORD *)(a3 + 28) = a2;
  if ( a1 )
  {
    v5 = a1;
    v6 = 0x7FFFLL;
    while ( *v5 )
    {
      ++v5;
      if ( !--v6 )
        return 3221225485LL;
    }
    v7 = 2 * (0x7FFF - v6);
  }
  else
  {
    v7 = 0;
  }
  if ( a2 == 3 && v7 <= 8u )
    return 3221225524LL;
  v8 = (int *)(a3 + 24);
  v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
  if ( v8 )
  {
    v13 = v10 >> 1;
    for ( *v8 = 0; v13; v11 = (unsigned __int16)v14 + 65599 * v11 )
    {
      v14 = *v12++;
      --v13;
      if ( (unsigned int)v14 >= 0x61 )
      {
        if ( (unsigned int)v14 > 0x7A )
        {
          if ( v9 )
          {
            if ( (unsigned __int16)v14 >= 0xC0u )
              LOWORD(v14) = *(_WORD *)(v9
                                     + 2
                                     * ((v14 & 0xF)
                                      + *(unsigned __int16 *)(v9
                                                            + 2LL
                                                            * (((unsigned __int8)v14 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(v9 + 2 * (v14 >> 8))))))
                          + v14;
          }
        }
        else
        {
          LOWORD(v14) = v14 - 32;
        }
      }
    }
    *v8 = v11;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
