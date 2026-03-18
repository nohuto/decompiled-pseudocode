/*
 * XREFs of ??$make_unique@VCComposeTop@@$$V$0A@@std@@YA?AV?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@0@XZ @ 0x18001D5E0
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18001D538 (-AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<CComposeTop,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = operator new(0xA8uLL);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    CMILMatrix::SetToIdentity((CMILMatrix *)(v2 + 3));
    CMILMatrix::SetToIdentity((CMILMatrix *)(v3 + 92));
    *(_QWORD *)(v4 + 160) = v5;
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4;
  return a1;
}
