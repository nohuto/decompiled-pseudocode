/*
 * XREFs of ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800E0040
 * Callers:
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800974D4 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DBB94 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall KeyframeSequence::Keyframe::~Keyframe(KeyframeSequence::Keyframe *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v3);
  }
}
