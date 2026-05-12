/*
 * XREFs of StorpTelemetrySendUnitNvmeLogPage @ 0x1C00721A8
 * Callers:
 *     StorpTelemetryEnumUnitNvmeLogPages @ 0x1C006DE4C (StorpTelemetryEnumUnitNvmeLogPages.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0020BF8 (StorpTelemetryNvmeGetLogPage.c)
 *     McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer @ 0x1C006A95C (McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer.c)
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
      if ( v9 <= a3 && (byte_1C0092A04 & 8) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(v10 + 5016) )
          v11 = *(const wchar_t **)(v10 + 5016);
        McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer(
          a1 + 186,
          a1 + 169,
          a1 + 160,
          *(_DWORD *)(v10 + 56),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          a1 + 2024,
          v10 + 5000,
          *(const wchar_t **)(v10 + 4656),
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
