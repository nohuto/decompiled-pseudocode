/*
 * XREFs of PopInterruptSteeringEnabled @ 0x1403922C8
 * Callers:
 *     PpmCheckReInit @ 0x14082CAEC (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

bool PopInterruptSteeringEnabled()
{
  bool result; // al

  result = 0;
  if ( !PpmIntSteerDisabled )
    return KiIntSteerEnabled != 0;
  return result;
}
