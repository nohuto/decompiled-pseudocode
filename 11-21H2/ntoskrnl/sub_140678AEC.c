/*
 * XREFs of sub_140678AEC @ 0x140678AEC
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 * Callees:
 *     sub_1402075A4 @ 0x1402075A4 (sub_1402075A4.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140678B4C @ 0x140678B4C (sub_140678B4C.c)
 */

LONG_PTR __fastcall sub_140678AEC(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 1200) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1512), 0xFFFFFFDF);
  sub_1402075A4((unsigned __int16 *)(*(_QWORD *)(a1 + 1200) + 128LL));
  result = sub_140678B4C(*(PVOID *)(a1 + 1200));
  *(_QWORD *)(a1 + 1200) = 0LL;
  if ( byte_140D068E0 )
  {
    result = *(_QWORD *)(a1 + 1272);
    if ( result == a1 )
    {
      v3 = *(void **)(a1 + 1304);
      if ( v3 )
      {
        result = ObfDereferenceObjectWithTag(v3, 0x624A7350u);
        *(_QWORD *)(a1 + 1304) = 0LL;
      }
    }
  }
  return result;
}
