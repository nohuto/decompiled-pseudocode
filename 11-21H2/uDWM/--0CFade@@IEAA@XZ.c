/*
 * XREFs of ??0CFade@@IEAA@XZ @ 0x1800D44E8
 * Callers:
 *     ??0CFadeIn@@QEAA@XZ @ 0x1800D4518 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x1800D4548 (--0CFadeOut@@QEAA@XZ.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800D506C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x1800D4768 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CFade *__fastcall CFade::CFade(CFade *this)
{
  CFade *v1; // rcx
  CFade *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CFade::`vftable'{for `CBaseObject'};
  return result;
}
