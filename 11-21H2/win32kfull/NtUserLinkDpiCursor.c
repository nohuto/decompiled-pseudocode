/*
 * XREFs of NtUserLinkDpiCursor @ 0x1C01F8CB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C00A1F0C (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x1C01CF910 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 */

__int64 __fastcall NtUserLinkDpiCursor(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  struct tagCURSOR *v11; // rcx
  struct tagCURSOR *v12; // r9

  EnterCrit(0LL, 0LL);
  v7 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  v9 = HMValidateHandle(a1, 3u);
  if ( v9 )
  {
    v10 = HMValidateHandle(a2, 3u);
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 80) & 0x1000) != 0
        && (*(_DWORD *)(v9 + 80) & 0x1800) == 0
        && *(_QWORD *)(v10 + 48) == v10
        && !FindDPICursor((struct tagCURSOR *)v9, a3) )
      {
        LinkDpiCursor(v11, v12, a3);
        v7 = 1LL;
        goto LABEL_10;
      }
LABEL_9:
      UserSetLastError(87LL, v6);
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
