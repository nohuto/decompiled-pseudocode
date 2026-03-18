/*
 * XREFs of ExpGetOriginalImageVersion @ 0x14060FFF0
 * Callers:
 *     ExpQueryOriginalImageFeatureInformation @ 0x140A072F4 (ExpQueryOriginalImageFeatureInformation.c)
 * Callees:
 *     <none>
 */

__int64 ExpGetOriginalImageVersion()
{
  return (unsigned int)ExpOriginalImageVersion;
}
