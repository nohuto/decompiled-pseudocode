/*
 * XREFs of ?GetControllableSystemEffectsList@CSystemEffectWrapper@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z @ 0x140075950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetControllableSystemEffectsList(
        CSystemEffectWrapper *this,
        struct AUDIO_SYSTEMEFFECT **a2,
        unsigned int *a3,
        void *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct AUDIO_SYSTEMEFFECT **, unsigned int *, void *))(**((_QWORD **)this + 23)
                                                                                               + 32LL))(
         *((_QWORD *)this + 23),
         a2,
         a3,
         a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x284,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
