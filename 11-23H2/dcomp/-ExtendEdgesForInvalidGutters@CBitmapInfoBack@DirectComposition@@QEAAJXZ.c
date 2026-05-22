/*
 * XREFs of ?ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ @ 0x180027B98
 * Callers:
 *     ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970 (-Flush@CDevice@DirectComposition@@UEAAJXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ @ 0x1800EA72C (-CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ.c)
 *     ?Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ @ 0x1800FB920 (-Flush@CSurfaceFactory@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?EnqueueGutterExtension@CAtlasSurface@DirectComposition@@QEAAJPEAUGutterExtension@2@@Z @ 0x180027E74 (-EnqueueGutterExtension@CAtlasSurface@DirectComposition@@QEAAJPEAUGutterExtension@2@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoBack::ExtendEdgesForInvalidGutters(
        DirectComposition::CBitmapInfoBack *this)
{
  int v2; // ecx
  int v3; // edx
  DirectComposition::CAtlasSurface *v5; // r8
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  DirectComposition::CAtlasSurface *v9; // r9
  int v10; // edx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  DirectComposition::CAtlasSurface *v18; // r8
  int v19; // ebx
  DirectComposition::CAtlasSurface *v20; // rcx
  DirectComposition::CAtlasSurface *v21; // rcx
  DirectComposition::CAtlasSurface *v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-28h] BYREF
  int v24; // [rsp+30h] [rbp-20h]
  char v25; // [rsp+34h] [rbp-1Ch]
  unsigned __int64 v26; // [rsp+38h] [rbp-18h]

  v2 = 0;
  v3 = *((_DWORD *)this + 26);
  if ( v3 != 0x7FFFFFFF
    || *((_DWORD *)this + 28) != 0x7FFFFFFF
    || *((_DWORD *)this + 30) != 0x7FFFFFFF
    || *((_DWORD *)this + 32) != 0x7FFFFFFF )
  {
    v5 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2);
    v6 = *((_QWORD *)v5 + 10);
    if ( v3 != 0x7FFFFFFF )
    {
      v7 = *((_DWORD *)this + 27) - v3;
      HIDWORD(v23) = *((_DWORD *)this + 26);
      v24 = v7;
      LODWORD(v23) = 0;
      v25 = 1;
      v26 = 0xFFFFFFFFLL;
      v8 = DirectComposition::CAtlasSurface::EnqueueGutterExtension(
             v5,
             (struct DirectComposition::GutterExtension *)&v23);
      v5 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2);
      v2 = v8;
    }
    v9 = v5;
    if ( v2 >= 0 )
    {
      v10 = *((_DWORD *)this + 30);
      if ( v10 == 0x7FFFFFFF )
        goto LABEL_11;
      HIDWORD(v23) = *((_DWORD *)this + 30);
      LODWORD(v23) = v6 - 1;
      v11 = *((_DWORD *)this + 31) - v10;
      v25 = 1;
      v24 = v11;
      v26 = 1LL;
      v12 = DirectComposition::CAtlasSurface::EnqueueGutterExtension(
              v5,
              (struct DirectComposition::GutterExtension *)&v23);
      v9 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2);
      v2 = v12;
      if ( v12 >= 0 )
      {
LABEL_11:
        v13 = *((_DWORD *)this + 28);
        if ( v13 == 0x7FFFFFFF )
          goto LABEL_39;
        v14 = *((_DWORD *)this + 29) - v13;
        v23 = v13;
        v24 = v14;
        v25 = 0;
        v26 = 0xFFFFFFFF00000000uLL;
        v15 = DirectComposition::CAtlasSurface::EnqueueGutterExtension(
                v9,
                (struct DirectComposition::GutterExtension *)&v23);
        v9 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2);
        v2 = v15;
        if ( v15 >= 0 )
        {
LABEL_39:
          v16 = *((_DWORD *)this + 32);
          if ( v16 != 0x7FFFFFFF )
          {
            LODWORD(v23) = *((_DWORD *)this + 32);
            HIDWORD(v23) = HIDWORD(v6) - 1;
            v17 = *((_DWORD *)this + 33) - v16;
            v25 = 0;
            v24 = v17;
            v26 = 0x100000000LL;
            v2 = DirectComposition::CAtlasSurface::EnqueueGutterExtension(
                   v9,
                   (struct DirectComposition::GutterExtension *)&v23);
          }
        }
      }
    }
    v18 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2);
    v19 = *((_DWORD *)v18 + 22);
    if ( v2 >= 0 )
    {
      if ( (v19 & 5) != 5
        || *((_DWORD *)this + 28) && *((_DWORD *)this + 26)
        || (v23 = 0LL,
            v26 = -1LL,
            v24 = 1,
            v25 = 0,
            v2 = DirectComposition::CAtlasSurface::EnqueueGutterExtension(
                   v18,
                   (struct DirectComposition::GutterExtension *)&v23),
            v2 >= 0) )
      {
        if ( (v19 & 6) != 6
          || *((_DWORD *)this + 29) != (_DWORD)v6 && *((_DWORD *)this + 30)
          || (v20 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2),
              v23 = (unsigned int)(v6 - 1),
              v24 = 1,
              v25 = 0,
              v26 = 0xFFFFFFFF00000001uLL,
              v2 = DirectComposition::CAtlasSurface::EnqueueGutterExtension(
                     v20,
                     (struct DirectComposition::GutterExtension *)&v23),
              v2 >= 0) )
        {
          if ( (v19 & 9) != 9
            || *((_DWORD *)this + 32) && *((_DWORD *)this + 27) != HIDWORD(v6)
            || (v21 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2),
                v26 = 0x1FFFFFFFFLL,
                HIDWORD(v23) = HIDWORD(v6) - 1,
                LODWORD(v23) = 0,
                v24 = 1,
                v25 = 0,
                v2 = DirectComposition::CAtlasSurface::EnqueueGutterExtension(
                       v21,
                       (struct DirectComposition::GutterExtension *)&v23),
                v2 >= 0) )
          {
            if ( (v19 & 0xA) != 0xA
              || *((_DWORD *)this + 33) != (_DWORD)v6 && *((_DWORD *)this + 31) != HIDWORD(v6)
              || (v22 = (DirectComposition::CAtlasSurface *)*((_QWORD *)this + 2),
                  LODWORD(v23) = v6 - 1,
                  v24 = 1,
                  HIDWORD(v23) = HIDWORD(v6) - 1,
                  v25 = 0,
                  v26 = 0x100000001LL,
                  v2 = DirectComposition::CAtlasSurface::EnqueueGutterExtension(
                         v22,
                         (struct DirectComposition::GutterExtension *)&v23),
                  v2 >= 0) )
            {
              *((_DWORD *)this + 32) = 0x7FFFFFFF;
              *((_DWORD *)this + 33) = 0x80000000;
              *((_DWORD *)this + 31) = 0x80000000;
              *((_DWORD *)this + 29) = 0x80000000;
              *((_DWORD *)this + 27) = 0x80000000;
              *((_DWORD *)this + 30) = 0x7FFFFFFF;
              *((_DWORD *)this + 28) = 0x7FFFFFFF;
              *((_DWORD *)this + 26) = 0x7FFFFFFF;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
