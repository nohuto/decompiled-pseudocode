/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180025D94
 * Callers:
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800263A8 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800264D4 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // r8d
  _QWORD *i; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *result; // rax

  v3 = *a1;
  if ( a1[4] )
    goto LABEL_9;
  v5 = *((unsigned int *)a1 + 10);
  if ( v5 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x18 )
      goto LABEL_13;
    v5 *= 24LL;
  }
  v6 = malloc(v5 + 8);
  if ( !v6 )
LABEL_13:
    ATL::AtlThrowImpl(-2147024882);
  v7 = a1[3];
  a1[3] = (__int64)v6;
  v8 = *((_DWORD *)a1 + 10);
  *v6 = v7;
  for ( i = &v6[2 * (v8 - 1) + 1 + (unsigned int)(v8 - 1)]; --v8 >= 0; i -= 3 )
  {
    *i = a1[4];
    a1[4] = (__int64)i;
  }
LABEL_9:
  v10 = (_QWORD *)a1[4];
  v11 = *v10;
  v10[2] = *a2;
  a1[4] = v11;
  v10[1] = 0LL;
  *v10 = v3;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = v10;
  else
    a1[1] = (__int64)v10;
  result = v10;
  *a1 = (__int64)v10;
  return result;
}
