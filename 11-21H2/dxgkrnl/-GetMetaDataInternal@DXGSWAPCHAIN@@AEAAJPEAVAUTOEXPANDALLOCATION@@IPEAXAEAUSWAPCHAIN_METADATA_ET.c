/*
 * XREFs of ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C034AB18
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C034AD18 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        __int64 a3,
        char *a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a5,
        char a6,
        unsigned int *a7)
{
  __int64 v8; // rdi
  unsigned int v10; // esi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  const void *v18; // r12
  size_t v19; // r8
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 CurrentProcess; // rax

  v8 = (unsigned int)a3;
  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3201LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 3201LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = *((_DWORD *)a2 + 2);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 > v10 )
      v8 = v10;
    v18 = *(const void **)a2;
    v19 = 16LL;
    if ( v10 <= 0x10 )
      v19 = *((unsigned int *)a2 + 2);
    memmove((char *)a5 + 12, *(const void **)a2, v19);
    if ( a6 == 1 )
    {
      v20 = (unsigned int)v8;
      if ( (unsigned __int64)&a4[v8] > MmUserProbeAddress || &a4[v8] <= a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, v18, (unsigned int)v8);
    }
    else
    {
      v20 = (unsigned int)v8;
      memmove(a4, v18, (unsigned int)v8);
    }
    *((_DWORD *)a5 + 2) = v8;
    *a7 = v8;
    if ( v10 <= (unsigned int)v8 )
      return 0LL;
    CurrentProcess = PsGetCurrentProcess(v22, v21, v23, v24);
    WdLogSingleEntry2(3LL, CurrentProcess, v20);
    return 2147483653LL;
  }
  else
  {
    if ( !a4 )
    {
      *a7 = v10;
      return 0LL;
    }
    v12 = PsGetCurrentProcess(this, a2, a3, a4);
    WdLogSingleEntry1(2LL, v12);
    v17 = PsGetCurrentProcess(v14, v13, v15, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"GetSetMetadata caller (0x%I64x) passed in buffer size of zero",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
