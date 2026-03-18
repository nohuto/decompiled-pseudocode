/*
 * XREFs of ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x180263E78
 * Callers:
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x18021F528 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Create(struct CPayloadedAnimationPrimitiveBuffer **a1)
{
  unsigned int v2; // edi
  struct CPayloadedAnimationPrimitiveBuffer *v3; // rax
  __int64 v4; // rcx
  struct CPayloadedAnimationPrimitiveBuffer *v5; // rbx

  v2 = 0;
  v3 = (struct CPayloadedAnimationPrimitiveBuffer *)operator new(0x30uLL);
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 2) = 0;
    *(_QWORD *)v3 = &CPayloadedAnimationPrimitiveBuffer::`vftable';
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_DWORD *)v3 + 8) = 0;
    *((_DWORD *)v3 + 9) = 0;
    *((_DWORD *)v3 + 10) = 0;
    ((void (__fastcall *)(struct CPayloadedAnimationPrimitiveBuffer *))CPayloadedAnimationPrimitiveBuffer::`vftable')(v3);
    *a1 = v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0xDu, 0LL);
  }
  return v2;
}
