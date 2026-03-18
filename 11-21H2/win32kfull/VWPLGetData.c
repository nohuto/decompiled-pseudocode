/*
 * XREFs of VWPLGetData @ 0x1C00A76BC
 * Callers:
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00A767C (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C0116B70 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0116C88 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLGetData(_DWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // ecx
  _QWORD *v7; // r8
  __int64 result; // rax

  v3 = 0;
  if ( a1 )
  {
    v6 = *a1;
    if ( v6 )
    {
      v7 = a1 + 6;
      while ( a2 != *v7 )
      {
        ++v3;
        v7 += 2;
        if ( v3 >= v6 )
          goto LABEL_6;
      }
      goto LABEL_7;
    }
LABEL_6:
    if ( v3 < v6 )
    {
LABEL_7:
      result = 1LL;
      *a3 = *(_QWORD *)&a1[4 * v3 + 4];
      return result;
    }
  }
  return 0LL;
}
