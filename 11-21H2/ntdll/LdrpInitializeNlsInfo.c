/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800DDFE4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpInitCodePageTables @ 0x1800B0A42 (RtlpInitCodePageTables.c)
 *     LdrpFusionManifestCodePages @ 0x1800E0D3C (LdrpFusionManifestCodePages.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800F0590 (RtlpQueryNlsSystemCodePages.c)
 */

__int64 __fastcall LdrpInitializeNlsInfo(__int64 a1)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // cx
  ULONG Value; // [rsp+30h] [rbp+8h] BYREF
  ULONG v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) & 0x8000000) != 0 )
  {
    v2 = -535;
    *(_DWORD *)(a1 + 844) = -34996759;
    v3 = -535;
  }
  else
  {
    Value = 0;
    v6 = 0;
    if ( (unsigned __int8)LdrpFusionManifestCodePages(&Value, &v6) || (int)RtlpQueryNlsSystemCodePages(&Value, &v6) >= 0 )
    {
      v3 = Value;
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
