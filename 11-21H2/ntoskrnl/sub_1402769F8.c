/*
 * XREFs of sub_1402769F8 @ 0x1402769F8
 * Callers:
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_140310AD0 @ 0x140310AD0 (sub_140310AD0.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402769F8(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx

  v1 = *(_DWORD *)(a1 + 548);
  if ( v1 == -1 )
    v1 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
  v2 = v1 % dword_140C097B4;
  if ( byte_140C54C58 == 1 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 592) + 8 * v2 + 64);
  else
    return *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v2 + 80);
}
