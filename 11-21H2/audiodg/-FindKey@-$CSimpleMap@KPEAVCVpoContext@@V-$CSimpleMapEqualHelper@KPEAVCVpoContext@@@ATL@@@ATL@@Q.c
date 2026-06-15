/*
 * XREFs of ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140061944
 * Callers:
 *     ??1CVpoContext@@IEAA@XZ @ 0x140061518 (--1CVpoContext@@IEAA@XZ.c)
 *     AudioDGGetVpoFromVpoContext @ 0x140062030 (AudioDGGetVpoFromVpoContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax
  __int64 i; // rcx

  result = 0LL;
  if ( (int)qword_1400C16A0 <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; *(_DWORD *)(i + CVpoContext::s_mapVpoContext) != *a2; i += 4LL )
  {
    result = (unsigned int)(result + 1);
    if ( (int)result >= (int)qword_1400C16A0 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
