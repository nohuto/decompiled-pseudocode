/*
 * XREFs of sub_1405235A0 @ 0x1405235A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 */

__int64 __fastcall sub_1405235A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // r8

  v4 = a1 + a3;
  v5 = a1;
  sub_14022D9F0(a1, a2, a3);
  v6 = 0LL;
  while ( v5 < v4 )
  {
    __outbyte(0x70u, v5);
    __outbyte(0x71u, *(_BYTE *)(v6 + a2));
    ++v5;
    v6 = (unsigned int)(v6 + 1);
  }
  _InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return (unsigned int)v6;
}
