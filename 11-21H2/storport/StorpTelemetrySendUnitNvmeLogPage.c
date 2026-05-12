/*
 * XREFs of StorpTelemetrySendUnitNvmeLogPage @ 0x1C006424C
 * Callers:
 *     StorpTelemetryEnumUnitNvmeLogPages @ 0x1C0060144 (StorpTelemetryEnumUnitNvmeLogPages.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer @ 0x1C005D690 (McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0062E50 (StorpTelemetryNvmeGetLogPage.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeLogPage(__int64 a1, int a2, unsigned int a3)
{
  ULONG v3; // edi
  unsigned int *Pool; // rax
  unsigned int *v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdi
  const wchar_t *v11; // rbx

  v3 = a3 + 48;
  Pool = (unsigned int *)RaidAllocatePool(256LL, a3 + 48, 1700028754LL, *(_QWORD *)(a1 + 8));
  v8 = Pool;
  if ( Pool )
  {
    if ( StorpTelemetryNvmeGetLogPage(a1, a2, a3, Pool, v3) >= 0 )
    {
      v9 = v8[7];
      if ( v9 <= a3 && (byte_1C00799E4 & 4) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = (const wchar_t *)&unk_1C006A690;
        if ( *(_QWORD *)(v10 + 4952) )
          v11 = *(const wchar_t **)(v10 + 4952);
        McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer(
          a1 + 186,
          a1 + 169,
          a1 + 160,
          *(_DWORD *)(v10 + 56),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          a1 + 1976,
          v10 + 4936,
          *(const wchar_t **)(v10 + 4592),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v11,
          (const char *)(*(_QWORD *)(a1 + 152) + 90LL),
          *(_BYTE *)(a1 + 450) & 1,
          a2,
          v9,
          (__int64)v8 + v8[6] + 8);
      }
    }
    ExFreePoolWithTag(v8, 0x65546152u);
  }
}
