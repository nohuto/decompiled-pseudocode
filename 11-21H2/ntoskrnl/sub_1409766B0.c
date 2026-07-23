/*
 * XREFs of sub_1409766B0 @ 0x1409766B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAreBitsClearEx @ 0x14022C900 (RtlAreBitsClearEx.c)
 *     sub_14027E128 @ 0x14027E128 (sub_14027E128.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlAreBitsSetEx @ 0x1405E5430 (RtlAreBitsSetEx.c)
 */

__int64 __fastcall sub_1409766B0(__int64 *a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned __int64 v8; // r15

  *a4 = 0;
  if ( !a1 )
    return 0LL;
  v6 = a2 >> 12;
  v7 = a2 >> 12;
  v8 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)a3) >> 12;
  if ( RtlAreBitsSetEx((__int64)(a1 + 6), a2 >> 12, (unsigned int)v8) )
  {
    *a4 = 1;
    if ( !RtlAreBitsSetEx((__int64)(a1 + 8), v7, (unsigned int)v8) )
    {
      sub_14027E128(*a1, *(_QWORD *)(*a1 + 48) + (v6 << 12), (_DWORD)v8 << 12, 4LL);
      RtlSetBitsEx((__int64)(a1 + 8), v7, (unsigned int)v8);
    }
    return 0LL;
  }
  if ( RtlAreBitsClearEx((__int64)(a1 + 6), v7, (unsigned int)v8) )
    return 0LL;
  return 3221225595LL;
}
