/*
 * XREFs of ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x1801DFBBC
 * Callers:
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801DF7EC (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

const void *__fastcall CDirectFlipInfo::UpdateHDRMetaData(CDirectFlipInfo *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // xmm1_8
  const void *result; // rax
  int v6; // ecx
  __int128 Buf2; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]

  v2 = *((_QWORD *)this + 2);
  Buf2 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v3 = (*(unsigned __int8 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 384LL))(v2, &Buf2) != 0;
  if ( *((_DWORD *)this + 18) == v3 && (v3 != 1 || !memcmp_0((char *)this + 76, &Buf2, 0x1CuLL)) )
    return 0LL;
  v4 = v8;
  result = (char *)this + 76;
  v6 = v9;
  *((_DWORD *)this + 18) = v3;
  *(_OWORD *)((char *)this + 76) = Buf2;
  *(_QWORD *)((char *)this + 92) = v4;
  *((_DWORD *)this + 25) = v6;
  if ( v3 != 1 )
    return 0LL;
  return result;
}
