/*
 * XREFs of ?ApplicationViewTitleEnum@@YAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x1805E9370
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 */

__int64 __fastcall ApplicationViewTitleEnum(HWND a1, const wchar_t *a2, HANDLE a3, __int64 a4)
{
  unsigned int v5; // ebx
  wchar_t *v6; // rsi

  v5 = 1;
  if ( (unsigned __int64)a2 >= 0xC000 )
  {
    v6 = (wchar_t *)(a4 + 8);
    if ( !StrCmpNIW((PCWSTR)(a4 + 8), a2, *(_DWORD *)a4) )
    {
      StringCchCopyW(v6, 255LL, a2);
      return 0;
    }
  }
  return v5;
}
