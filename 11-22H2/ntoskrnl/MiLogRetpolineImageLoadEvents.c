/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x1407D49B0
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B493C4 (MiApplyBootLoadedDriversFixups.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x14035F928 (RtlIsImageFullyRetpolined.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140853A80 (MiLogNonRetpolineImageLoadEvent.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x140A34278 (MiConstructNonRetpolineImageLoadRecord.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(void **)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)&qword_140C699E8 )
    {
      return (_QWORD *)MiLogNonRetpolineImageLoadEvent(
                         a1 + 88,
                         *(unsigned int *)(a1 + 120),
                         *(unsigned int *)(a1 + 156));
    }
    else
    {
      result = (_QWORD *)MiConstructNonRetpolineImageLoadRecord(a1);
      if ( result )
      {
        v3 = (_QWORD *)qword_140C65978;
        if ( *(PVOID **)qword_140C65978 != &qword_140C65970 )
          __fastfail(3u);
        *result = &qword_140C65970;
        result[1] = v3;
        *v3 = result;
        qword_140C65978 = (__int64)result;
      }
    }
  }
  return result;
}
