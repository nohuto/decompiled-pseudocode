/*
 * XREFs of ?GreHRGNFromRegionCore@@YAPEAUHRGN__@@AEAVRGNCOREOBJ@@@Z @ 0x1C007D110
 * Callers:
 *     ?GetRegionHandleAndReset@CRegion@@UEAAJPEAPEAUHRGN__@@@Z @ 0x1C007D080 (-GetRegionHandleAndReset@CRegion@@UEAAJPEAPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007D19C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x1C007D23C (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z @ 0x1C007DED4 (-vCopy@RGNCOREOBJ@@QEAAXAEBV1@@Z.c)
 */

HRGN __fastcall GreHRGNFromRegionCore(struct RGNCOREOBJ *a1)
{
  HRGN result; // rax
  __int64 v2; // rdi
  unsigned int v4; // edx
  HRGN v5; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = *(HRGN *)a1;
  v2 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_DWORD *)result;
    v6 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v6, v4);
    if ( v6 )
    {
      v7 = v6 + 24;
      RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v7, a1);
      v5 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v6);
      if ( v5 )
        RGNCOREOBJ::vDeleteRGNCOREOBJ(a1);
      return v5;
    }
    return (HRGN)v2;
  }
  return result;
}
