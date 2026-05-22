/*
 * XREFs of ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x18016AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800972EC (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801CA27C (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnDisconnected(EdgyControllerClientProxy *this)
{
  __int64 *v2; // rbx
  const unsigned __int16 *v3; // rdx
  bool v4; // cf
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 128);
  v3 = (const unsigned __int16 *)((char *)this + 88);
  v4 = *((_QWORD *)this + 14) < 8uLL;
  v5 = *(_QWORD *)(*((_QWORD *)this + 16) + 56LL);
  if ( !v4 )
    v3 = *(const unsigned __int16 **)v3;
  v6 = Edges::Remove((Edges *)(v5 + 72), v3, this);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v6,
      v8);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v2);
  return 0LL;
}
