/*
 * XREFs of ?SetAudioSystemEffectStateRemote@CSystemEffectWrapper@@UEAAJU_GUID@@H@Z @ 0x14006D800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemEffectWrapper::SetAudioSystemEffectStateRemote(
        CSystemEffectWrapper *this,
        struct _GUID *a2,
        int a3)
{
  __int64 *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (__int64 *)*((_QWORD *)this + 13);
  if ( !v3 )
  {
    v4 = -2147467263;
    v5 = 826LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *v3;
  v8 = (__int128)*a2;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, bool))(v7 + 40))(v3, &v8, a3 != 0);
  if ( v4 < 0 )
  {
    v5 = 827LL;
    goto LABEL_3;
  }
  return 0LL;
}
