/*
 * XREFs of sub_1407C063C @ 0x1407C063C
 * Callers:
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 * Callees:
 *     sub_1406B98FC @ 0x1406B98FC (sub_1406B98FC.c)
 */

__int64 __fastcall sub_1407C063C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v3; // r11
  __int64 v4; // r10
  __int64 v5; // r10
  __int16 v6; // r11

  result = *(unsigned __int16 *)(a2 + 66);
  *(_WORD *)(a1 + 2) = result;
  v3 = *(_WORD *)(a2 + 66);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a2 + 192);
    while ( v4 )
    {
      result = sub_1406B98FC(a1, v3, *(_QWORD *)(v4 + 16));
      v4 = *(_QWORD *)(v5 + 24);
      v3 = v6 - 1;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  return result;
}
