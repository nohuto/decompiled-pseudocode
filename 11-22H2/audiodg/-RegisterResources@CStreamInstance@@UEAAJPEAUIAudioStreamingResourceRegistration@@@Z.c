/*
 * XREFs of ?RegisterResources@CStreamInstance@@UEAAJPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140025120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStreamInstance::RegisterResources(
        CStreamInstance *this,
        struct IAudioStreamingResourceRegistration *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 21) )
    return 0LL;
  if ( (unsigned __int64)(*((_QWORD *)this + 15) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)a2 + 24LL))(a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
