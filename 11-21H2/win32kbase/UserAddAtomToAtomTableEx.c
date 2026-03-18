/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1C00570D0
 * Callers:
 *     Win32UserInitialize @ 0x1C02E231C (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1C01660B4 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(struct _RTL_ATOM_TABLE *a1, __int64 a2, int a3)
{
  int v5; // ebx
  __int64 result; // rax
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  RTL_ATOM v11[12]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0;
  v5 = RtlAddAtomToAtomTableEx(a1, a2, v11);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741773 )
  {
    LkdForAtomAdditionFailure(a1, v5);
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7, v8, v9, v10);
  }
  result = v11[0];
  if ( v11[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(a1, v11[0]);
      return v11[0];
    }
  }
  return result;
}
