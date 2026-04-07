/*
 * XREFs of GetAnimationScenarioNameFromGUID @ 0x1800039A4
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800DB27C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001363C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800465A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

int __fastcall GetAnimationScenarioNameFromGUID(unsigned int *a1, unsigned __int16 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-58h]
  int v7; // [rsp+28h] [rbp-50h]
  int v8; // [rsp+30h] [rbp-48h]
  int v9; // [rsp+38h] [rbp-40h]
  int v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+68h] [rbp-10h]

  v3 = 0LL;
  while ( 1 )
  {
    v4 = *(_QWORD *)a1 - (_QWORD)*(&off_180141030 + 3 * v3 + 1);
    if ( *(wchar_t **)a1 == *(&off_180141030 + 3 * v3 + 1) )
      v4 = *((_QWORD *)a1 + 1) - (_QWORD)(&off_180141030)[3 * v3 + 1];
    if ( !v4 )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x54 )
    {
      v15 = *((unsigned __int8 *)a1 + 15);
      v14 = *((unsigned __int8 *)a1 + 14);
      v13 = *((unsigned __int8 *)a1 + 13);
      v12 = *((unsigned __int8 *)a1 + 12);
      v11 = *((unsigned __int8 *)a1 + 11);
      v10 = *((unsigned __int8 *)a1 + 10);
      v9 = *((unsigned __int8 *)a1 + 9);
      v8 = *((unsigned __int8 *)a1 + 8);
      v7 = *((unsigned __int16 *)a1 + 3);
      v6 = *((unsigned __int16 *)a1 + 2);
      return StringCchPrintfW(
               a2,
               0x40uLL,
               L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
               *a1,
               v6,
               v7,
               v8,
               v9,
               v10,
               v11,
               v12,
               v13,
               v14,
               v15);
    }
  }
  return StringCchCopyW(a2, 0x40uLL, (&off_180141030)[3 * v3]);
}
