/*
 * XREFs of ?IsSafeToCoCreateForCapabilityChecks@@YA_NPEBG0@Z @ 0x140031D7C
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z @ 0x140008030 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsSafeToCoCreateForCapabilityChecks(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  wchar_t **v3; // rbx
  __int64 v5; // rdi

  v3 = &off_1400C00A0;
  while ( 1 )
  {
    if ( !(unsigned int)_o__wcsicmp(*v3, a1) )
    {
      v5 = 0LL;
      if ( *((_DWORD *)v3 + 2) )
        break;
    }
LABEL_6:
    v3 += 3;
    if ( v3 == (wchar_t **)&dword_1400C00E8 )
      return 1;
  }
  while ( (unsigned int)_o__wcsicmp(*(_QWORD *)&v3[2][4 * v5], a2) )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *((_DWORD *)v3 + 2) )
      goto LABEL_6;
  }
  return 0;
}
