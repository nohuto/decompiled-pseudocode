/*
 * XREFs of RtlQueryActivationContextApplicationSettings @ 0x18007D8E0
 * Callers:
 *     LdrpFusionManifestCodePages @ 0x1800AF938 (LdrpFusionManifestCodePages.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x180100924 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001D750 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x18001DC40 (RtlpLocateActivationContextSection.c)
 *     RtlpGetActivationContextData @ 0x180033B5C (RtlpGetActivationContextData.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryActivationContextApplicationSettings(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const WCHAR *a4,
        void *a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  const wchar_t *v7; // rsi
  int ActivationContextData; // ebx
  unsigned int v11; // edi
  __int64 v12; // rbx
  unsigned int *v13; // rdi
  char *v14; // rax
  signed __int64 v15; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // [rsp+40h] [rbp-61h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-41h] BYREF
  int v22; // [rsp+64h] [rbp-3Dh] BYREF
  unsigned int *v23; // [rsp+68h] [rbp-39h]
  unsigned int v24; // [rsp+100h] [rbp+5Fh] BYREF

  v19 = 0LL;
  v7 = L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  v24 = 0;
  v18 = -1;
  if ( a3 )
    v7 = a3;
  if ( !a5 && a6 )
    return 3221225485LL;
  ActivationContextData = RtlpGetActivationContextData(1, a2, 0LL, &v19);
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
      51,
      0,
      "RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
      *(const void **)&DestinationString.Length,
      v24);
    return 3222601731LL;
  }
  RtlInitUnicodeString(&DestinationString, a4);
  memset_thunk_772440563353939046(&v22, 0, 0x6CuLL);
  v21 = 112;
  ActivationContextData = RtlpFindUnicodeStringInSection(v12, v11, &DestinationString.Length, &v21, &v18, (int *)&v24);
  if ( ActivationContextData < 0 )
    goto LABEL_6;
  if ( v22 != 1 )
    return 3222601731LL;
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
    return 3222601736LL;
  if ( a6 < (unsigned __int64)v23[6] >> 1 )
    ActivationContextData = -1073741789;
  else
    memmove(a5, (char *)v23 + v23[7], v23[6] + 2LL);
  if ( a7 )
    *a7 = ((unsigned __int64)v13[6] >> 1) + 1;
LABEL_6:
  if ( ActivationContextData == -1072365567 )
    return (unsigned int)-1072365560;
  return (unsigned int)ActivationContextData;
}
