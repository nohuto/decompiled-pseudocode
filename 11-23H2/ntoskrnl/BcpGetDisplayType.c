/*
 * XREFs of BcpGetDisplayType @ 0x1406731F0
 * Callers:
 *     BgpDisplaySafeToPowerOffScreen @ 0x140673394 (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140673458 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140673614 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpGetDisplayType(_DWORD *a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 18LL; i < 90; i += 18LL )
  {
    if ( *a1 < dword_140C0B5A0[i + 16] )
      break;
    if ( a1[1] < dword_140C0B5A0[i + 17] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
