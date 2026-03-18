/*
 * XREFs of ?Add@DXGFIXEDQUEUE@@QEAAJI@Z @ 0x1C005AC3C
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C034BF18 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGFIXEDQUEUE::Add(DXGFIXEDQUEUE *this, int a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // eax
  int v19; // ecx
  void *v20; // rcx
  int v21; // eax

  v4 = (char *)*((_QWORD *)this + 2);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL, 52LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0LL,
          0,
          -1,
          L"Queue Init function not called or failed",
          52LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 3221225495LL;
  }
  v11 = *((_DWORD *)this + 2);
  v12 = *((_DWORD *)this + 1);
  v13 = v11 + 1;
  if ( v11 + 1 == v12 )
    v13 = 0;
  if ( v13 == *((_DWORD *)this + 3) )
  {
    v14 = 4LL * (unsigned int)(*(_DWORD *)this + v12);
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)this + v12), 4uLL) )
      v14 = -1LL;
    v4 = (char *)operator new[](v14, 0x4B677844u, 256LL, a4);
    if ( !v4 )
    {
      WdLogSingleEntry1(2LL, this);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v16,
          v15,
          v17,
          0LL,
          0,
          -1,
          L"Queue 0x%I64x has run out of space",
          this,
          0LL,
          0LL,
          0LL,
          0LL);
      return 3221225507LL;
    }
    memmove(
      v4,
      (const void *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 3)),
      4LL * (unsigned int)(*((_DWORD *)this + 1) - *((_DWORD *)this + 3)));
    v18 = *((_DWORD *)this + 3);
    v19 = *((_DWORD *)this + 1);
    if ( v18 )
    {
      memmove(&v4[4 * (v19 - v18)], *((const void **)this + 2), 4LL * *((unsigned int *)this + 2));
      v19 = *((_DWORD *)this + 1);
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 2) = v19 - 1;
    }
    *((_DWORD *)this + 1) = *(_DWORD *)this + v19;
    v20 = (void *)*((_QWORD *)this + 2);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    v11 = *((_DWORD *)this + 2);
    *((_QWORD *)this + 2) = v4;
  }
  *(_DWORD *)&v4[4 * v11] = a2;
  v21 = *((_DWORD *)this + 2) + 1;
  if ( v21 == *((_DWORD *)this + 1) )
    v21 = 0;
  *((_DWORD *)this + 2) = v21;
  return 0LL;
}
