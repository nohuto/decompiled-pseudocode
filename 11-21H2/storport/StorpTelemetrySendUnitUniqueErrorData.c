/*
 * XREFs of StorpTelemetrySendUnitUniqueErrorData @ 0x1C0013580
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C0005CD8 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer @ 0x1C0012620 (McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetrySendUnitUniqueErrorData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  const wchar_t *v3; // r9
  int v5; // [rsp+80h] [rbp-68h]

  if ( (byte_1C00799E5 & 0x40) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = (const wchar_t *)&unk_1C006A690;
    if ( *(_QWORD *)(v2 + 4952) )
      v3 = *(const wchar_t **)(v2 + 4952);
    McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer(
      a1 + 186,
      a1 + 169,
      *(_BYTE *)(a1 + 450) & 1,
      *(_DWORD *)(v2 + 56),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      v2 + 4936,
      *(_DWORD *)(a1 + 3296),
      *(const wchar_t **)(v2 + 4592),
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      v3,
      *(_BYTE *)(a1 + 450) & 1,
      v5,
      *(_DWORD *)(a2 + 12),
      *(_DWORD *)(a2 + 16),
      *(_BYTE *)(a2 + 5),
      *(_BYTE *)a2,
      *(_BYTE *)(a2 + 1),
      *(_BYTE *)(a2 + 2),
      *(_BYTE *)(a2 + 3),
      *(_BYTE *)(a2 + 4),
      *(_DWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 20),
      *(_QWORD *)(a2 + 24));
  }
  return 0LL;
}
