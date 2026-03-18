/*
 * XREFs of ?IsOpaque@CCachedVisualImage@@UEBA_NXZ @ 0x1800E0854
 * Callers:
 *     ?IsOpaque@CCachedVisualImage@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011CA60 (-IsOpaque@CCachedVisualImage@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsOpaque@CCachedVisualImage@@$4PPPPPPPM@NA@EBA_NXZ @ 0x18011DCA0 (-IsOpaque@CCachedVisualImage@@$4PPPPPPPM@NA@EBA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCachedVisualImage::IsOpaque(CCachedVisualImage *this)
{
  char *v1; // rcx
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + *(int *)(*((_QWORD *)this - 218) + 8LL) - 1744;
  return *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))v1)(v1, v3) + 4) == 3;
}
