/*
 * XREFs of sub_1406EC954 @ 0x1406EC954
 * Callers:
 *     sub_1406EC208 @ 0x1406EC208 (sub_1406EC208.c)
 *     sub_1406EC270 @ 0x1406EC270 (sub_1406EC270.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1406EC9F8 @ 0x1406EC9F8 (sub_1406EC9F8.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_1406EC954(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  ULONG_PTR v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    LOBYTE(a3) = 1;
    v4 = sub_140797594(*(_QWORD *)(a1 + 152), *(unsigned __int16 *)(a1 + 88), a3);
    v5 = v4;
    if ( v4 )
    {
      v6 = v4 + 688;
      ExAcquirePushLockExclusiveEx(v4 + 688, 0LL);
      *(_QWORD *)(v5 + 352) = a1;
      ExReleasePushLockEx(v6, 0LL);
      v7 = sub_1406EC9F8(v5, 16LL);
      sub_1406EC9F8(v5, 4LL);
      LOBYTE(v8) = 1;
      sub_1407981E8(v5, v8);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v7;
}
