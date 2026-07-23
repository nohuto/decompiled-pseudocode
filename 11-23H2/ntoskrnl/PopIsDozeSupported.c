/*
 * XREFs of PopIsDozeSupported @ 0x140980D04
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E668 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopUpdateSystemIdleContext @ 0x140824C78 (PopUpdateSystemIdleContext.c)
 *     PopDeferDoze @ 0x14098B814 (PopDeferDoze.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x140873844 (PopIsHibernateSupported.c)
 */

char __fastcall PopIsDozeSupported(_BYTE *a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  char v3; // al

  if ( PopIsHibernateSupported(a1) || PopPromoteHibernateToShutdown != v2 )
  {
    v3 = v2;
    if ( *(_BYTE *)(v1 + 7) != (_BYTE)v2 )
      v3 = 1;
    LOBYTE(v2) = v3;
  }
  return v2;
}
