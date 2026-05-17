/*
 * XREFs of LdrpGetMUILangConfigNode @ 0x1800AE1C6
 * Callers:
 *     RtlpTraverseParents @ 0x180003FD0 (RtlpTraverseParents.c)
 * Callees:
 *     RtlpMuiRegGetLanginfoTypeNSpec @ 0x1800AE44E (RtlpMuiRegGetLanginfoTypeNSpec.c)
 *     RtlpCompareConfigNodeWithSpec @ 0x1800FAD38 (RtlpCompareConfigNodeWithSpec.c)
 */

__int64 __fastcall LdrpGetMUILangConfigNode(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r11
  int v9; // ebp
  __int16 v10; // di
  __int64 v11; // r15
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 v13; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  *a4 = -1;
  if ( (int)RtlpMuiRegGetLanginfoTypeNSpec(a1, v12, &v13) < 0 )
    return 3221225701LL;
  v9 = *(unsigned __int16 *)(v7 + 4);
  v10 = 0;
  if ( *(_WORD *)(v7 + 4) )
  {
    v11 = *(_QWORD *)(v7 + 8);
    while ( !(unsigned __int8)RtlpCompareConfigNodeWithSpec(a2, v12[0], v13, v11 + 12LL * v10) )
    {
      if ( ++v10 >= v9 )
        goto LABEL_12;
    }
    *a4 = v10;
  }
LABEL_12:
  if ( *a4 == 0xFFFF )
    return (unsigned int)-1073741811;
  return v4;
}
