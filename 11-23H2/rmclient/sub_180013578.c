/*
 * XREFs of sub_180013578 @ 0x180013578
 * Callers:
 *     sub_180013980 @ 0x180013980 (sub_180013980.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 * Callees:
 *     sub_180012370 @ 0x180012370 (sub_180012370.c)
 *     sub_18001F13C @ 0x18001F13C (sub_18001F13C.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall sub_180013578(__int64 a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rcx

  v2 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  sub_18001F1C4(v2 + 48);
  if ( (*(_BYTE *)(v2 + 96) & 1) == 0 && (unsigned int)sub_18001F13C(a1 + 88) )
  {
    if ( v4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), (unsigned int)v4) <= v4 )
      __fastfail(v4 + 13);
    v5 = *(_QWORD **)(v2 + 88);
    if ( *v5 != v2 + 80 )
      __fastfail(3u);
    v3[1] = v5;
    *v3 = v2 + 80;
    *v5 = v3;
    *(_QWORD *)(v2 + 88) = v3;
    sub_180012370(v2);
  }
  *(_DWORD *)(v2 + 56) = 0;
  return RtlReleaseSRWLockExclusive(v2 + 48);
}
