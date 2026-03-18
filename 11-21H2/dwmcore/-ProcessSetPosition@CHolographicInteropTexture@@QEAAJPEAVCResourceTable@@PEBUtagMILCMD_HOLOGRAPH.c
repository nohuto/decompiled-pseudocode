/*
 * XREFs of ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x18029BD04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x18029A858 (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x18029BF08 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::ProcessSetPosition(
        CHolographicInteropTexture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION *a3)
{
  unsigned int *v3; // r15
  unsigned int v5; // esi
  unsigned int *v6; // r14
  unsigned int v7; // r12d
  RTL_SRWLOCK *v8; // rbx
  char v10; // al

  v3 = (unsigned int *)((char *)this + 252);
  v5 = *((_DWORD *)this + 63);
  v6 = (unsigned int *)((char *)this + 256);
  v7 = *((_DWORD *)this + 64);
  v8 = (RTL_SRWLOCK *)((char *)this + 408);
  AcquireSRWLockExclusive((PSRWLOCK)this + 51);
  *v3 = *((_DWORD *)a3 + 2);
  *v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 65) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 66) = *((_DWORD *)a3 + 5);
  **((_DWORD **)this + 42) = 0;
  *((_BYTE *)this + 240) = 1;
  ReleaseSRWLockExclusive(v8);
  if ( __PAIR64__(*v6, v5) != __PAIR64__(v7, *v3) )
  {
    CompositorTracing::DwmHolographicInteropTextureSizeChanged<unsigned int &,unsigned int &,unsigned int &>(
      (unsigned int *)this + 56,
      v3,
      v6);
    CHolographicInteropTexture::ReleaseResources(this);
  }
  *((_DWORD *)this + 67) = 1065353216;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 1065353216LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *(_QWORD *)((char *)this + 308) = 1065353216LL;
  *(_QWORD *)((char *)this + 316) = 0LL;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 82) = 1065353216;
  v10 = *((_BYTE *)this + 333) & 0xD7;
  *((_BYTE *)this + 332) = 85;
  *((_BYTE *)this + 333) = v10 | 0x17;
  CMILMatrix::Translate(
    (CHolographicInteropTexture *)((char *)this + 268),
    (float)-*((_DWORD *)this + 65),
    (float)-*((_DWORD *)this + 66));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 120LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
    0LL,
    0x8000LL);
  return 0LL;
}
