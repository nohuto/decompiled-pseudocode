/*
 * XREFs of ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C0081688
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0081210 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C008176C (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 */

struct tagWND *__fastcall TrackZorder(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        HWND *a5,
        HWND *a6)
{
  struct tagWND *result; // rax
  struct tagWND *v11; // rdi
  struct tagWND *v12; // rax

  result = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)a1);
  v11 = result;
  if ( result )
  {
    if ( *a6 )
      v12 = (struct tagWND *)_HMObjectFromHandle(*a6);
    else
      v12 = 0LL;
    if ( TrackBackground(a1, v11, a2, a3, a4, v12) )
    {
      *a6 = *(HWND *)a1;
    }
    else
    {
      if ( ((*(_BYTE *)(*((_QWORD *)v11 + 5) + 19LL) & 4 ^ (*(unsigned __int8 *)(*((_QWORD *)v11 + 5) + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
        a5 = a6;
      if ( *a5 )
        *((_QWORD *)a1 + 1) = *a5;
      *a5 = *(HWND *)a1;
    }
    return v11;
  }
  return result;
}
