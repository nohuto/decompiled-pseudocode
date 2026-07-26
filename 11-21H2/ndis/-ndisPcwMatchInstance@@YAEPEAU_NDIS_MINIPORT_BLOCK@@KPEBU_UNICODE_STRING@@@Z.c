/*
 * XREFs of ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C010CF10
 * Callers:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C002889C (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0028EFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C010D000 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C010D0FC (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 */

bool __fastcall ndisPcwMatchInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        const struct _UNICODE_STRING *a3)
{
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  ULONG v8; // r8d
  unsigned __int8 v9; // r8
  bool result; // al
  struct _UNICODE_STRING v11; // [rsp+20h] [rbp-E0h] BYREF
  char v12; // [rsp+30h] [rbp-D0h] BYREF

  *(_QWORD *)&v11.Length = 33685504LL;
  v11.Buffer = (wchar_t *)&v12;
  result = 0;
  if ( ndisPcwGetInstanceName(a1, a2, &v11) >= 0 )
  {
    if ( ndisWildCardStringMatch(a3, &v11, v6) )
      return 1;
    if ( !a2 )
    {
      v11.Length = 0;
      if ( ndisPcwGetInstanceName(a1, 0xFFFu, &v11) >= 0 )
      {
        if ( ndisWildCardStringMatch(a3, &v11, v7) )
          return 1;
        v11.Length = 0;
        if ( (int)RtlUnicodeStringCopy(&v11, &ndisPcwSystemTotalInstanceName, v8) >= 0 )
        {
          if ( ndisWildCardStringMatch(a3, &v11, v9) )
            return 1;
        }
      }
    }
  }
  return result;
}
