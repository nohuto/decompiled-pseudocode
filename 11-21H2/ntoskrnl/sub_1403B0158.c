/*
 * XREFs of sub_1403B0158 @ 0x1403B0158
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x1403AFF80 (HalGetMessageRoutingInfo.c)
 *     sub_1403B00D4 @ 0x1403B00D4 (sub_1403B00D4.c)
 * Callees:
 *     KeQueryInterruptPartitionInformation @ 0x1403B0210 (KeQueryInterruptPartitionInformation.c)
 *     KeQueryInterruptPartitionCount @ 0x1403B0280 (KeQueryInterruptPartitionCount.c)
 */

__int64 __fastcall sub_1403B0158(__int64 a1, bool *a2)
{
  __int64 v2; // rbx
  int v5; // eax
  unsigned int v6; // r8d
  bool v7; // zf
  unsigned int v8; // esi
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( *(_WORD *)(a1 + 8) )
  {
    *a2 = 0;
    return 0;
  }
  v5 = KeQueryInterruptPartitionCount(0LL, &v11);
  v6 = v5;
  if ( v5 == 259 )
  {
    if ( LOWORD(dword_140D06E40[0]) )
      v2 = qword_140D06E48[0];
    *a2 = v2 == *(_QWORD *)a1;
    return v6;
  }
  if ( v5 < 0 || (v7 = v11 == 0, !v11) )
  {
    *a2 = 0;
    return 0;
  }
  *a2 = 1;
  v8 = 0;
  if ( !v7 )
  {
    while ( 1 )
    {
      v6 = KeQueryInterruptPartitionInformation(0LL, v8, &v10);
      if ( (v6 & 0x80000000) != 0 || (*(_QWORD *)a1 & (unsigned __int64)v10) == 0 )
        break;
      if ( ++v8 >= v11 )
        return v6;
    }
    *a2 = 0;
  }
  return v6;
}
