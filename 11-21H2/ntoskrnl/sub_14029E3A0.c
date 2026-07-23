/*
 * XREFs of sub_14029E3A0 @ 0x14029E3A0
 * Callers:
 *     sub_140275FC0 @ 0x140275FC0 (sub_140275FC0.c)
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 *     sub_14029D344 @ 0x14029D344 (sub_14029D344.c)
 *     sub_14029E260 @ 0x14029E260 (sub_14029E260.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14029E3A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL) % (unsigned int)dword_140C097B4;
  if ( byte_140C54C58 == 1 )
    return *(_QWORD *)(*(_QWORD *)(a2 + 592) + 8 * v3 + 64);
  else
    return *(_QWORD *)(a1 + 8 * v3 + 80);
}
