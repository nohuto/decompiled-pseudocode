/*
 * XREFs of ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C0057A18
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     NtDxgkVailDisconnect @ 0x1C0354450 (NtDxgkVailDisconnect.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C03510D8 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::DisableVmBusChannel(struct _KTHREAD **this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  struct DXGVMBUSCHANNEL *v5; // rcx

  if ( this[8] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 353LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0LL,
          2,
          -1,
          L"m_VailMutex.IsOwner()",
          353LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v5 = this[14];
  if ( v5 )
    DisableVmBusChannel(v5);
}
