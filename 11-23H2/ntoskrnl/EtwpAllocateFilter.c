/*
 * XREFs of EtwpAllocateFilter @ 0x14077D8A0
 * Callers:
 *     EtwpValidateFilterDescriptors @ 0x14077D9E4 (EtwpValidateFilterDescriptors.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1409F5554 (EtwpValidateTraceControlFilterDescriptors.c)
 * Callees:
 *     EtwpCreatePerfectHashFunction @ 0x14077D670 (EtwpCreatePerfectHashFunction.c)
 *     EtwpAllocateEventNameFilter @ 0x1409F480C (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocateLevelKwFilter @ 0x1409F4BD8 (EtwpAllocateLevelKwFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x1409F4C5C (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocatePidFilter @ 0x1409F4CF4 (EtwpAllocatePidFilter.c)
 *     EtwpAllocateSchematizedFilter @ 0x1409F4D84 (EtwpAllocateSchematizedFilter.c)
 *     EtwpAllocateStringFilterData @ 0x1409F4E14 (EtwpAllocateStringFilterData.c)
 */

__int64 __fastcall EtwpAllocateFilter(int a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // eax
  _WORD *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  _WORD *v15; // rdx

  result = 0LL;
  switch ( a1 )
  {
    case -2147483644:
      result = EtwpAllocatePidFilter(a2, a3 + 8);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000004;
      return result;
    case -2147483640:
      result = EtwpAllocateStringFilterData(a2, a3 + 16);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000008;
      return result;
    case -2147483632:
      result = EtwpAllocateStringFilterData(a2, a3 + 24);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000010;
      return result;
    case -2147483616:
      result = EtwpAllocateStringFilterData(a2, a3 + 32);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000020;
      return result;
    case -2147450880:
      result = EtwpAllocateStringFilterData(a2, a3 + 40);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80008000;
      return result;
    case -2147479552:
      v11 = *a2;
      if ( !*(_QWORD *)(a3 + 48) )
      {
        v12 = *((unsigned int *)a2 + 2);
        if ( (unsigned int)(v12 - 6) <= 0x3FA )
        {
          v13 = *(unsigned __int16 *)(v11 + 2);
          if ( v12 == 2 * v13 + 4 && (unsigned __int16)(v13 - 1) <= 0x3Fu )
          {
            v14 = 0;
            if ( *(_WORD *)(v11 + 2) )
            {
              v15 = (_WORD *)(v11 + 4);
              while ( *v15 != 0xFFFF )
              {
                ++v14;
                ++v15;
                if ( v14 >= (unsigned int)v13 )
                  goto LABEL_43;
              }
              return 3221225485LL;
            }
LABEL_43:
            result = EtwpCreatePerfectHashFunction(*(_BYTE *)v11, (_WORD *)(v11 + 4), v13, (__int64 *)(a3 + 48));
            if ( (int)result >= 0 )
              *(_DWORD *)a3 |= 0x80001000;
            return result;
          }
        }
      }
      return 3221225485LL;
  }
  if ( a1 != -2147483136 )
  {
    switch ( a1 )
    {
      case -2147482624:
        result = EtwpAllocateEventNameFilter(a2, a3 + 96);
        if ( (int)result >= 0 )
          *(_DWORD *)a3 |= 0x80000400;
        return result;
      case -2147475456:
        result = EtwpAllocateEventNameFilter(a2, a3 + 56);
        if ( (int)result >= 0 )
          *(_DWORD *)a3 |= 0x80002000;
        return result;
      case -2147467264:
        result = EtwpAllocateLevelKwFilter(a2, a3 + 64);
        if ( (int)result >= 0 )
          *(_DWORD *)a3 |= 0x80004000;
        return result;
    }
    if ( a1 != -2147483392 )
    {
      if ( a1 == 0x80000000 )
      {
        result = EtwpAllocateSchematizedFilter(a2, a3 + 88);
        if ( (int)result >= 0 )
          *(_DWORD *)a3 |= 0x80000000;
      }
      return result;
    }
    if ( a4 )
    {
      result = EtwpAllocatePayloadFilterData(a4, a2, a3 + 80);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000100;
      return result;
    }
    return 3221225485LL;
  }
  v6 = *a2;
  if ( *(_QWORD *)(a3 + 72) )
    return 3221225485LL;
  v7 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)(v7 - 6) > 0x3FA )
    return 3221225485LL;
  v8 = *(unsigned __int16 *)(v6 + 2);
  if ( v7 != 2 * v8 + 4 || (unsigned __int16)(v8 - 1) > 0x3Fu )
    return 3221225485LL;
  v9 = 0;
  if ( *(_WORD *)(v6 + 2) )
  {
    v10 = (_WORD *)(v6 + 4);
    while ( *v10 != 0xFFFF )
    {
      ++v9;
      ++v10;
      if ( v9 >= (unsigned int)v8 )
        goto LABEL_16;
    }
    return 3221225485LL;
  }
LABEL_16:
  result = EtwpCreatePerfectHashFunction(*(_BYTE *)v6, (_WORD *)(v6 + 4), v8, (__int64 *)(a3 + 72));
  if ( (int)result >= 0 )
    *(_DWORD *)a3 |= 0x80000200;
  return result;
}
