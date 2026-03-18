/*
 * XREFs of NtUserSetCursor @ 0x1C00A4ED0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00F178C (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserSetCursor(__int64 a1)
{
  __int64 v2; // rbx
  struct tagCURSOR *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagCURSOR *v8; // rax

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
    if ( !v3 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0LL;
  }
  v8 = zzzSetCursor(v3);
  if ( v8 )
    v2 = *(_QWORD *)v8;
LABEL_5:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
