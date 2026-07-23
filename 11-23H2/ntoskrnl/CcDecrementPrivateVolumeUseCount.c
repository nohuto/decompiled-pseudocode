/*
 * XREFs of CcDecrementPrivateVolumeUseCount @ 0x14029A86C
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14029A250 (CcDeleteSharedCacheMap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x140341C94 (CcCreatePrivateVolumeCacheMap.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403D1050 (CcForEachPrivateVolumeCacheMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDecrementPrivateVolumeUseCount(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
    KeBugCheckEx(0x34u, 0x1CBCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  result = (unsigned int)(v1 - 1);
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
