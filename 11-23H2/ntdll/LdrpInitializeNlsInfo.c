/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800DDB38
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFusionManifestCodePages @ 0x1800AF938 (LdrpFusionManifestCodePages.c)
 *     RtlpInitCodePageTables @ 0x1800AFEE0 (RtlpInitCodePageTables.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800B00B4 (RtlpQueryNlsSystemCodePages.c)
 */

__int64 __fastcall LdrpInitializeNlsInfo(__int64 a1)
{
  __int16 v2; // ax
  __int16 v3; // cx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) & 0x8000000) != 0 )
  {
    v2 = -535;
    *(_DWORD *)(a1 + 844) = -34996759;
    v3 = -535;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    if ( LdrpFusionManifestCodePages(&v5, &v6) || (int)RtlpQueryNlsSystemCodePages(&v5, &v6) >= 0 )
    {
      v3 = v5;
      v2 = v6;
    }
    else
    {
      v2 = -535;
      v3 = -535;
    }
    *(_WORD *)(a1 + 844) = v3;
    *(_WORD *)(a1 + 846) = v2;
  }
  RtlpInitCodePageTables(v3, v2);
  return RtlpInitUppercaseTables(*(_WORD *)(a1 + 848));
}
