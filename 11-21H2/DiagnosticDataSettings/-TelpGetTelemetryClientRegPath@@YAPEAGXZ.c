/*
 * XREFs of ?TelpGetTelemetryClientRegPath@@YAPEAGXZ @ 0x180001578
 * Callers:
 *     TelIsOsInProcessorMode @ 0x180002830 (TelIsOsInProcessorMode.c)
 *     TelGetRegionalSettingsValue @ 0x180002AF0 (TelGetRegionalSettingsValue.c)
 * Callees:
 *     TelpReadRegistryString @ 0x180001380 (TelpReadRegistryString.c)
 */

unsigned __int16 *__fastcall TelpGetTelemetryClientRegPath(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  HANDLE ProcessHeap; // rax
  __int64 v4; // rcx
  void *v5; // rbx
  HANDLE v7; // rax
  HANDLE v8; // rax
  LPVOID v9; // rax
  __int64 v10; // rdx
  _WORD *v11; // rcx
  char *v12; // rdi
  __int16 v13; // ax
  _WORD *v14; // rax
  HANDLE v15; // rax
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0;
  v1 = TelpReadRegistryString(
         a1,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack",
         L"RedirectedRegistryRoot",
         0LL,
         &v16);
  v2 = (unsigned __int16)v1 | 0x80070000;
  if ( v1 <= 0 )
    v2 = v1;
  if ( v2 == -2147024662 )
  {
    ProcessHeap = GetProcessHeap();
    v5 = HeapAlloc(ProcessHeap, 8u, 2LL * v16);
    if ( !v5 )
    {
LABEL_9:
      SetLastError(0xEu);
      return 0LL;
    }
    if ( (int)TelpReadRegistryString(
                v4,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack",
                L"RedirectedRegistryRoot",
                v5,
                &v16) >= 0 )
      return (unsigned __int16 *)v5;
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v5);
  }
  v8 = GetProcessHeap();
  v9 = HeapAlloc(v8, 8u, 0x80uLL);
  v5 = v9;
  if ( !v9 )
    goto LABEL_9;
  v10 = 64LL;
  v11 = v9;
  v12 = (char *)((char *)L"Software\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack" - (_BYTE *)v9);
  do
  {
    if ( v10 == -2147483582 )
      break;
    v13 = *(_WORD *)((char *)v11 + (_QWORD)v12);
    if ( !v13 )
      break;
    *v11++ = v13;
    --v10;
  }
  while ( v10 );
  v14 = v11 - 1;
  if ( v10 )
    v14 = v11;
  *v14 = 0;
  if ( v10 )
    return (unsigned __int16 *)v5;
  v15 = GetProcessHeap();
  HeapFree(v15, 0, v5);
  return 0LL;
}
