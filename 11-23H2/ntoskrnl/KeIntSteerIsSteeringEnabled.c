/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14036F334
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14084C514 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
