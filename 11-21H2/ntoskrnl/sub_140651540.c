/*
 * XREFs of sub_140651540 @ 0x140651540
 * Callers:
 *     IoSetPartitionInformation @ 0x140930940 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140930A20 (IoSetPartitionInformationEx.c)
 * Callees:
 *     sub_14064FFEC @ 0x14064FFEC (sub_14064FFEC.c)
 *     sub_1406518D8 @ 0x1406518D8 (sub_1406518D8.c)
 *     sub_140651C24 @ 0x140651C24 (sub_140651C24.c)
 */

__int64 __fastcall sub_140651540(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v5; // r11d
  __int64 v6; // r10
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(unsigned int *)(a1 + 256);
  if ( (_DWORD)v3 != *a3 )
    return 3221225485LL;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
    {
      v7 = a1;
      return sub_14064FFEC(&v7, a2, (__int64)a3);
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    sub_1406518D8(&v7, a1, a3, v3);
    return sub_140651C24(&v7, v5, v6);
  }
}
