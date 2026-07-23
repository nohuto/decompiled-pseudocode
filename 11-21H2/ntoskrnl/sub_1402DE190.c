/*
 * XREFs of sub_1402DE190 @ 0x1402DE190
 * Callers:
 *     FsRtlValidateReparsePointBuffer @ 0x1402DDF40 (FsRtlValidateReparsePointBuffer.c)
 *     sub_1406CBD5C @ 0x1406CBD5C (sub_1406CBD5C.c)
 *     sub_140769784 @ 0x140769784 (sub_140769784.c)
 *     sub_14077FB68 @ 0x14077FB68 (sub_14077FB68.c)
 *     sub_1409AC86C @ 0x1409AC86C (sub_1409AC86C.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     sub_1409CC540 @ 0x1409CC540 (sub_1409CC540.c)
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 *     sub_140A16F94 @ 0x140A16F94 (sub_140A16F94.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     sub_140A9A588 @ 0x140A9A588 (sub_140A9A588.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402DE190(unsigned __int16 a1, __int16 a2, __int16 *a3)
{
  bool v3; // cf
  __int16 v4; // dx

  v3 = (unsigned __int16)(a2 + a1) < a1;
  if ( (unsigned __int16)(a2 + a1) < a1 )
    v4 = -1;
  else
    v4 = a2 + a1;
  *a3 = v4;
  return v3 ? 0xC0000095 : 0;
}
