/*
 * XREFs of HMIsHandleEntrySecure @ 0x1C00E4C84
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C007F760 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     ?IsHandleEntrySecureWorker@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C014141C (-IsHandleEntrySecureWorker@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall HMIsHandleEntrySecure(void *a1)
{
  unsigned int v2; // ebx
  __int16 v3; // ax
  struct _HANDLEENTRY *v4; // rsi

  v2 = 0;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = WORD1(a1) & 0x7FFF;
    v4 = (struct _HANDLEENTRY *)((char *)qword_1C0294B68 + (unsigned int)(unsigned __int16)a1 * dword_1C0294B70);
    if ( (WORD1(a1) & 0x7FFF) == *((_WORD *)v4 + 13) || v3 == 0x7FFF || !v3 && PsGetCurrentProcessWow64Process() )
      return (unsigned int)IsHandleEntrySecureWorker(a1, v4);
  }
  return v2;
}
