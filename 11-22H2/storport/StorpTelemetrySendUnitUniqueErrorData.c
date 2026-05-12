/*
 * XREFs of StorpTelemetrySendUnitUniqueErrorData @ 0x1C0014CB0
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C0014E64 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer @ 0x1C0014990 (McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetrySendUnitUniqueErrorData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  const wchar_t *v3; // r9
  int v5; // [rsp+80h] [rbp-68h]

  if ( byte_1C0092A05 < 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = (const wchar_t *)&unk_1C0081788;
    if ( *(_QWORD *)(v2 + 5016) )
      v3 = *(const wchar_t **)(v2 + 5016);
    McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer(
      a1 + 186,
      a1 + 169,
      *(_BYTE *)(a1 + 450) & 1,
      *(_DWORD *)(v2 + 56),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 2024,
      v2 + 5000,
      *(_DWORD *)(a1 + 3344),
      *(const wchar_t **)(v2 + 4656),
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
