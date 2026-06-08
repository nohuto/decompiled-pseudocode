/*
 * XREFs of RegisterVmIdleStates @ 0x1C003A79C
 * Callers:
 *     RegisterHvPepIdleStatesV2 @ 0x1C002F3F4 (RegisterHvPepIdleStatesV2.c)
 *     RegisterGuestIdleStates @ 0x1C0039C30 (RegisterGuestIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     RegisterIdleComplete @ 0x1C002D9DC (RegisterIdleComplete.c)
 *     RegisterHvPepContext @ 0x1C003A6BC (RegisterHvPepContext.c)
 */

__int64 __fastcall RegisterVmIdleStates(__int64 a1)
{
  unsigned int *v2; // rdx
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  _DWORD *v5; // rdx
  NTSTATUS v6; // ebx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001F018,
    0LL);
  v2 = *(unsigned int **)(a1 + 1152);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = 0;
    v5 = v2 + 1;
    do
    {
      if ( (*v5 & 0x200) == 0 )
      {
        v6 = -1073741637;
        goto LABEL_12;
      }
      ++v4;
      v5 += 3;
    }
    while ( v4 < v3 );
    v6 = RegisterHvPepContext(a1);
    if ( v6 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 720) )
      {
        *(_BYTE *)(a1 + 720) = 1;
        RegisterIdleComplete(a1);
      }
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741823;
  }
LABEL_12:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001F018);
  return (unsigned int)v6;
}
