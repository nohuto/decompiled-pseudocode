/*
 * XREFs of sub_18009DBD0 @ 0x18009DBD0
 * Callers:
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 * Callees:
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_18009DD48 @ 0x18009DD48 (sub_18009DD48.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009DBD0(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbx

  *(_QWORD *)a1 = &Spectre::Engine::ConstantBufferState::`vftable';
  sub_18000C8C8(a1 + 8, 192LL, 6LL);
  sub_18000C8C8(a1 + 1160, 192LL, 6LL);
  sub_18000C8C8(a1 + 2312, 192LL, 6LL);
  *(_DWORD *)(a1 + 3464) = a2;
  *(_BYTE *)(a1 + 3468) = 1;
  v6 = 0LL;
  do
  {
    if ( _bittest(&a2, v6) )
    {
      sub_18009DD48(a1 + 192 * v6 + 2312, a3);
      a2 = *(_DWORD *)(a1 + 3464);
    }
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 6 );
  return a1;
}
