/*
 * XREFs of ExpGetOriginalImageVersion @ 0x14060FF80
 * Callers:
 *     ExpQueryOriginalImageFeatureInformation @ 0x140A07244 (ExpQueryOriginalImageFeatureInformation.c)
 * Callees:
 *     <none>
 */

__int64 ExpGetOriginalImageVersion()
{
  return (unsigned int)ExpOriginalImageVersion;
}
