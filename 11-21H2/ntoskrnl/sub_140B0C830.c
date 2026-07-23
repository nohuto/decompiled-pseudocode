/*
 * XREFs of sub_140B0C830 @ 0x140B0C830
 * Callers:
 *     sub_140B0C004 @ 0x140B0C004 (sub_140B0C004.c)
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 *     sub_140B0CDAC @ 0x140B0CDAC (sub_140B0CDAC.c)
 * Callees:
 *     sub_140B0D440 @ 0x140B0D440 (sub_140B0D440.c)
 *     sub_140B0D470 @ 0x140B0D470 (sub_140B0D470.c)
 */

__int64 __fastcall sub_140B0C830(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v4 = 0;
  v5 = sub_140B0D470();
  if ( v5 )
  {
    v6 = sub_140B0D440(v5, a3);
    if ( v6 )
    {
      v7 = *(_QWORD **)(v6 + 16);
      while ( v7 )
      {
        v7 = (_QWORD *)*v7;
        ++v4;
      }
    }
  }
  return v4;
}
