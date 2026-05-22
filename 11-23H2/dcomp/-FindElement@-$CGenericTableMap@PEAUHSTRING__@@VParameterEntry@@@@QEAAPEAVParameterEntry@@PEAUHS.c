/*
 * XREFs of ?FindElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAPEAVParameterEntry@@PEAUHSTRING__@@@Z @ 0x18014F264
 * Callers:
 *     ?ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18014F1A8 (-ClearParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1ParameterEntry@@QEAA@XZ @ 0x18003FEF4 (--1ParameterEntry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

PVOID __fastcall CGenericTableMap<HSTRING__ *,ParameterEntry>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  PVOID v2; // rbx
  Microsoft::WRL2::NestableRuntimeClass *Buffer; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+28h] [rbp-40h]
  __int128 v6; // [rsp+30h] [rbp-38h]
  int v7; // [rsp+40h] [rbp-28h]

  v5 = 0;
  v7 = 0;
  Buffer = a2;
  v6 = 0LL;
  v2 = RtlLookupElementGenericTable(a1, &Buffer);
  ParameterEntry::~ParameterEntry(&Buffer);
  return v2;
}
