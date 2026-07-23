/*
 * XREFs of sub_140364794 @ 0x140364794
 * Callers:
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140364230 @ 0x140364230 (sub_140364230.c)
 * Callees:
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_140350B40 @ 0x140350B40 (sub_140350B40.c)
 *     sub_140364860 @ 0x140364860 (sub_140364860.c)
 *     sub_140365700 @ 0x140365700 (sub_140365700.c)
 *     sub_140371654 @ 0x140371654 (sub_140371654.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 __fastcall sub_140364794(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v11; // rcx
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v5 = sub_140365700();
  if ( v5 )
  {
    v8 = (v5 & *(_QWORD *)a1) + ((v5 - (v5 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( v7 > v8 )
    {
      if ( (*(_BYTE *)(v5 + 24) & 0xC) == 8 )
      {
        return (unsigned int)sub_140364860(*(_QWORD *)(a1 + 24), v8, v7, a3);
      }
      else
      {
        v9 = sub_14034CEB0(*(_QWORD *)(a1 + 32), v8, v7, a3, &v12);
        if ( v9 )
        {
          v11 = *(_QWORD *)(a1 + 24);
          if ( v12 <= (unsigned int)*(unsigned __int16 *)(v11 + 60) - 16 )
            sub_140371654(v11, v12, 0LL);
        }
      }
    }
    else
    {
      sub_140350B40(a1, v5, v6, a3);
      return 1;
    }
  }
  else
  {
    sub_1405F1BBC(9, *(_QWORD *)(a1 + 56), v7, 0, 0LL, 0LL);
    return 0;
  }
  return v9;
}
