/*
 * XREFs of _IsValidParallelValue @ 0x1C00D3DE4
 * Callers:
 *     _PopulatePropertyUsageValues @ 0x1C01858C8 (_PopulatePropertyUsageValues.c)
 *     RIMGetPropertyCount @ 0x1C018A2D0 (RIMGetPropertyCount.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01852B0 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall IsValidParallelValue(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  unsigned __int16 v7; // di
  int v8; // r9d
  int v9; // edx
  _WORD v11[8]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v12[80]; // [rsp+50h] [rbp-88h] BYREF

  v3 = *(_QWORD *)(a1 + 760);
  v6 = 1;
  v7 = *(_WORD *)(v3 + 4);
  while ( 1 )
  {
    memset(v12, 0, 0x48uLL);
    v11[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v7, 81, (__int64)v12, (__int64)v11, a3) == 1114112 )
    {
      v8 = a2[28];
      v9 = *a2;
      v11[0] = 1;
      if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, v9, v7, v8, (__int64)v12, (__int64)v11, a3) != 1114112 )
        break;
    }
    v7 = *(_WORD *)(*(_QWORD *)(v3 + 16) + 24LL * v7 + 8);
    if ( !v7 )
      return v6;
  }
  return 0;
}
