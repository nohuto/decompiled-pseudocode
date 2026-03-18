/*
 * XREFs of ??0CInteractionContextWrapper@@QEAA@XZ @ 0x18002BF74
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x18002BE80 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801F23C4 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x18002C098 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18002C0F8 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??0CInteractionContextTransformHelper@@QEAA@XZ @ 0x18002C14C (--0CInteractionContextTransformHelper@@QEAA@XZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::CInteractionContextWrapper(
        CInteractionContextWrapper *this)
{
  char v2; // al
  CInteractionContextWrapper *result; // rax

  *((_QWORD *)this + 27) = 1LL;
  *(_QWORD *)this = &CInteractionContextWrapper::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 53) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 31) = 1065353216LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *(_QWORD *)((char *)this + 268) = 1065353216LL;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *((_DWORD *)this + 71) = 0;
  *((_QWORD *)this + 36) = 1065353216LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 1065353216;
  v2 = *((_BYTE *)this + 313);
  *((_BYTE *)this + 312) = 85;
  *((_BYTE *)this + 313) = v2 & 0xC0 | 0x17;
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
