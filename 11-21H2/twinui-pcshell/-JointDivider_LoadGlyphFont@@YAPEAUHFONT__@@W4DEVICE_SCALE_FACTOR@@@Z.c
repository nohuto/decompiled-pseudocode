/*
 * XREFs of ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18052CE70
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1805218D0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?EnsureWindow@JointDivider@@AEAAJXZ @ 0x180521C4C (-EnsureWindow@JointDivider@@AEAAJXZ.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x18052CF9C (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 */

HFONT __fastcall JointDivider_LoadGlyphFont(enum DEVICE_SCALE_FACTOR a1)
{
  __int64 v2; // rdx
  WCHAR *lfFaceName; // rcx
  WCHAR v4; // ax
  WCHAR *v5; // rax
  __int32 v6; // ecx
  LOGFONTW lf; // [rsp+20h] [rbp-78h] BYREF

  if ( dword_1807B7548 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1807B7548);
    if ( dword_1807B7548 == -1 )
    {
      dword_1807B754C = IsPPIEdition() ? 22 : 16;
      Init_thread_footer(&dword_1807B7548);
    }
  }
  memset_0(&lf, 0, sizeof(lf));
  v2 = 32LL;
  lfFaceName = lf.lfFaceName;
  do
  {
    if ( v2 == -2147483614 )
      break;
    v4 = *(WCHAR *)((char *)lfFaceName + (char *)L"Segoe MDL2 Assets" - (char *)lf.lfFaceName);
    if ( !v4 )
      break;
    *lfFaceName++ = v4;
    --v2;
  }
  while ( v2 );
  v5 = lfFaceName - 1;
  if ( v2 )
    v5 = lfFaceName;
  v6 = a1 * dword_1807B754C;
  *v5 = 0;
  lf.lfWeight = 350;
  lf.lfHeight = v6 / -100;
  return CreateFontIndirectW(&lf);
}
