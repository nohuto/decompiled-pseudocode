/*
 * XREFs of NtCreateTimer2 @ 0x1407D53D0
 * Callers:
 *     NtCreateIRTimer @ 0x1406EBB70 (NtCreateIRTimer.c)
 * Callees:
 *     ExpExTimerAttributesAreValid @ 0x140358884 (ExpExTimerAttributesAreValid.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x1403725A0 (KeInitializeIRTimer.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x1407F40A8 (ExpCheckIRTimerAccess.c)
 */

__int64 __fastcall NtCreateTimer2(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int *v9; // r10
  char PreviousMode; // si
  __int64 v11; // rcx
  int inserted; // ecx
  _QWORD *v13; // rbx
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned int v16; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  v18 = 0LL;
  Object = 0LL;
  if ( !ExpExTimerAttributesAreValid(a4) )
    return 3221225714LL;
  if ( v8 )
    return 3221225713LL;
  if ( v9 && (a4 & 2) == 0 )
    return 3221225712LL;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a1;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v7 = (__int64)v9;
      v16 = *(_DWORD *)v7;
    }
  }
  else if ( v9 )
  {
    v16 = *v9;
  }
  if ( (a4 & 2) == 0 || (LOBYTE(v7) = PreviousMode, result = ExpCheckIRTimerAccess(v16, v7), (int)result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0, PreviousMode, v15, 168, 0, 0, &Object, 0LL);
    if ( inserted >= 0 )
    {
      v13 = Object;
      if ( (a4 & 2) != 0 )
        KeInitializeIRTimer((__int64)Object, 0LL, 0LL, (unsigned __int8 *)&v16, a4);
      else
        KeInitializeTimer2((__int64)Object, 0LL, 0LL, a4);
      v13[17] = 0LL;
      *((_DWORD *)v13 + 40) = a4;
      inserted = ObInsertObjectEx((char *)v13, 0LL, a5, 0, 0, 0LL, &v18);
      v16 = inserted;
      if ( inserted >= 0 )
        *a1 = v18;
    }
    return (unsigned int)inserted;
  }
  return result;
}
