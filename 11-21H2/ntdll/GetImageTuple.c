/*
 * XREFs of GetImageTuple @ 0x18000B0FC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     GetModuleFullPathName @ 0x18000B21C (GetModuleFullPathName.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

char __fastcall GetImageTuple(__int64 a1, _BYTE *a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int ModuleFullPathName; // eax
  int v11; // ecx
  int v12; // edx

  if ( !a1 )
    return 0;
  v7 = a1 + *(int *)(a1 + 60);
  if ( *(_WORD *)(v7 + 24) == 267 || *(_WORD *)(v7 + 24) == 523 )
  {
    v8 = *(_DWORD *)(v7 + 80);
    v9 = *(_DWORD *)(v7 + 8);
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  *a4 = v9;
  *a5 = v8;
  ModuleFullPathName = GetModuleFullPathName(a1, a2);
  if ( !ModuleFullPathName )
    return 0;
  v11 = ModuleFullPathName - 1;
  v12 = ModuleFullPathName - 1;
  if ( ModuleFullPathName != 1 )
  {
    while ( a2[v12] != 92 )
    {
      if ( !--v12 )
        goto LABEL_11;
    }
    v11 = v12;
  }
LABEL_11:
  if ( v11 != 259 )
    memmove(a2, &a2[v11 + 1], (unsigned int)(259 - v11));
  return 1;
}
