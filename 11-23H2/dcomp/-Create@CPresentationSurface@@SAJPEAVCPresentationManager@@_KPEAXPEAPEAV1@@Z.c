/*
 * XREFs of ?Create@CPresentationSurface@@SAJPEAVCPresentationManager@@_KPEAXPEAPEAV1@@Z @ 0x1801AFE0C
 * Callers:
 *     ?CreatePresentationSurface@CPresentationManager@@UEAAJPEAXPEAPEAUIPresentationSurface@@@Z @ 0x1801AD590 (-CreatePresentationSurface@CPresentationManager@@UEAAJPEAXPEAPEAUIPresentationSurface@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CPresentationSurface@@IEAA@PEAVCPresentationManager@@_K@Z @ 0x1801AFB6C (--0CPresentationSurface@@IEAA@PEAVCPresentationManager@@_K@Z.c)
 *     ?Initialize@CPresentationSurface@@IEAAJPEAX@Z @ 0x1801AFF4C (-Initialize@CPresentationSurface@@IEAAJPEAX@Z.c)
 */

__int64 __fastcall CPresentationSurface::Create(
        struct CPresentationManager *a1,
        __int64 a2,
        void *a3,
        struct CPresentationSurface **a4)
{
  CPresentationSurface *v8; // rax
  CPresentationSurface *v9; // rax
  CPresentationSurface *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edx
  int v14; // ecx
  CPresentationSurface *v16; // [rsp+20h] [rbp-18h] BYREF

  v8 = (CPresentationSurface *)operator new(0xB8uLL);
  if ( !v8 )
  {
    v16 = 0LL;
    goto LABEL_7;
  }
  v9 = CPresentationSurface::CPresentationSurface(v8, a1, a2);
  v16 = v9;
  v10 = v9;
  if ( !v9 )
  {
LABEL_7:
    v12 = -2147024882;
    v13 = 19;
    v14 = -2147024882;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CPresentationSurface *))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = CPresentationSurface::Initialize(v10, a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 22;
    v14 = v11;
LABEL_8:
    DoStackCaptureDirect(v14, v13);
    goto LABEL_9;
  }
  v16 = 0LL;
  *a4 = v10;
LABEL_9:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v16);
  return v12;
}
