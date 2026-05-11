/*
 * XREFs of FilterCreateFilterFactory @ 0x1C002BDEC
 * Callers:
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 * Callees:
 *     FilterInitComponentId @ 0x1C002C050 (FilterInitComponentId.c)
 */

__int64 __fastcall FilterCreateFilterFactory(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS inited; // r8d
  PKSFILTERFACTORY FilterFactory; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  FilterFactory = 0LL;
  inited = FilterInitComponentId(a1, v1 + 232);
  if ( inited >= 0 )
  {
    *(_QWORD *)(v1 + 224) = v1 + 232;
    if ( !*(_DWORD *)(v1 + 860) || *(_DWORD *)(v1 + 1000) )
    {
      inited = KsCreateFilterFactory(
                 *(PDEVICE_OBJECT *)(a1 + 24),
                 (const KSFILTER_DESCRIPTOR *)(v1 + 128),
                 (PWSTR)L"GLOBAL",
                 0LL,
                 8u,
                 0LL,
                 0LL,
                 &FilterFactory);
      if ( inited >= 0 )
        *(_QWORD *)(v1 + 120) = FilterFactory;
    }
  }
  return (unsigned int)inited;
}
