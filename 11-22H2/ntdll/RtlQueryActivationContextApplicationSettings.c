/*
 * XREFs of RtlQueryActivationContextApplicationSettings @ 0x18007D270
 * Callers:
 *     LdrpFusionManifestCodePages @ 0x1800AD868 (LdrpFusionManifestCodePages.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800FF514 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001D930 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x18001DE20 (RtlpLocateActivationContextSection.c)
 *     RtlpGetActivationContextData @ 0x180033CBC (RtlpGetActivationContextData.c)
 *     DbgPrintEx @ 0x180053A30 (DbgPrintEx.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueryActivationContextApplicationSettings(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PWSTR SettingsNameSpace,
        PWSTR SettingName,
        PWSTR Buffer,
        SIZE_T BufferLength,
        PSIZE_T RequiredLength)
{
  PWSTR v7; // rsi
  NTSTATUS ActivationContextData; // ebx
  unsigned int v11; // edi
  __int64 v12; // rbx
  unsigned int *v13; // rdi
  char *v14; // rax
  signed __int64 v15; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // [rsp+40h] [rbp-61h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-59h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-41h] BYREF
  int v22; // [rsp+64h] [rbp-3Dh] BYREF
  unsigned int *v23; // [rsp+68h] [rbp-39h]
  unsigned int v24; // [rsp+100h] [rbp+5Fh] BYREF

  v19 = 0LL;
  v7 = L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  v24 = 0;
  v18 = -1;
  if ( SettingsNameSpace )
    v7 = SettingsNameSpace;
  if ( !Buffer && BufferLength )
    return -1073741811;
  ActivationContextData = RtlpGetActivationContextData(1, (__int64)ActivationContext, 0LL, &v19);
  if ( ActivationContextData < 0 )
    goto LABEL_6;
  ActivationContextData = RtlpLocateActivationContextSection(v19, 0LL, 0xAu, &DestinationString, &v24);
  if ( ActivationContextData < 0 )
    goto LABEL_6;
  v11 = v24;
  v12 = *(_QWORD *)&DestinationString.Length;
  if ( v24 < 0x2C || **(_DWORD **)&DestinationString.Length != 1682469715 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
      *(const void **)&DestinationString.Length,
      v24);
    return -1072365565;
  }
  RtlInitUnicodeString(&DestinationString, SettingName);
  memset_thunk_772440563353939046(&v22, 0, 0x6CuLL);
  v21 = 112;
  ActivationContextData = RtlpFindUnicodeStringInSection(v12, v11, &DestinationString, &v21, &v18, (int *)&v24);
  if ( ActivationContextData < 0 )
    goto LABEL_6;
  if ( v22 != 1 )
    return -1072365565;
  v13 = v23;
  v14 = (char *)v23 + v23[3];
  v15 = (char *)v7 - v14;
  do
  {
    v16 = *(unsigned __int16 *)&v14[v15];
    v17 = *(unsigned __int16 *)v14 - v16;
    if ( v17 )
      break;
    v14 += 2;
  }
  while ( v16 );
  if ( v17 )
    return -1072365560;
  if ( BufferLength < (unsigned __int64)v23[6] >> 1 )
    ActivationContextData = -1073741789;
  else
    memmove(Buffer, (char *)v23 + v23[7], v23[6] + 2LL);
  if ( RequiredLength )
    *RequiredLength = ((unsigned __int64)v13[6] >> 1) + 1;
LABEL_6:
  if ( ActivationContextData == -1072365567 )
    return -1072365560;
  return ActivationContextData;
}
