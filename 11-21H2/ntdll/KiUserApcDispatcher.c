/*
 * XREFs of KiUserApcDispatcher @ 0x1800A7EC0
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A7EC0 (KiUserApcDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwContinueEx @ 0x1800A54C0 (ZwContinueEx.c)
 *     KiUserCallForwarder @ 0x1800A7E70 (KiUserCallForwarder.c)
 */

void __noreturn KiUserApcDispatcher()
{
  unsigned __int64 v0; // rcx
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // esi
  unsigned __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  __int64 v7; // [rsp+8h] [rbp+8h]
  __int64 v8; // [rsp+10h] [rbp+10h]
  __int64 v9; // [rsp+18h] [rbp+18h]
  unsigned int v10; // [rsp+20h] [rbp+20h]

  while ( 1 )
  {
    v0 = __ROL8__(-(v9 >> 2), 32);
    if ( (_DWORD)v0 )
    {
      KiUserCallForwarder();
    }
    else
    {
      v5 = (unsigned int)retaddr | v0;
      if ( Wow64ApcRoutine )
      {
        Wow64ApcRoutine(v5, ((unsigned __int64)v10 << 32) | v7, v8, &retaddr);
        v4 = -1073741811;
        goto LABEL_7;
      }
    }
    v1 = ZwContinueEx();
    if ( v1 )
    {
      if ( v1 == -1073740278 )
        __fastfail(0x30u);
      v4 = v1;
LABEL_7:
      RtlRaiseStatus(v4, v2, v3);
    }
  }
}
