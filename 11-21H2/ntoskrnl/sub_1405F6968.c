/*
 * XREFs of sub_1405F6968 @ 0x1405F6968
 * Callers:
 *     sub_1405F67D0 @ 0x1405F67D0 (sub_1405F67D0.c)
 * Callees:
 *     sub_140383138 @ 0x140383138 (sub_140383138.c)
 *     sub_1403962D0 @ 0x1403962D0 (sub_1403962D0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1405F6968(_DWORD *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rsi

  v6 = (_QWORD *)sub_140383138((_DWORD **)a2, (__int64)a2, 3);
  if ( v6 )
  {
    if ( (int)sub_14042A5E0(a2, v6) >= 0 )
    {
      ++a1[21];
      --a1[11];
      ++a1[12];
      *(_QWORD *)(((unsigned __int64)v6 + 11) & 0xFFFFFFFFFFFFFFF8uLL) = *a3;
      *a3 = v6;
      *(_DWORD *)a3 |= 1u;
    }
    else
    {
      ++a1[23];
      sub_1403962D0(a2, v6, 1);
    }
  }
  else
  {
    ++a1[23];
  }
}
