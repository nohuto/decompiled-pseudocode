/*
 * XREFs of ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180020FBC
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180020D10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x180020F60 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18028FB00 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x180021114 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CD2DBitmap::TryFastWarpLock(
        CD2DBitmap *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4,
        struct IUnknown **a5)
{
  struct IUnknown **v5; // r13
  char *v6; // rbx
  __int64 v11; // rax
  char *v12; // r14
  char *v13; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx
  struct ID3D11Texture2D *v17; // rdi
  char *v18; // rcx
  struct CD3DDevice *v19; // rax
  int v20; // eax
  __m128i v21; // xmm0
  unsigned int v22; // ecx
  int v23; // eax
  struct IUnknown **v24; // rcx

  v5 = a5;
  v6 = (char *)this + 244;
  *a2 = 0LL;
  *a3 = 0;
  *v5 = 0LL;
  *a4 = 0;
  if ( !*((_BYTE *)this + 245) || *v6 )
  {
    v11 = *((_QWORD *)this + 2);
    v12 = (char *)this + 244;
    *((_BYTE *)this + 245) = 1;
    *v6 = 0;
    v13 = (char *)this + *(int *)(v11 + 8) + 16;
    if ( *(_QWORD *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))(v13) + 568) )
    {
      v15 = *((_QWORD *)this + 2);
      v16 = *((_DWORD *)this + 60);
      a5 = 0LL;
      v17 = (struct ID3D11Texture2D *)*((_QWORD *)this + 15);
      v18 = (char *)this + *(int *)(v15 + 8) + 16;
      v19 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18);
      if ( CWarpLockSubresource::Create(v19, v17, v16, (struct CWarpLockSubresource **)&a5) < 0 )
      {
        v24 = a5;
      }
      else
      {
        v20 = *((_DWORD *)this + 39);
        v21 = *(__m128i *)(a5 + 5);
        *v5 = (struct IUnknown *)a5;
        *v12 = 1;
        *a2 = (unsigned __int8 *)v21.m128i_i64[0];
        v22 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
        v23 = v22 * v20;
        *a3 = v22;
        v24 = 0LL;
        *a4 = v23;
      }
      v6 = v12;
      if ( v24 )
        CMILRefCountBaseT<IUnknown>::InternalRelease(v24);
    }
  }
  return *v6;
}
