/*
 * XREFs of ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C004B0D0
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  char v6; // di
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rbp
  KIRQL v12; // al
  LONG v13; // edx
  LONG v14; // ecx
  LONG v15; // edx
  LONG v16; // edx
  unsigned int right; // ecx
  unsigned int bottom; // eax

  v6 = 1;
  if ( *((struct _KTHREAD **)DXGGLOBAL_GetGlobal() + 211) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4704LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0LL,
          2,
          -1,
          L"DXGGLOBAL::GetGlobal()->GetVirtualFrameBufferAccessLock()->IsOwner()",
          4704LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v10 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 207);
  if ( !v10 )
    return 0;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 24));
  v13 = *(_DWORD *)(v10 + 8);
  v14 = *(_DWORD *)(v10 + 4);
  *(_DWORD *)(v10 + 4) = -1;
  *(_DWORD *)(v10 + 8) = 0;
  a1->right = v13;
  v15 = *(_DWORD *)(v10 + 12);
  *(_DWORD *)(v10 + 12) = -1;
  a1->top = v15;
  v16 = *(_DWORD *)(v10 + 16);
  *(_DWORD *)(v10 + 16) = 0;
  a1->bottom = v16;
  a1->left = v14;
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 24), v12);
  right = a1->right;
  if ( a1->left >= right )
    return 0;
  bottom = a1->bottom;
  if ( a1->top >= bottom || right > a2 || bottom > a3 )
    return 0;
  return v6;
}
