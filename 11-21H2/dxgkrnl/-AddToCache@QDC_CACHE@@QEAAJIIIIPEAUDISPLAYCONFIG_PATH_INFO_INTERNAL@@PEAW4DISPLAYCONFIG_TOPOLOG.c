/*
 * XREFs of ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01B2E40
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01B2C60 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C01B2FEC (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 */

__int64 __fastcall QDC_CACHE::AddToCache(
        QDC_CACHE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Src,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  unsigned int v7; // ebp
  int v8; // r14d
  __int64 v10; // rdi
  DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  struct QDC_CACHE::QDC_CACHE_ENTRY *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  void *v19; // rax
  unsigned int v20; // ebx
  unsigned __int64 v22; // rax
  SIZE_T v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  void *v26; // rcx
  _BYTE v27[16]; // [rsp+50h] [rbp-28h] BYREF

  v7 = a4;
  v8 = a3;
  v10 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 438LL;
    return 3221225659LL;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
  if ( DXGPROCESS::IsRemoteConnection(Current) )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (QDC_CACHE *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  if ( !a5 )
    goto LABEL_12;
  if ( (_DWORD)v10 != *((_DWORD *)this + 158) )
  {
    v24 = WdLogNewEntry5_WdTrace(v13, v12);
    v25 = *((unsigned int *)this + 158);
    v20 = -1071774921;
    *(_QWORD *)(v24 + 24) = v25;
    *(_QWORD *)(v24 + 32) = v10;
    goto LABEL_13;
  }
  CacheEntry = QDC_CACHE::FindCacheEntry(this, 1, v7);
  v15 = CacheEntry;
  if ( CacheEntry )
  {
    if ( *((_DWORD *)CacheEntry + 2) == a5 )
    {
      v23 = RtlCompareMemory(*((const void **)CacheEntry + 2), Src, 216LL * a5);
      if ( v23 == 216LL * a5 )
        goto LABEL_12;
      WdLogSingleEntry1(3LL, v23);
    }
    else
    {
      WdLogSingleEntry1(3LL, 614LL);
    }
    WdLogSingleEntry1(1LL, 484LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Paths being added is different to valid cached one",
      484LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v26 = (void *)*((_QWORD *)v15 + 2);
    if ( v26 )
    {
      operator delete[](v26);
      *((_QWORD *)v15 + 2) = 0LL;
    }
  }
  else
  {
    v15 = QDC_CACHE::FindCacheEntry(this, 0, 0);
    if ( !v15 )
    {
      v20 = -1073741671;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = 496LL;
      goto LABEL_13;
    }
  }
  v19 = (void *)*((_QWORD *)v15 + 2);
  if ( *((_DWORD *)v15 + 2) != a5 && v19 )
  {
    operator delete[](*((void **)v15 + 2));
    v19 = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
  }
  if ( !v19 )
  {
    v22 = 216LL * a5;
    if ( !is_mul_ok(a5, 0xD8uLL) )
      v22 = -1LL;
    v19 = (void *)operator new[](v22, 0x43434451u, 256LL, v18);
    *((_QWORD *)v15 + 2) = v19;
    if ( !v19 )
    {
      WdLogSingleEntry1(6LL, 519LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate path or mode arrays for cache",
        519LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v20 = -1073741801;
      goto LABEL_13;
    }
  }
  memmove(v19, Src, 216LL * a5);
  if ( a7 )
    *((_DWORD *)v15 + 6) = *(_DWORD *)a7;
  *((_DWORD *)v15 + 7) = v8;
  *((_DWORD *)v15 + 2) = a5;
  *(_BYTE *)v15 = 1;
  *((_DWORD *)v15 + 1) = v7;
LABEL_12:
  v20 = 0;
LABEL_13:
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  return v20;
}
