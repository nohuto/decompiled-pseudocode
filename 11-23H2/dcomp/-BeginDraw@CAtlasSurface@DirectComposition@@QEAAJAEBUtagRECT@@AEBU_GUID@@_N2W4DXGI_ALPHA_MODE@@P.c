/*
 * XREFs of ?BeginDraw@CAtlasSurface@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2W4DXGI_ALPHA_MODE@@PEAUDCOMPOSITION_GUTTERS@@PEAPEAXPEAI6PEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x1800379E8
 * Callers:
 *     ?BeginDraw@CBitmapInfoBack@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAUDCOMPOSITION_GUTTERS@@PEAPEAXPEAI5@Z @ 0x180037864 (-BeginDraw@CBitmapInfoBack@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAUDCOMPOSITION_G.c)
 * Callees:
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurface::BeginDraw(
        DirectComposition::CAtlasSurface *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        char a4,
        bool a5,
        enum DXGI_ALPHA_MODE a6,
        struct DCOMPOSITION_GUTTERS *a7,
        void **a8,
        unsigned int *a9,
        unsigned int *a10,
        struct ID2D1Bitmap **a11,
        struct ID2D1DrawingStateBlock **a12)
{
  unsigned int v13; // edx
  const struct tagRECT *v15; // rsi
  int v16; // ecx
  LONG v17; // ebx
  LONG v18; // r15d
  int v19; // edx
  LONG v20; // edi
  LONG v21; // r11d
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  struct tagRECT v27; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v28[4]; // [rsp+78h] [rbp-11h] BYREF

  v13 = *((_DWORD *)this + 22);
  v15 = 0LL;
  v16 = *((_DWORD *)this + 18) + (v13 & 1);
  v17 = v16 + a2->left;
  v18 = v16 + a2->right;
  v19 = *((_DWORD *)this + 19) + ((v13 >> 2) & 1);
  v20 = v19 + a2->top;
  v21 = v19 + a2->bottom;
  *a9 = v17;
  v27.left = v17;
  v27.top = v20;
  v27.right = v18;
  v27.bottom = v21;
  *a10 = v20;
  if ( a4 )
  {
    v23 = *(_DWORD *)a7;
    v15 = (const struct tagRECT *)v28;
    v24 = (*(_DWORD *)a7 >> 2) & 1;
    v28[0] = v17 - (*(_DWORD *)a7 & 1);
    v28[1] = v20 - v24;
    v28[2] = v18 + ((v23 >> 1) & 1);
    v28[3] = v21 + ((v23 >> 3) & 1);
  }
  else if ( a7 )
  {
    v25 = *(_DWORD *)a7;
    v26 = (*(_DWORD *)a7 >> 2) & 1;
    v27.left = v17 - (*(_DWORD *)a7 & 1);
    v27.top = v20 - v26;
    v27.right = v18 + ((v25 >> 1) & 1);
    v27.bottom = v21 + ((v25 >> 3) & 1);
  }
  return DirectComposition::CAtlasSurfacePool::BeginDraw(
           *((DirectComposition::CAtlasSurfacePool **)this + 8),
           &v27,
           v15,
           a3,
           a5,
           a6,
           a8,
           a11,
           a12);
}
