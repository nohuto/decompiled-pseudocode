/*
 * XREFs of RtlStringCbCopyW @ 0x180013F48
 * Callers:
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlGetVersion @ 0x18002F7F0 (RtlGetVersion.c)
 *     SwitchedRtlGetVersion @ 0x18004A378 (SwitchedRtlGetVersion.c)
 *     RtlCreateTagHeap @ 0x18007F9F0 (RtlCreateTagHeap.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800859D0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlInstallFunctionTableCallback @ 0x18008C840 (RtlInstallFunctionTableCallback.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E2370 (RtlQueryProcessHeapInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyW(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  __int64 v5; // r10
  __int16 v6; // ax
  _WORD *v7; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    v4 = 2147483646 - v3;
    v5 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v4 + v3) )
        break;
      v6 = *(_WORD *)((char *)a1 + v5);
      if ( !v6 )
        break;
      *a1++ = v6;
      --v3;
    }
    while ( v3 );
    v7 = a1 - 1;
    if ( v3 )
      v7 = a1;
    *v7 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  return result;
}
