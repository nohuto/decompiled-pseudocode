/*
 * XREFs of ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x1C0070B10
 * Callers:
 *     DxgkUnmapPhysicalMemoryCB @ 0x1C0054CB0 (DxgkUnmapPhysicalMemoryCB.c)
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03C1928 (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C001B450 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmUnmapMdl @ 0x1C0070578 (SmmUnmapMdl.c)
 *     McTemplateK0ppx_EtwWriteTransfer @ 0x1C0070C20 (McTemplateK0ppx_EtwWriteTransfer.c)
 *     SmmUnmapSection @ 0x1C03C1888 (SmmUnmapSection.c)
 */

void __fastcall SysMmUnmapPhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1, PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  char v3; // si
  unsigned int v4; // eax
  char v5; // di
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d

  v3 = NumberOfBytes;
  v4 = *((_DWORD *)a1 + 11) & 0x1E;
  v5 = (char)BaseAddress;
  switch ( v4 )
  {
    case 2u:
      SmmUnmapSection(BaseAddress);
      break;
    case 4u:
      SmmUnmapMdl((__int64)a1, *((struct _MDL **)a1 + 1), BaseAddress);
      break;
    case 6u:
      MmUnmapIoSpace(BaseAddress, NumberOfBytes);
      break;
    default:
      if ( v4 <= 6 || v4 > 0xA )
      {
        WdLogSingleEntry1(1LL, 813LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(0, v7, v8, 0LL, 2, -1, L"0", 813LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      break;
  }
  SysMmUnreferencePhysicalObject(a1);
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0ppx_EtwWriteTransfer(v10, v9, v11, (_DWORD)a1, v5, v3);
}
