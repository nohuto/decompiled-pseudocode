/*
 * XREFs of ?UnmapDwmVirtualAccount@@YAJXZ @ 0x18000BA5C
 * Callers:
 *     DwmpTerminateSessionProcess @ 0x18000CA60 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000CEAC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 UnmapDwmVirtualAccount(void)
{
  unsigned int v0; // ebx
  int v1; // eax
  unsigned int v2; // ecx
  void *v4; // [rsp+28h] [rbp-40h]
  struct _UNICODE_STRING v5; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h]
  PVOID Buffer; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  Buffer = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&v5, L"Window Manager");
  RtlInitUnicodeString(&DestinationString, &gwszDwmAccountName);
  v1 = LsaLookupManageSidNameMapping(1LL, &v5, &Buffer);
  if ( v1 < 0 )
  {
    v0 = v1 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v2, &dword_180011A68, 2u, v1 | 0x10000000, 0x27Au, v4);
  }
  if ( Buffer )
    LsaLookupFreeMemory(Buffer);
  return v0;
}
