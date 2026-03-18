/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00D57F4
 * Callers:
 *     SfnOUTSTRING @ 0x1C007FE90 (SfnOUTSTRING.c)
 *     xxxClientExpandStringW @ 0x1C00D4970 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00D4D24 (xxxClientLoadStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00D5120 (SfnGETDBCSTEXTLENGTHS.c)
 *     ClientGetListboxString @ 0x1C02224D0 (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C0223EE0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C0224480 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcOutputStringSize(struct _CALLBACKSTATUS *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // ecx
  __int64 v7; // rbx
  unsigned __int64 v9; // rdx
  ULONG v11; // ecx
  ULONG BytesInMultiByteString; // [rsp+40h] [rbp+18h] BYREF

  BytesInMultiByteString = 0;
  v5 = *((_DWORD *)a1 + 2);
  v7 = a2;
  if ( v5 )
    ProbeForRead(*((volatile void **)a1 + 2), v5, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  v9 = *((unsigned int *)a1 + 2);
  if ( a3 )
  {
    if ( a4 )
    {
LABEL_6:
      if ( (unsigned int)v7 < (unsigned int)v9 )
        LODWORD(v9) = v7;
      return (unsigned int)v9;
    }
    v11 = 2 * v7;
    if ( 2 * v7 >= v9 )
      v11 = *((_DWORD *)a1 + 2);
    RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 2), v11);
    LODWORD(v9) = BytesInMultiByteString;
  }
  else
  {
    if ( !a4 )
    {
      LODWORD(v9) = (unsigned int)v9 >> 1;
      goto LABEL_6;
    }
    if ( (unsigned int)v7 < (unsigned int)v9 )
      LODWORD(v9) = v7;
    RtlMultiByteToUnicodeSize(&BytesInMultiByteString, *((const CHAR **)a1 + 2), v9);
    LODWORD(v9) = BytesInMultiByteString >> 1;
  }
  return (unsigned int)v9;
}
