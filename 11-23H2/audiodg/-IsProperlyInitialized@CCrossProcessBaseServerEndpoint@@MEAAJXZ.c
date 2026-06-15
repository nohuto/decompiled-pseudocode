/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x1400921C0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002CC8 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x14001ED0C (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::IsProperlyInitialized(CCrossProcessBaseServerEndpoint *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  wil::details *v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  wil::details *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 416);
  if ( *((_QWORD *)this + 52) )
    return 0LL;
  v3 = *((_QWORD *)this + 54);
  if ( !v3 )
    return 0LL;
  _InterlockedExchange64((volatile __int64 *)this + 53, v3);
  v4 = (wil::details *)*((_QWORD *)this + 53);
  if ( v4 )
  {
    v9 = v4;
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset(v1);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(v1, &v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPBaseEndpoint.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
    *((_QWORD *)this + 54) = 0LL;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD5,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPBaseEndpoint.h",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
