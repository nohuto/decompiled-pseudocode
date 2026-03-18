/*
 * XREFs of HalpIommuHsaDiscover @ 0x140AF9490
 * Callers:
 *     HalpIommuInitDiscard @ 0x140AF9238 (HalpIommuInitDiscard.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140213A40 (HalpAcpiGetTable.c)
 *     HalpIommuProcessIvhdEntry @ 0x1405307FC (HalpIommuProcessIvhdEntry.c)
 */

int __fastcall HalpIommuHsaDiscover(_QWORD *a1)
{
  __int64 Table; // rax
  __int64 v3; // rbp
  int result; // eax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rdi
  bool v9; // si
  __int64 v10; // rax
  _BYTE *v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  _BYTE *v14; // rdx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  qword_140C49C88 = (__int64)&HsaIvhdList;
  HsaIvhdList = (__int64)&HsaIvhdList;
  v15 = 0;
  if ( !HalpExtEnvLoaderBlock )
    return 0;
  Table = HalpAcpiGetTable(HalpExtEnvLoaderBlock, 1397904969, 0, 0);
  v3 = Table;
  if ( !Table )
    return 0;
  v5 = *(unsigned int *)(Table + 4);
  if ( (unsigned int)v5 < 0x5A )
    return 0;
  v6 = v5 + v3;
  v7 = *(_DWORD *)(v3 + 36);
  if ( (v7 & 1) == 0 )
    return 0;
  if ( (v7 & 2) == 0 )
  {
    v9 = 0;
    goto LABEL_29;
  }
  v8 = v3 + 48;
  v9 = 1;
  if ( v3 + 48 >= v6 )
  {
LABEL_29:
    v12 = v3 + 48;
    goto LABEL_31;
  }
  while ( v8 + 4 <= v6 )
  {
    v10 = *(unsigned __int16 *)(v8 + 2);
    if ( (unsigned int)v10 < 4 || v8 + v10 > v6 )
      break;
    v11 = (_BYTE *)v8;
    v8 += v10;
    if ( *v11 == 64 )
    {
      result = HalpIommuProcessIvhdEntry(v3, (__int64)v11, &v15);
      if ( result < 0 )
        return result;
      v9 = v9 && !v15;
    }
    if ( v8 >= v6 )
    {
      v12 = v3 + 48;
      while ( v12 + 4 <= v6 )
      {
        v13 = *(unsigned __int16 *)(v12 + 2);
        if ( (unsigned int)v13 < 4 || v12 + v13 > v6 )
          break;
        v14 = (_BYTE *)v12;
        v12 += v13;
        if ( *v14 == 17 )
        {
          result = HalpIommuProcessIvhdEntry(v3, (__int64)v14, &v15);
          if ( result < 0 )
            return result;
          v9 = v9 && !v15;
        }
LABEL_31:
        if ( v12 >= v6 )
        {
          *a1 ^= (*(_DWORD *)a1 ^ (2 * v9)) & 2;
          return 0;
        }
      }
      return -1073741811;
    }
  }
  return -1073741811;
}
