/*
 * XREFs of HalpAcpiShouldIgnoreSdevTable @ 0x14040F79C
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140337300 (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037DDC8 (HalpAcpiGetAllTablesWork.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403807D0 (HalpGetCpuInfo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall HalpAcpiShouldIgnoreSdevTable(__int64 a1)
{
  char v1; // di
  char result; // al
  __int64 v9; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r11
  __int64 v14; // rsi
  __int64 v15; // r8
  int v16; // ecx
  bool v17; // cc
  unsigned __int8 v18[24]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v18[0] = 0;
  if ( HalpAcpiSdevTableVerified )
    return HalpAcpiIgnoreSdevTable;
  if ( HalpGetCpuInfo(0LL, 0LL, 0LL, v18) )
  {
    if ( v18[0] == 2 )
    {
      _RAX = 1LL;
      __asm { cpuid }
      if ( (unsigned int)(_RAX - 722640) <= 1 || (_RAX & 0xFFFFFFF0) == 0xC06C0 )
      {
        v9 = a1 + 36;
        v10 = a1 + *(unsigned int *)(a1 + 4);
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v9 + 4 > v10 )
                goto LABEL_27;
              v11 = *(unsigned __int16 *)(v9 + 2);
              if ( (unsigned int)v11 < 4 || v11 + v9 > v10 )
                goto LABEL_27;
              v12 = v9;
              v9 += v11;
              if ( *(_BYTE *)v12 == 1 && (unsigned int)v11 >= 0x10 )
              {
                v13 = *(unsigned __int16 *)(v12 + 10);
                if ( (v13 & 1) == 0 )
                {
                  v14 = *(unsigned __int16 *)(v12 + 14);
                  if ( v11 >= v14 + v13 + 16 && !*(_WORD *)(v12 + 4) && !*(_WORD *)(v12 + 6) )
                  {
                    v15 = *(unsigned __int16 *)(v12 + 8);
                    if ( (unsigned int)v11 >= (int)v15 + (int)v13 )
                    {
                      v16 = *(unsigned __int16 *)(v12 + 12);
                      if ( (unsigned int)v11 >= v16 + (int)v14 )
                        break;
                    }
                  }
                }
              }
            }
            v17 = (unsigned __int16)v16 <= (unsigned __int16)v15;
            if ( (unsigned __int16)v16 < (unsigned __int16)v15 )
              break;
LABEL_22:
            if ( (v17 || v16 - (int)v15 >= (int)v13) && *(_BYTE *)(v15 + v12) == 20 && !*(_BYTE *)(v15 + v12 + 1) )
            {
              v1 = 1;
              goto LABEL_27;
            }
          }
          if ( (int)v15 - v16 >= (int)v14 )
          {
            v17 = (unsigned __int16)v16 <= (unsigned __int16)v15;
            goto LABEL_22;
          }
        }
      }
    }
  }
LABEL_27:
  HalpAcpiIgnoreSdevTable = v1;
  result = v1;
  HalpAcpiSdevTableVerified = 1;
  return result;
}
