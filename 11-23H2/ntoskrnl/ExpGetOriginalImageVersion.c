/*
 * XREFs of ExpGetOriginalImageVersion @ 0x1406104D0
 * Callers:
 *     ExpQueryOriginalImageFeatureInformation @ 0x140A074D4 (ExpQueryOriginalImageFeatureInformation.c)
 * Callees:
 *     <none>
 */

__int64 ExpGetOriginalImageVersion()
{
  return (unsigned int)ExpOriginalImageVersion;
}
