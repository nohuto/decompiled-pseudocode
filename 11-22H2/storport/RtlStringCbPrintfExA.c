/*
 * XREFs of RtlStringCbPrintfExA @ 0x1C005B994
 * Callers:
 *     RaGetUnitPerfCounterIdString @ 0x1C00571FC (RaGetUnitPerfCounterIdString.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1C005BB4C (RtlStringExHandleOtherFlagsA.c)
 *     RtlStringVPrintfWorkerA @ 0x1C005BC08 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCSTR pszFormat,
        ...)
{
  NTSTATUS v7; // ebx
  NTSTRSAFE_PSTR v10; // r13
  size_t v11; // r14
  const char *v12; // r9
  NTSTATUS v13; // eax
  size_t v14; // rcx
  NTSTRSAFE_PSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list argList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(argList, pszFormat);
  v7 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cbDest || cbDest > 0x7FFFFFFF )
      v7 = -1073741811;
  }
  else if ( cbDest - 1 > 0x7FFFFFFE )
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v10 = pszDest;
    pcchNewDestLength[0] = cbDest;
    v11 = cbDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = byte_1C0081FE6;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v7 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v7 = -1073741811;
      if ( cbDest )
        *pszDest = 0;
    }
    else if ( cbDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerA(pszDest, cbDest, pcchNewDestLength, v12, argList);
      v14 = pcchNewDestLength[0];
      v7 = v13;
      v11 = cbDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cbDest - pcchNewDestLength[0];
      v10 = &pszDest[v14];
      ppszDestEnda = &pszDest[v14];
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          memset_0(v10 + 1, (unsigned __int8)dwFlags, v11 - 1);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_22:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcbRemaining )
          *pcbRemaining = v11;
        return v7;
      }
      v7 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      RtlStringExHandleOtherFlagsA(pszDest, cbDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength[0];
    }
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
      goto LABEL_22;
  }
  return v7;
}
