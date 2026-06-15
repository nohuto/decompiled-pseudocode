/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140014564
 * Callers:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x140014610 (StringCopyWorkerW.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4,
        size_t pcchNewDestLength)
{
  const wchar_t *v8; // r9
  size_t cchToCopy; // rax
  HRESULT v10; // ebx
  unsigned __int64 v11; // rdi

  if ( !a1 && a2 || a2 > 0x7FFFFFFF || a4 >= 0x7FFFFFFF )
  {
    v10 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v8 = (const wchar_t *)&unk_1400AF8C4;
    if ( a3 )
      v8 = a3;
    cchToCopy = a4 & -(__int64)(a3 != 0LL);
    if ( a2 )
    {
      pcchNewDestLength = 0LL;
      v10 = StringCopyWorkerW(a1, a2, &pcchNewDestLength, v8, cchToCopy);
      v11 = a2 - pcchNewDestLength;
      if ( v10 >= 0 && v11 > 1 && 2 * v11 > 2 )
        memset_0(&a1[pcchNewDestLength + 1], 0, 2 * v11 - 2);
    }
    else
    {
      v10 = 0;
      if ( cchToCopy && *v8 )
        return (unsigned int)(a1 != 0LL ? -2147024774 : -2147024809);
    }
  }
  return (unsigned int)v10;
}
