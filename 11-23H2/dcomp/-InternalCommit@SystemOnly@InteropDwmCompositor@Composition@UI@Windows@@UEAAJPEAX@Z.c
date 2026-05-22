/*
 * XREFs of ?InternalCommit@SystemOnly@InteropDwmCompositor@Composition@UI@Windows@@UEAAJPEAX@Z @ 0x18015BB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z @ 0x1800803B4 (-InternalCommit_Callback@CompositorCommon@Composition@UI@Windows@@QEAAJPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropDwmCompositor::SystemOnly::InternalCommit(
        Windows::UI::Composition::InteropDwmCompositor::SystemOnly *this,
        void *a2)
{
  char *v2; // rdi
  int v4; // ebx
  const char *v5; // r9
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this - 1288;
  v4 = *((_DWORD *)this - 308);
  if ( v4 != GetCurrentThreadId() )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      203LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
      v5);
  v6 = *((_QWORD *)v2 + 3);
  if ( *(int *)(v6 + 88) > 0 && !*(_BYTE *)(v6 + 97) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  ++*(_DWORD *)(v6 + 92);
  v7 = Windows::UI::Composition::CompositorCommon::InternalCommit_Callback((DirectComposition::CDevice **)v2, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    --*(_DWORD *)(v6 + 92);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtinteropdwmcompositor.cpp",
      (const char *)(unsigned int)v7);
    --*(_DWORD *)(v6 + 92);
    return v8;
  }
}
