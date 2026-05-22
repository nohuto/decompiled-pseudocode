/*
 * XREFs of ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@AEAAJW4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E985C
 * Callers:
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E9960 (-GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MOD.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::GetD2DBitmap(
        DirectComposition::CAtlasSurfacePool *this,
        enum DXGI_ALPHA_MODE a2,
        struct ID2D1Bitmap1 **a3)
{
  int v3; // esi
  _QWORD *v6; // rdi
  __int64 v7; // rax
  int v8; // ecx
  _DWORD v10[6]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h]

  v3 = 0;
  if ( a2 == DXGI_ALPHA_MODE_PREMULTIPLIED )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8));
    *a3 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 8);
  }
  else
  {
    v6 = (_QWORD *)((char *)this + 72);
    if ( *((_QWORD *)this + 9) )
      goto LABEL_5;
    v10[0] = *((_DWORD *)this + 40);
    v7 = *((_QWORD *)this + 18);
    v10[1] = 3;
    v10[2] = 1119879168;
    v10[3] = 1119879168;
    v8 = -(*(_BYTE *)(*(_QWORD *)(v7 + 128) + 104LL) != 0);
    v11 = 0LL;
    v10[4] = (v8 & 2) + 1;
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD *))(**((_QWORD **)this + 11) + 96LL))(
           *((_QWORD *)this + 11),
           *((_QWORD *)this + 8),
           v10,
           v6);
    if ( v3 >= 0 )
    {
LABEL_5:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
      *a3 = (struct ID2D1Bitmap1 *)*v6;
    }
  }
  return (unsigned int)v3;
}
