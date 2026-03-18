/*
 * XREFs of ??0CInteractionContextWrapper@@QEAA@XZ @ 0x180039BA8
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x180039A90 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18020C1A4 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x180039C78 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??0CInteractionContextTransformHelper@@QEAA@XZ @ 0x180039CCC (--0CInteractionContextTransformHelper@@QEAA@XZ.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x180039DD0 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DBE0 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::CInteractionContextWrapper(
        CInteractionContextWrapper *this)
{
  CInteractionContextWrapper *result; // rax

  *((_QWORD *)this + 27) = 1LL;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CInteractionContextWrapper::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 53) = 0;
  *((_QWORD *)this + 28) = 0LL;
  CMILMatrix::SetToIdentity((CInteractionContextWrapper *)((char *)this + 248));
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 80) = 16843008;
  CInteractionContextTransformHelper::CInteractionContextTransformHelper((CInteractionContextWrapper *)((char *)this + 328));
  *((_BYTE *)this + 528) = 0;
  *((_DWORD *)this + 138) = 0;
  *((_BYTE *)this + 556) = 0;
  *((_QWORD *)this + 68) = (char *)this + 536;
  *((_QWORD *)this + 67) = (char *)this + 536;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 14);
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CInteractionContextWrapper *)((char *)this + 616));
  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0);
  result = this;
  *((_BYTE *)this + 84) = 0;
  *((_BYTE *)this + 148) = 0;
  return result;
}
