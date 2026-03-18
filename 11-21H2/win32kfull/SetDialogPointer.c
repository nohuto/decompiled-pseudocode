/*
 * XREFs of SetDialogPointer @ 0x1C00DD234
 * Callers:
 *     NtUserSetDialogPointer @ 0x1C00DD170 (NtUserSetDialogPointer.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00DD334 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetDialogPointer(struct tagWND *a1, __int64 a2)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx

  v5 = *((_QWORD *)a1 + 5);
  if ( *(int *)(v5 + 200) >= 30
    && (*(_BYTE *)(v5 + 18) & 4) == 0
    && PsGetCurrentProcessWin32Process(v5) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
  {
    v6 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v6 + 232) & 0x10) == 0 )
    {
      if ( !*(_DWORD *)(v6 + 248) || *(_WORD *)(v6 + 42) )
      {
        v7 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
        if ( v7 )
        {
          *(_QWORD *)(v7 + 8) = a2;
          v8 = *((_QWORD *)a1 + 5);
          if ( a2 )
          {
            if ( !*(_WORD *)(v8 + 42) )
              *(_WORD *)(v8 + 42) = 676;
            v9 = 1;
          }
          else
          {
            *(_WORD *)(v8 + 42) |= 0x4000u;
            v9 = 0;
          }
          SetOrClrWF(v9, a1, 0x201u, 1);
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      }
    }
  }
  return 1LL;
}
