/*
 * XREFs of ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0025910
 * Callers:
 *     NtUserGetIconInfo @ 0x1C00240A0 (NtUserGetIconInfo.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01505FC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C023E168 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025DC8 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

char __fastcall _InternalGetIconInfo(
        struct tagCURSOR *a1,
        struct _ICONINFO *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        bool a6)
{
  struct tagCURSOR *v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // r14d
  int v10; // edi
  unsigned int v11; // eax
  __int64 Bitmap; // r13
  __int64 DIBitmapReal; // rax
  int v14; // eax
  int v15; // eax
  struct _ICONINFO *v16; // rdi
  __int64 v17; // rcx
  struct _UNICODE_STRING *v18; // rdx
  struct tagCURSOR **v20; // rbx
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // r9d
  INT b; // [rsp+70h] [rbp-B8h] BYREF
  int v25[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+80h] [rbp-A8h]
  __int64 v27; // [rsp+88h] [rbp-A0h]
  __int64 v28; // [rsp+90h] [rbp-98h]
  struct _ICONINFO *v29; // [rsp+98h] [rbp-90h]
  PUNICODE_STRING DestinationString; // [rsp+A0h] [rbp-88h]
  unsigned int *v31; // [rsp+A8h] [rbp-80h]
  int v32; // [rsp+B8h] [rbp-70h]
  unsigned int v33; // [rsp+BCh] [rbp-6Ch]
  int v34; // [rsp+C0h] [rbp-68h]
  __int64 v35; // [rsp+C4h] [rbp-64h]
  int v36; // [rsp+CCh] [rbp-5Ch]
  __int64 v37; // [rsp+D0h] [rbp-58h]
  int v38; // [rsp+D8h] [rbp-50h]
  __int64 v39; // [rsp+DCh] [rbp-4Ch]

  DestinationString = a4;
  v29 = a2;
  v7 = a1;
  v31 = a5;
  v8 = 0LL;
  b = 0;
  v25[0] = 0;
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    v20 = (struct tagCURSOR **)*((_QWORD *)a1 + 12);
    if ( !v20 )
      return 0;
    v7 = *v20;
  }
  GetVirtualizedCursorSize(v7, &b, v25);
  v9 = b;
  b = b != *((_DWORD *)v7 + 35);
  if ( a6 || !*((_QWORD *)v7 + 12) )
  {
    v10 = v25[0];
    v11 = v25[0];
  }
  else
  {
    v10 = v25[0];
    v11 = v25[0] / 2;
  }
  Bitmap = GreCreateBitmap(v9, v11, 1LL, 1LL, 0LL);
  v26 = Bitmap;
  if ( !Bitmap )
    return 0;
  *(_QWORD *)v25 = 0LL;
  if ( *((_QWORD *)v7 + 12) )
  {
    if ( *((_DWORD *)v7 + 34) == 32 )
    {
      v37 = 0LL;
      v39 = 0LL;
      v32 = 40;
      v33 = v9;
      v34 = v10 / 2;
      v35 = 2097153LL;
      v36 = 0;
      v38 = 0;
      DIBitmapReal = GreCreateDIBitmapReal(*(HDC *)(gpDispInfo + 64LL), 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, 0LL);
    }
    else
    {
      DIBitmapReal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 64LL), 0LL, 0LL);
    }
    v8 = DIBitmapReal;
    *(_QWORD *)v25 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(Bitmap);
      return 0;
    }
  }
  v27 = GreSelectBitmap(ghdcMem2, *((_QWORD *)v7 + 11));
  v28 = GreSelectBitmap(ghdcMem, Bitmap);
  if ( b )
  {
    v21 = *((_QWORD *)v7 + 12);
    if ( !v21 || a6 )
      v22 = *((_DWORD *)v7 + 36);
    else
      v22 = *((_DWORD *)v7 + 36) >> 1;
    if ( !v21 || a6 )
      v23 = v10;
    else
      v23 = v10 / 2;
    GreStretchBltInternal(ghdcMem, 0, 0, v23, ghdcMem2, 0, 0, *((_DWORD *)v7 + 35), v22, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    if ( a6 || !*((_QWORD *)v7 + 12) )
      v14 = v10;
    else
      v14 = v10 / 2;
    NtGdiBitBltInternal(ghdcMem, 0, 0, v9, v14, ghdcMem2, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  if ( v8 )
  {
    GreSelectBitmap(ghdcMem2, *((_QWORD *)v7 + 12));
    GreSelectBitmap(ghdcMem, v8);
    v15 = v10 / 2;
    if ( b )
      GreStretchBltInternal(
        ghdcMem,
        0,
        0,
        v15,
        ghdcMem2,
        0,
        0,
        *((_DWORD *)v7 + 35),
        *((_DWORD *)v7 + 36) >> 1,
        13369376,
        0,
        0);
    else
      NtGdiBitBltInternal(ghdcMem, 0, 0, v9, v15, ghdcMem2, 0, 0, 13369376, 0, 0);
  }
  GreSelectBitmap(ghdcMem2, v27);
  GreSelectBitmap(ghdcMem, v28);
  v16 = v29;
  *(_DWORD *)v29 = *((_WORD *)v7 + 37) == 3;
  *((_DWORD *)v16 + 1) = EngMulDiv(*((__int16 *)v7 + 42), v9, *((_DWORD *)v7 + 35));
  *((_DWORD *)v16 + 2) = EngMulDiv(*((__int16 *)v7 + 43), v9, *((_DWORD *)v7 + 35));
  *((_QWORD *)v16 + 2) = v26;
  *((_QWORD *)v16 + 3) = v8;
  if ( a3 )
  {
    v17 = *((unsigned __int16 *)v7 + 36);
    if ( (_WORD)v17 )
      a3->Length = UserGetAtomName(v17, a3->Buffer, a3->MaximumLength >> 1);
    else
      a3->Length = 0;
  }
  if ( DestinationString )
  {
    v18 = (struct _UNICODE_STRING *)((char *)v7 + 56);
    if ( (*((_QWORD *)v7 + 8) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(DestinationString, v18);
    else
      *DestinationString = *v18;
  }
  if ( v31 )
    *v31 = *((_DWORD *)v7 + 34);
  return 1;
}
