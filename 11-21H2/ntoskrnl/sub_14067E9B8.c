/*
 * XREFs of sub_14067E9B8 @ 0x14067E9B8
 * Callers:
 *     sub_140657ADC @ 0x140657ADC (sub_140657ADC.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 * Callees:
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 */

char __fastcall sub_14067E9B8(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // eax

  v3 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    *(_DWORD *)a1 = -2147483647;
    *(_QWORD *)(a1 + 8) = a2;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
        a2[3] = a1;
    }
    else
    {
      a2[2] = a1;
    }
    return 1;
  }
  if ( v3 >= 0 )
  {
    if ( v3 == 1 && (unsigned __int8)sub_140721FD0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7], a3) )
    {
      *(_DWORD *)a1 |= 0x80000000;
      return 1;
    }
  }
  else if ( (unsigned __int8)sub_140721FD0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7], a3) )
  {
    return 1;
  }
  return 0;
}
