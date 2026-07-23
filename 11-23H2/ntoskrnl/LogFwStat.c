/*
 * XREFs of LogFwStat @ 0x140AED85C
 * Callers:
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x140AECFB8 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AED110 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x140AED710 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x140AF22BC (AnFwpProgressAnimationManual.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x140385150 (BgpFwQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall LogFwStat(int a1, int a2, LARGE_INTEGER *a3)
{
  __int64 v4; // rdi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v6; // rcx
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rax
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // rax
  int v17; // edi
  LARGE_INTEGER v18; // rax

  v4 = a2;
  result = BgpFwQueryPerformanceCounter(a3);
  qword_140CF7B58 = result.QuadPart;
  if ( a1 )
  {
    stru_140C70D80[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_140C70D80[v4].QuadPart);
  qword_140CF7B78 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_140C0B708;
    if ( v6.QuadPart < qword_140C0B708 )
      v7 = v6;
    qword_140C0B708 = v7.QuadPart;
    v8.QuadPart = qword_140CF7AF8;
    if ( v6.QuadPart > qword_140CF7AF8 )
      v8 = v6;
LABEL_8:
    qword_140CF7B60 += v6.QuadPart;
    ++dword_140CF7B1C;
    qword_140CF7AF8 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v18.QuadPart = qword_140C0B708;
    if ( v6.QuadPart < qword_140C0B708 )
      v18 = v6;
    qword_140C0B708 = v18.QuadPart;
    v8.QuadPart = qword_140CF7AF8;
    if ( v6.QuadPart > qword_140CF7AF8 )
      v8 = v6;
    qword_140D18050 += v6.QuadPart;
    goto LABEL_8;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      qword_140CF7B88 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140CF7B58;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_140CF7B80 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140CF7B58;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v17 = v14 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            qword_140D18058 += v6.QuadPart;
        }
        else
        {
          qword_140CF7B48 = v6.QuadPart;
        }
      }
      else
      {
        v15.QuadPart = qword_140C0B710;
        if ( v6.QuadPart < qword_140C0B710 )
          v15 = v6;
        qword_140C0B710 = v15.QuadPart;
        v16.QuadPart = qword_140CF7B40;
        if ( v6.QuadPart > qword_140CF7B40 )
          v16 = v6;
        qword_140CF7B10 += v6.QuadPart;
        qword_140CF7B50 += v6.QuadPart;
        ++dword_140CF7B08;
        qword_140CF7B40 = v16.QuadPart;
      }
      return (LARGE_INTEGER)qword_140CF7B58;
    }
    qword_140CF7B10 += v6.QuadPart;
    qword_140CF7B28 = v6.QuadPart;
  }
  else
  {
    qword_140CF7B60 += v6.QuadPart;
    qword_140CF7B68 = v6.QuadPart;
  }
LABEL_9:
  qword_140CF7B50 += v6.QuadPart;
  return (LARGE_INTEGER)qword_140CF7B58;
}
