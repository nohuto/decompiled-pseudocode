/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C0020688
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C001F230 (NtUserSetLayeredWindowAttributes.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 * Callees:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     UpdateSprite @ 0x1C0020D60 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C0049330 (GetRedirectionBitmap.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetRedirectionFlags @ 0x1C0090390 (GetRedirectionFlags.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, int a2, char a3, int a4)
{
  bool v8; // r14
  int v9; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // esi
  unsigned int v14; // edi
  __int64 v15; // rax
  _DWORD *v16; // r8
  __int64 v17; // rbx
  __int16 v18; // [rsp+60h] [rbp+7h] BYREF
  char v19; // [rsp+62h] [rbp+9h]
  char v20; // [rsp+63h] [rbp+Ah]
  _DWORD v21[2]; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v23; // [rsp+78h] [rbp+1Fh] BYREF

  v8 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = *((_DWORD *)a1 + 80);
    if ( (v9 & 0x8000) != 0 )
      *((_DWORD *)a1 + 80) = v9 & 0xFFFF7FFF;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
  {
    UserSetLastError(87LL);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags(a1) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1, a4 & 0x10 | 1u);
    if ( (int)result < 0 )
      return result;
    v8 = RedirectionBitmap == 0;
  }
  v18 = 0;
  v13 = a4 & 0xDFFFFFEF | 0x20000000;
  v20 = 0;
  v19 = a3;
  if ( RedirectionBitmap )
  {
    v21[0] = 0;
    v21[1] = 0;
    v23 = 0LL;
    v15 = GreSelectBitmap(ghdcMem, RedirectionBitmap);
    v16 = (_DWORD *)*((_QWORD *)a1 + 5);
    v17 = v15;
    v22[0] = v16[24] - v16[22];
    v22[1] = v16[25] - v16[23];
    v14 = ((__int64 (__fastcall *)(_QWORD, struct tagWND *, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _DWORD *, int, __int16 *, unsigned int, unsigned __int64))UpdateSprite)(
            *(_QWORD *)(gpDispInfo + 40LL),
            a1,
            ghdcMem,
            0LL,
            0LL,
            v22,
            ghdcMem,
            v21,
            a2,
            &v18,
            v13,
            (unsigned __int64)&v23 & -(__int64)v8);
    GreSelectBitmap(ghdcMem, v17);
  }
  else
  {
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, struct tagWND *, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, __int16 *, unsigned int, _QWORD))UpdateSprite)(
                           *(_QWORD *)(gpDispInfo + 40LL),
                           a1,
                           v12,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           a2,
                           &v18,
                           v13,
                           0LL);
  }
  return v14;
}
