/*
 * XREFs of ?GetSurfaceData@CRedirectedGDISurface@@QEAAJPEAW4_RedirectGDISurfaceRedirStyle@@PEAI11PEAPEAXPEAU_LUID@@2PEAW4DXGI_FORMAT@@@Z @ 0x180060738
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18006051C (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRedirectedGDISurface::GetSurfaceData(
        CRedirectedGDISurface *this,
        enum _RedirectGDISurfaceRedirStyle *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        struct _LUID *a7,
        void **a8,
        enum DXGI_FORMAT *a9)
{
  __int64 v9; // rcx
  unsigned int v13; // ebx
  struct _LUID *v14; // rcx
  void *v16; // rax
  struct _LUID v17; // rax
  signed int LastError; // eax
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+40h] [rbp-10h]

  v9 = *((_QWORD *)this + 3);
  v19 = 0LL;
  v13 = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( (unsigned int)DwmGetSurfaceData(v9, &v19) )
  {
    *a3 = DWORD1(v19);
    *a4 = DWORD2(v19);
    *a5 = v20;
    if ( (_DWORD)v19 == 1 )
    {
      v16 = (void *)*((_QWORD *)&v21 + 1);
      *(_DWORD *)a2 = 1;
      *a6 = v16;
      v14 = a7;
      v17 = (struct _LUID)v21;
    }
    else
    {
      v14 = a7;
      if ( (_DWORD)v19 == 2 )
      {
        *(_DWORD *)a2 = 2;
        *a9 = DXGI_FORMAT_B8G8R8A8_UNORM;
        *a6 = 0LL;
        *a7 = (struct _LUID)v21;
        *a8 = (void *)*((_QWORD *)&v21 + 1);
        return v13;
      }
      *(_DWORD *)a2 = 0;
      *a6 = 0LL;
      v17 = g_luidZero;
    }
    *v14 = v17;
    *a8 = 0LL;
    return v13;
  }
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *(_DWORD *)a2 = 0;
  *a6 = 0LL;
  *a7 = g_luidZero;
  *a8 = 0LL;
  LastError = GetLastError();
  if ( LastError > 0 )
    return (unsigned __int16)LastError | 0x80070000;
  else
    return (unsigned int)LastError;
}
