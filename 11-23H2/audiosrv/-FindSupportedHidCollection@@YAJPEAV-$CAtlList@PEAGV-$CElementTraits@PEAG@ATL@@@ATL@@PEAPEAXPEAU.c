/*
 * XREFs of ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800FD9E4
 * Callers:
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800FDEB0 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     ?IsSupportedHidCollection@@YA_NPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800FDCA4 (-IsSupportedHidCollection@@YA_NPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FindSupportedHidCollection(
        _QWORD *a1,
        _QWORD *a2,
        struct _HIDP_CAPS *a3,
        struct _HIDP_PREPARSED_DATA **a4)
{
  unsigned int v7; // ebx
  _QWORD *v8; // r14
  struct _HIDP_PREPARSED_DATA *v9; // rdi
  const WCHAR *v10; // rcx
  HANDLE FileW; // rax
  void *v12; // rsi
  struct _HIDP_CAPS v14; // [rsp+40h] [rbp-68h] BYREF
  struct _HIDP_PREPARSED_DATA *v15; // [rsp+B0h] [rbp+8h] BYREF

  v7 = -2147023728;
  v8 = (_QWORD *)*a1;
  while ( v8 && v7 == -2147023728 )
  {
    v9 = 0LL;
    v15 = 0LL;
    v10 = (const WCHAR *)v8[2];
    v8 = (_QWORD *)*v8;
    FileW = CreateFileW(v10, 0xC0000000, 3u, 0LL, 3u, 0x40000000u, 0LL);
    v12 = FileW;
    if ( FileW != (HANDLE)-1LL )
    {
      if ( IsSupportedHidCollection(FileW, &v14, &v15) )
      {
        *a2 = v12;
        *a3 = v14;
        *a4 = v15;
        v7 = 0;
        goto LABEL_10;
      }
      v9 = v15;
    }
    v7 = -2147023728;
    if ( v12 != (void *)-1LL )
      CloseHandle(v12);
LABEL_10:
    if ( v9 )
      HidD_FreePreparsedData(v9);
  }
  return v7;
}
