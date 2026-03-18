/*
 * XREFs of ApiSetComposeSchema_V7 @ 0x140416F98
 * Callers:
 *     ApiSetComposeSchema @ 0x140614A14 (ApiSetComposeSchema.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ApiSetValidateSchemaElements_V7 @ 0x1404168E0 (ApiSetValidateSchemaElements_V7.c)
 *     ApiSetValidateSchemaFormat_V7 @ 0x140416DB0 (ApiSetValidateSchemaFormat_V7.c)
 *     ApiSetValidateSchemaHeader_V7 @ 0x140416DFC (ApiSetValidateSchemaHeader_V7.c)
 *     ApiSetCompose_ProcessV7Extension_Phase0 @ 0x14041719C (ApiSetCompose_ProcessV7Extension_Phase0.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x1404173EC (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetSchemaExpander_ExpandSchema @ 0x140417F44 (ApiSetSchemaExpander_ExpandSchema.c)
 *     ApiSetSchemaExpander_GetNewSchemaSize @ 0x140418064 (ApiSetSchemaExpander_GetNewSchemaSize.c)
 *     ApiSetSchemaExpander_Initialize @ 0x1404181A0 (ApiSetSchemaExpander_Initialize.c)
 *     ApiSetSchemaExpander_MigrateSchemaData @ 0x140418670 (ApiSetSchemaExpander_MigrateSchemaData.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x1404187BC (ApiSetCompose_V7_ProcessV6Extension_Phase0.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1404189B0 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 *     memset @ 0x140435400 (memset.c)
 *     ApiSetValidateSchemaFormat @ 0x14061473C (ApiSetValidateSchemaFormat.c)
 *     ApiSetIsSchemaSealed @ 0x140615130 (ApiSetIsSchemaSealed.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ApiSetComposeSchema_V7(PVOID *a1, _DWORD *a2, _DWORD *a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // eax
  int v11; // ebx
  __int64 NewSchemaSize; // r15
  __int64 Pool2; // rax
  _DWORD *v14; // rdi
  _BYTE *v15; // r14
  int v16; // eax
  _QWORD v17[32]; // [rsp+20h] [rbp-E0h] BYREF

  if ( (unsigned __int8)ApiSetIsSchemaSealed(*a1)
    || *(_BYTE *)v8 != 7 && (*(_DWORD *)v8 != 6 || (*(_DWORD *)(v8 + 8) & 4) == 0 || *(_BYTE *)(v8 + 28) != 7) )
  {
    return 3221225485LL;
  }
  result = ApiSetValidateSchemaFormat_V7(v8);
  if ( (int)result < 0 )
    return result;
  if ( *a3 != 6 && *(_BYTE *)a3 != 7 )
    return 3221225485LL;
  result = ApiSetValidateSchemaFormat(a3, a4);
  if ( (int)result >= 0 )
  {
    memset(v17, 0, 0xF8uLL);
    ApiSetSchemaExpander_Initialize(*a1, a3, v17);
    if ( *(_BYTE *)a3 == 7 )
      v10 = ApiSetCompose_ProcessV7Extension_Phase0(a3, v17);
    else
      v10 = ApiSetCompose_V7_ProcessV6Extension_Phase0(a3, v17);
    v11 = v10;
    if ( v10 >= 0 )
    {
      NewSchemaSize = (unsigned int)ApiSetSchemaExpander_GetNewSchemaSize(v17);
      Pool2 = ExAllocatePool2(256LL, NewSchemaSize, 1751339841LL);
      v14 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        v15 = (_BYTE *)(Pool2 + 28);
        v17[4] = Pool2 + 28;
        v17[5] = Pool2;
        if ( !LOBYTE(v17[2]) )
          v17[4] = Pool2;
        ApiSetSchemaExpander_ExpandSchema(v17, (unsigned int)NewSchemaSize);
        if ( *v14 != 6 || (v14[2] & 4) == 0 || *v15 != 7 )
          v15 = v14;
        v11 = ApiSetValidateSchemaHeader_V7((__int64)v15, NewSchemaSize);
        if ( v11 < 0
          || (ApiSetSchemaExpander_MigrateSchemaData(v17), v11 = ApiSetValidateSchemaElements_V7((__int64)v15), v11 < 0)
          || ((++LODWORD(v17[0]), *(_BYTE *)a3 != 7)
            ? (v16 = ApiSetCompose_V7_ProcessV6Extension_Phase1(a3, v17))
            : (v16 = ApiSetCompose_ProcessV7Extension_Phase1(a3, v17)),
              (v11 = v16, v16 < 0) || (v11 = ApiSetValidateSchemaFormat_V7((__int64)v14), v11 < 0)) )
        {
          ExFreePoolWithTag(v14, 0);
        }
        else
        {
          ExFreePoolWithTag(*a1, 0);
          *a1 = v14;
          *a2 = NewSchemaSize;
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)v11;
  }
  return result;
}
