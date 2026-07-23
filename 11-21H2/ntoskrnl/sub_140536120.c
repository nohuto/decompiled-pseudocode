/*
 * XREFs of sub_140536120 @ 0x140536120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E08 @ 0x1403A2E08 (sub_1403A2E08.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_140536120(__int64 a1)
{
  int v2; // esi
  int v3; // ebp
  __int64 result; // rax
  unsigned int v5; // edi

  v2 = *(_DWORD *)(a1 + 108);
  v3 = *(_DWORD *)(a1 + 104);
  if ( *(_BYTE *)(a1 + 138) )
  {
    *(_DWORD *)(a1 + 120) = 3;
    result = sub_1403A2E08(a1, *(_DWORD *)(a1 + 44));
    v5 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 1;
    result = sub_1403A2E08(a1, *(unsigned __int16 *)(a1 + 44));
    v5 = *(unsigned __int16 *)(a1 + 40);
  }
  if ( v3 )
  {
    if ( v3 != 1 )
      longjmp((_JBTYPE *)(a1 + 160), 8);
    result = sub_1403A2E08(a1, v5);
  }
  if ( *(_BYTE *)(a1 + 138) )
  {
    *(_DWORD *)(a1 + 40) -= v2;
    *(_DWORD *)(a1 + 44) = v5;
  }
  else
  {
    *(_WORD *)(a1 + 40) -= v2;
    *(_WORD *)(a1 + 44) = v5;
  }
  return result;
}
