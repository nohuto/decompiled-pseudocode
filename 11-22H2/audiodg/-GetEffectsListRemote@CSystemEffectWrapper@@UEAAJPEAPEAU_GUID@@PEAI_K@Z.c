/*
 * XREFs of ?GetEffectsListRemote@CSystemEffectWrapper@@UEAAJPEAPEAU_GUID@@PEAI_K@Z @ 0x140075C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetEffectsListRemote(
        CSystemEffectWrapper *this,
        struct _GUID **a2,
        unsigned int *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0;
  if ( *((_QWORD *)this + 14) )
    return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 24LL))((char *)this - 64);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x369,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
