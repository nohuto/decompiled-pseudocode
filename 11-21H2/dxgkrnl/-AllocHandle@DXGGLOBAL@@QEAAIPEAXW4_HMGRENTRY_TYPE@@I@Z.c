/*
 * XREFs of ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C004A9B0
 * Callers:
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJI@Z @ 0x1C033FE08 (-Initialize@DXGKEYEDMUTEX@@QEAAJI@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::AllocHandle(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  if ( *(struct _KTHREAD **)(a1 + 312) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1433LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0LL,
          2,
          -1,
          L"m_ShareMutex.IsOwner()",
          1433LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return HMGRTABLE::AllocHandle(a1 + 336, a2, a3, 2LL, 0);
}
