/*
 * XREFs of sub_14056D9C0 @ 0x14056D9C0
 * Callers:
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 *     sub_1403DB8D8 @ 0x1403DB8D8 (sub_1403DB8D8.c)
 * Callees:
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 */

__int64 __fastcall sub_14056D9C0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  while ( (int)sub_140354698(a1 + 8, &v8) < 0 )
  {
    v5 = sub_14030B3F0(*(_DWORD *)a1, (_DWORD *)(a1 + 4));
    if ( v5 == -1 )
      break;
    v6 = qword_140D31700[v5];
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(v6 + 16);
  }
  if ( v8 )
    *a2 = v8;
  else
    return (unsigned int)-2147483622;
  return v2;
}
