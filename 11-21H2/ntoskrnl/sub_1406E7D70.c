/*
 * XREFs of sub_1406E7D70 @ 0x1406E7D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140683890 @ 0x140683890 (sub_140683890.c)
 *     sub_1409AFDD8 @ 0x1409AFDD8 (sub_1409AFDD8.c)
 */

__int64 __fastcall sub_1406E7D70(PVOID Object, __int64 a2)
{
  if ( (*((_DWORD *)Object + 280) & 1) == 0 )
  {
    sub_140683890((__int64)Object, *(_DWORD *)(a2 + 8));
    if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != *((_QWORD *)Object + 162) )
      sub_1409AFDD8(Object);
  }
  return 0LL;
}
