/*
 * XREFs of ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140066BD0
 * Callers:
 *     ??1CVpoContext@@IEAA@XZ @ 0x140066250 (--1CVpoContext@@IEAA@XZ.c)
 * Callees:
 *     memmove_s @ 0x140021438 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // r10d
  errno_t v4; // eax
  errno_t v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = qword_1400CF818;
  if ( a2 >= (int)qword_1400CF818 )
    return 0LL;
  if ( a2 != (_DWORD)qword_1400CF818 - 1 )
  {
    v4 = memmove_s(
           (void *const)(CVpoContext::s_mapVpoContext + 4LL * a2),
           4LL * ((int)qword_1400CF818 - a2),
           (const void *const)(CVpoContext::s_mapVpoContext + 4LL * a2 + 4),
           4LL * ((int)qword_1400CF818 - a2 - 1));
    if ( v4 )
    {
      if ( v4 == 12 )
        goto LABEL_16;
      if ( v4 == 22 || v4 == 34 )
        goto LABEL_15;
      if ( v4 != 80 )
        goto LABEL_14;
    }
    v5 = memmove_s(
           (void *const)(qword_1400CF810 + 8 * v2),
           8LL * ((int)qword_1400CF818 - (int)v2),
           (const void *const)(qword_1400CF810 + 8 * v2 + 8),
           8LL * ((int)qword_1400CF818 - (int)v2 - 1));
    if ( !v5 )
    {
LABEL_17:
      v3 = qword_1400CF818;
      goto LABEL_18;
    }
    if ( v5 != 12 )
    {
      if ( v5 != 22 && v5 != 34 )
      {
        if ( v5 != 80 )
LABEL_14:
          ATL::AtlThrowImpl(-2147467259);
        goto LABEL_17;
      }
LABEL_15:
      ATL::AtlThrowImpl(-2147024809);
    }
LABEL_16:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_18:
  v6 = _o__recalloc(CVpoContext::s_mapVpoContext, v3 - 1, 4LL);
  if ( v6 || (_DWORD)qword_1400CF818 == 1 )
    CVpoContext::s_mapVpoContext = v6;
  v7 = _o__recalloc(qword_1400CF810, (int)qword_1400CF818 - 1, 8LL);
  if ( v7 || (_DWORD)qword_1400CF818 == 1 )
    qword_1400CF810 = v7;
  result = 1LL;
  LODWORD(qword_1400CF818) = qword_1400CF818 - 1;
  return result;
}
