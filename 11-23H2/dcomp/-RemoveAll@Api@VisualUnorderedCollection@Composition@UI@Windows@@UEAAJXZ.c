/*
 * XREFs of ?RemoveAll@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1801A1E30
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1801A1CC0 (-EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollection::Api::RemoveAll(
        Windows::UI::Composition::VisualUnorderedCollection::Api *this)
{
  Windows::UI::Composition::VisualUnorderedCollection *v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  int valid; // eax
  int v5; // eax
  unsigned int v6; // edx
  int v7; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (Windows::UI::Composition::VisualUnorderedCollection::Api *)((char *)this - 136);
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    valid = Windows::UI::Composition::VisualUnorderedCollection::EnsureValidState(v1);
    v3 = valid;
    if ( valid < 0 )
    {
      v6 = 295;
      v7 = valid;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 20) + 56LL))(
             *((_QWORD *)v1 + 20),
             *((_QWORD *)v1 + 19));
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisualunorderedcollection.cpp",
        (const char *)(unsigned int)v5);
      v6 = 297;
      v7 = v3;
    }
    DoStackCaptureDirect(v7, v6);
    goto LABEL_9;
  }
  v3 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v3;
}
