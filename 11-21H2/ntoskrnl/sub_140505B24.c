/*
 * XREFs of sub_140505B24 @ 0x140505B24
 * Callers:
 *     sub_140506578 @ 0x140506578 (sub_140506578.c)
 * Callees:
 *     sub_140505B9C @ 0x140505B9C (sub_140505B9C.c)
 *     sub_140506B18 @ 0x140506B18 (sub_140506B18.c)
 *     sub_14051BCD8 @ 0x14051BCD8 (sub_14051BCD8.c)
 */

__int64 __fastcall sub_140505B24(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  _DWORD *v8; // rdi

  v6 = -1073741823;
  v7 = sub_140506B18();
  v8 = (_DWORD *)v7;
  if ( v7 )
  {
    sub_14051BCD8(v7, a2, a3);
    *v8 = 0;
    return 0;
  }
  else
  {
    sub_140505B9C(a1, a3);
  }
  return v6;
}
