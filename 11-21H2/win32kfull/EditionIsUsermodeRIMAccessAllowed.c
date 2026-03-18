/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x1C01D4190
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 EditionIsUsermodeRIMAccessAllowed()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v4 = IsProcessDwm(CurrentProcess);
  if ( !v6 )
    UserSessionSwitchLeaveCrit(v3);
  return v4;
}
