/*
 * XREFs of NtUserWindowFromPhysicalPoint @ 0x1C01E02E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowFromPoint @ 0x1C008C498 (xxxWindowFromPoint.c)
 */

struct tagWND *__fastcall NtUserWindowFromPhysicalPoint(struct tagPOINT a1)
{
  struct tagWND **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagWND *v7; // rbx

  EnterCrit(0LL, 0LL);
  v2 = xxxWindowFromPoint(a1);
  v7 = 0LL;
  if ( v2 )
    v7 = *v2;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
