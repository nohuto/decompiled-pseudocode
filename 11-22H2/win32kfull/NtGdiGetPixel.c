/*
 * XREFs of NtGdiGetPixel @ 0x1C0005580
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00058C8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C001DEC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001DF10 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00DC274 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0101D80 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, int a2, int a3)
{
  DC *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  struct REGION *v8; // rax
  int IsCMYKColor; // esi
  Gre::Base *v10; // rcx
  __int64 v11; // rbx
  struct Gre::Base::SESSION_GLOBALS *v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  char v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+74h] [rbp-8Ch]
  _DWORD v20[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  DC *v24[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v25[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v26[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v27[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v28; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v29[64]; // [rsp+110h] [rbp+10h] BYREF
  struct _POINTL v30[2]; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v31[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v32[4]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v33[52]; // [rsp+174h] [rbp+74h] BYREF
  __int64 v34; // [rsp+1A8h] [rbp+A8h]
  __int64 v35; // [rsp+1C0h] [rbp+C0h]
  int v36; // [rsp+1C8h] [rbp+C8h]
  int v37; // [rsp+1F0h] [rbp+F0h]
  __int64 v38; // [rsp+200h] [rbp+100h]

  v16 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  v5 = v24[0];
  if ( v24[0] )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v24, a2, a3, 1, 1);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v27);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v27, (struct XDCOBJ *)v24, 0) )
    {
      v6 = *((_QWORD *)v24[0] + 62);
      if ( v6 )
      {
        if ( (unsigned int)SrcSurfaceAccessCheck(*((struct SURFACE **)v24[0] + 62)) )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v26, (struct XDCOBJ *)v24, 0x204u);
          v30[0].x = a2;
          v30[0].y = a3;
          EXFORMOBJ::bXform((EXFORMOBJ *)v26, v30, 1uLL);
          v7 = *((_DWORD *)v24[0] + 10) & 1LL;
          v31[0] = v30[0].x + *((_DWORD *)v24[0] + 2 * v7 + 254);
          v31[2] = *((_DWORD *)v24[0] + 2 * v7 + 254) + v30[0].x + 1;
          v31[1] = v30[0].y + *((_DWORD *)v24[0] + 2 * v7 + 255);
          v31[3] = *((_DWORD *)v24[0] + 2 * v7 + 255) + v30[0].y + 1;
          v8 = XDCOBJ::prgnEffRao((XDCOBJ *)v24);
          v34 = 0LL;
          v35 = 0LL;
          v36 = 0;
          v37 = 1;
          v38 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v32, v8, (struct ERECTL *)v31, 0);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v33) )
          {
            v16 = 0;
            IsCMYKColor = DC::bIsCMYKColor(v24[0]);
            v20[0] = *(_DWORD *)(v6 + 96);
            v21 = 1LL;
            v23 = 1LL;
            v20[1] = 1;
            v22 = 0LL;
            *(_OWORD *)&v30[0].x = 0LL;
            if ( v20[0] == 1 )
            {
              v30[0].x = 7;
              v30[1].x = 8;
            }
            else if ( v20[0] == 2 )
            {
              v30[0].x = 1;
              v30[1].x = 2;
            }
            else
            {
              v30[1].x = 1;
            }
            v17 = 0LL;
            v18 = 0;
            v19 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v17, (struct _DEVBITMAPINFO *)v20, &v16, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v11 = *(_QWORD *)(v6 + 48);
              v30[0].y = 0;
              v30[1].y = 1;
              v12 = Gre::Base::Globals(v10);
              v13 = (*(_DWORD *)(v6 + 112) & 0x400) != 0
                  ? (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, struct _POINTL *, _DWORD *))(v11 + 2816))(
                      (v17 + 24) & -(__int64)(v17 != 0),
                      v6 + 24,
                      0LL,
                      (__int64)v12 + 6896,
                      v30,
                      v31)
                  : ((__int64 (__fastcall *)(__int64, __int64, _QWORD, char *, struct _POINTL *, _DWORD *))EngCopyBits)(
                      (v17 + 24) & -(__int64)(v17 != 0),
                      v6 + 24,
                      0LL,
                      (char *)v12 + 6896,
                      v30,
                      v31);
              if ( v13 && !IsCMYKColor )
                v16 = ulIndexToRGB(*(_QWORD *)(v6 + 128), *((_QWORD *)v24[0] + 11), v16);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v17);
          }
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v27);
    if ( v28 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v28);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v29);
    v5 = v24[0];
  }
  v14 = v16;
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v24);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
  return v14;
}
