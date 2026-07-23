/*
 * XREFs of ExIsMultiSessionSku @ 0x140861F94
 * Callers:
 *     PspSiloInitializeIsMultiSessionSku @ 0x1409AD7E0 (PspSiloInitializeIsMultiSessionSku.c)
 *     InitSkuSessionParameters @ 0x140B72F5C (InitSkuSessionParameters.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x14035F5D8 (ApiSetResolveToHost.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407D43DC (PsQueryCurrentApiSetSchema.c)
 *     ExpGetNumberOfInitialSessionsFromRegistry @ 0x140862004 (ExpGetNumberOfInitialSessionsFromRegistry.c)
 */

__int64 __fastcall ExIsMultiSessionSku(char *a1)
{
  int NumberOfInitialSessionsFromRegistry; // ecx
  __int64 CurrentApiSetSchema; // rax
  char v5; // al
  _QWORD v6[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v7; // [rsp+40h] [rbp-10h] BYREF
  char v8; // [rsp+68h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+20h] BYREF

  v6[0] = 4587588LL;
  v6[1] = L"ext-ms-win-session-wtsapi32-l1-1-0";
  v8 = 0;
  v7 = 0LL;
  v9 = 0;
  NumberOfInitialSessionsFromRegistry = ExpGetNumberOfInitialSessionsFromRegistry(&v9);
  if ( NumberOfInitialSessionsFromRegistry >= 0 )
  {
    if ( v9 <= 1 )
    {
      CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
      NumberOfInitialSessionsFromRegistry = ApiSetResolveToHost(
                                              CurrentApiSetSchema,
                                              (unsigned __int16 *)v6,
                                              0LL,
                                              &v8,
                                              (__int64)&v7);
      if ( NumberOfInitialSessionsFromRegistry >= 0 )
      {
        v5 = v8;
        if ( v8 && !(_WORD)v7 )
          v5 = 0;
        *a1 = v5;
      }
    }
    else
    {
      *a1 = 1;
    }
  }
  return (unsigned int)NumberOfInitialSessionsFromRegistry;
}
