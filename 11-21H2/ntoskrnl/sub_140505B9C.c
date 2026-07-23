/*
 * XREFs of sub_140505B9C @ 0x140505B9C
 * Callers:
 *     sub_140505B24 @ 0x140505B24 (sub_140505B24.c)
 *     sub_140506578 @ 0x140506578 (sub_140506578.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140505B9C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  memset(a2, 0, 0x50uLL);
  v4 = *(_QWORD *)(a1 + 40);
  if ( (v4 & 0x400000000000000LL) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) != 1 )
    {
      *a2 = 2LL;
      v6 = *(_QWORD *)(a1 + 48);
      goto LABEL_7;
    }
    if ( (v4 & 0x800000000000000LL) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      if ( (v5 & 0x1C0) == 0x80 )
      {
        v6 = *(_QWORD *)(a1 + 48) & (-1 << (v5 & 0x3F));
        *a2 = 2LL;
LABEL_7:
        a2[2] = v6;
      }
    }
  }
  return 0LL;
}
