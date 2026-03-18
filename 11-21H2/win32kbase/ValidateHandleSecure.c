/*
 * XREFs of ValidateHandleSecure @ 0x1C002DD80
 * Callers:
 *     HMValidateHandle @ 0x1C0030A98 (HMValidateHandle.c)
 *     HMValidateCatHandleNoRip @ 0x1C0210298 (HMValidateCatHandleNoRip.c)
 * Callees:
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002DC7C (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     IsHandleEntrySecure @ 0x1C00CCB84 (IsHandleEntrySecure.c)
 */

__int64 __fastcall ValidateHandleSecure(__int64 a1, char a2)
{
  __int16 v4; // ax
  char *v5; // rbx
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 0LL;
  v4 = WORD1(a1) & 0x7FFF;
  v5 = (char *)qword_1C0294B68 + (unsigned int)(unsigned __int16)a1 * dword_1C0294B70;
  if ( (WORD1(a1) & 0x7FFF) != *((_WORD *)v5 + 13) && v4 != 0x7FFF && (v4 || !PsGetCurrentProcessWow64Process()) )
    return 0LL;
  if ( !v5[24] || (a2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, v5) || (a2 & 2) == 0 )
    return 0LL;
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  if ( *(_DWORD *)(v6 + 1508) )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v5, v8, v9, v10);
  else
    return 1LL;
}
