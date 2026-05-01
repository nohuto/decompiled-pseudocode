/*
 * XREFs of SdbpCheckAttribute @ 0x18009849C
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1800981CC (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpCheckFromVersion @ 0x180098660 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x1800986A4 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1800986E8 (SdbpCheckVersion.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x18009E894 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckAttribute(_DWORD *a1, unsigned __int16 a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  int v5; // ebx
  int v7; // r8d
  int v8; // eax
  __int64 result; // rax
  int v10; // eax
  bool v11; // zf

  v5 = 0;
  *a1 = 0;
  if ( a2 == 16414 )
  {
    if ( a4 < 4 )
    {
      v7 = 578;
      goto LABEL_17;
    }
    LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
    goto LABEL_39;
  }
  if ( a2 == 16435 )
  {
    if ( a4 < 4 )
    {
      v7 = 565;
      goto LABEL_17;
    }
    LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
    goto LABEL_39;
  }
  if ( a2 > 0x5001u )
  {
    if ( a2 <= 0x5003u )
    {
      if ( a4 < 8 )
      {
        v7 = 524;
        goto LABEL_17;
      }
      v8 = SdbpCheckVersion(*a3, *(_QWORD *)(a5 + 16));
      goto LABEL_25;
    }
    if ( a2 == 20486 || a2 == 20493 )
    {
      if ( a4 < 8 )
      {
        v7 = 552;
        goto LABEL_17;
      }
      v8 = SdbpCheckUptoVersion(*a3, *(_QWORD *)(a5 + 16));
      goto LABEL_25;
    }
    if ( a2 > 0x5011u && a2 <= 0x5013u )
    {
      if ( a4 < 8 )
      {
        v7 = 538;
LABEL_17:
        AslLogCallPrintf(1, (unsigned int)"SdbpCheckAttribute", v7, (unsigned int)"Attribute size doesn't match");
        return 0LL;
      }
      v8 = SdbpCheckFromVersion(*a3, *(_QWORD *)(a5 + 16));
      goto LABEL_25;
    }
  }
  v10 = a2 & 0xF000;
  switch ( v10 )
  {
    case 16384:
      if ( a4 < 4 )
      {
        v7 = 594;
        goto LABEL_17;
      }
      v11 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
LABEL_32:
      LOBYTE(v5) = v11;
      break;
    case 20480:
      if ( a4 < 8 )
      {
        v7 = 624;
        goto LABEL_17;
      }
      v11 = *a3 == *(_QWORD *)(a5 + 16);
      goto LABEL_32;
    case 24576:
      if ( a4 < 2 )
      {
        v7 = 610;
        goto LABEL_17;
      }
      v8 = AslStringPatternMatchExW(a3, *(_QWORD *)(a5 + 16));
LABEL_25:
      v5 = v8;
      break;
  }
LABEL_39:
  result = 1LL;
  *a1 = v5;
  return result;
}
