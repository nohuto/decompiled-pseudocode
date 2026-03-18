/*
 * XREFs of ACPIAmliBuildObjectPathname @ 0x1C0006528
 * Callers:
 *     ACPIQueryDeviceBiosNameEx @ 0x1C0006494 (ACPIQueryDeviceBiosNameEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0021FCC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     ACPIBuildDockExtension @ 0x1C0049E7C (ACPIBuildDockExtension.c)
 *     ACPIBusIommuBusInterface @ 0x1C00923D0 (ACPIBusIommuBusInterface.c)
 *     PcisuppSetRoutingInfo @ 0x1C009CD80 (PcisuppSetRoutingInfo.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AE070 (AcpiGetFullyQualifiedBiosName.c)
 *     LinkNodeFindByName @ 0x1C00B5E40 (LinkNodeFindByName.c)
 * Callees:
 *     AMLIGetNameSpaceObjectPath @ 0x1C000661C (AMLIGetNameSpaceObjectPath.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathname(__int64 a1, PVOID *a2, char a3)
{
  unsigned int v6; // r13d
  int v7; // ebp
  __int64 Pool2; // rax
  char *v9; // rbx
  unsigned int v10; // r14d
  char v12; // cl
  char *v13; // rdx
  unsigned int v14; // edi
  char *v15; // rdx
  BOOL v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rdi
  _BYTE *v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  char v25; // al
  unsigned int v26; // eax
  unsigned int v27; // [rsp+68h] [rbp+20h] BYREF

  v27 = 0;
  v6 = 0;
  v7 = AMLIGetNameSpaceObjectPath(a1, 0LL, &v27);
  if ( v7 == -1073741789 )
  {
    Pool2 = ExAllocatePool2(64LL, v27, 1399874369LL);
    v9 = (char *)Pool2;
    if ( Pool2 )
    {
      v7 = AMLIGetNameSpaceObjectPath(a1, Pool2, &v27);
      if ( v7 < 0 )
      {
        ExFreePoolWithTag(v9, 0x53706341u);
      }
      else
      {
        v10 = v27;
        if ( *v9 == 92 && (a3 & 1) == 0 )
          memmove(v9, v9 + 1, v27 - 1);
        if ( (a3 & 2) != 0 )
        {
          v12 = *v9;
          v13 = v9;
          while ( v12 )
          {
            if ( (unsigned __int8)(v12 - 97) <= 0x19u )
              *v13 = v12 - 32;
            v12 = *++v13;
          }
        }
        *a2 = v9;
        if ( (a3 & 4) != 0 )
        {
          v14 = *v9 == 92;
          if ( v14 < v10 )
          {
            v15 = &v9[*v9 == 92];
            v16 = *v9 == 92;
            v17 = v10 - v14;
            do
            {
              v14 = v16 + 5;
              if ( *v15 != 46 )
                v14 = v16;
              ++v15;
              v16 = v14;
              --v17;
            }
            while ( v17 );
          }
          v18 = v14 + 5;
          if ( v18 != v10 )
          {
            v19 = ExAllocatePool2(64LL, v18, 1399874369LL);
            v20 = v18 - 1;
            v21 = (_BYTE *)v19;
            *(_BYTE *)(v20 + v19) = 0;
            v22 = 0;
            if ( *v9 == 92 )
            {
              *v21 = 92;
              ++v9;
              v22 = 1;
            }
            if ( v22 < (unsigned int)v20 )
            {
              v23 = v22;
              v24 = (unsigned int)v20 - v22;
              do
              {
                if ( v6 < 4 && *v9 == 46 || (v25 = *v9) == 0 )
                  v25 = 95;
                else
                  ++v9;
                v21[v23] = v25;
                v26 = v6 + 1;
                v6 = 0;
                ++v23;
                if ( v26 <= 4 )
                  v6 = v26;
                --v24;
              }
              while ( v24 );
            }
            ExFreePoolWithTag(*a2, 0);
            *a2 = v21;
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v7;
}
