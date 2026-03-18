/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14036F194
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14084C214 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
