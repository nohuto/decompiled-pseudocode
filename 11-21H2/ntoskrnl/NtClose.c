/*
 * XREFs of NtClose @ 0x140731D50
 * Callers:
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 *     sub_1403C5F68 @ 0x1403C5F68 (sub_1403C5F68.c)
 *     sub_1403C6028 @ 0x1403C6028 (sub_1403C6028.c)
 *     RtlQueryValidationRunlevel @ 0x1405EDAC0 (RtlQueryValidationRunlevel.c)
 *     sub_140663D08 @ 0x140663D08 (sub_140663D08.c)
 *     sub_140664220 @ 0x140664220 (sub_140664220.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140666D1C @ 0x140666D1C (sub_140666D1C.c)
 *     sub_1406797C8 @ 0x1406797C8 (sub_1406797C8.c)
 *     sub_1406AECC0 @ 0x1406AECC0 (sub_1406AECC0.c)
 *     sub_1406E2A70 @ 0x1406E2A70 (sub_1406E2A70.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 *     sub_1407D84EC @ 0x1407D84EC (sub_1407D84EC.c)
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 *     sub_1407DE1A8 @ 0x1407DE1A8 (sub_1407DE1A8.c)
 *     sub_1407DEE78 @ 0x1407DEE78 (sub_1407DEE78.c)
 *     sub_1407DF200 @ 0x1407DF200 (sub_1407DF200.c)
 *     sub_1407DF794 @ 0x1407DF794 (sub_1407DF794.c)
 *     sub_1407E08A0 @ 0x1407E08A0 (sub_1407E08A0.c)
 *     sub_1407E0A98 @ 0x1407E0A98 (sub_1407E0A98.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407F7F00 (RtlCreateSystemVolumeInformationFolder.c)
 *     sub_140830634 @ 0x140830634 (sub_140830634.c)
 *     sub_1408334E4 @ 0x1408334E4 (sub_1408334E4.c)
 *     sub_14084CD18 @ 0x14084CD18 (sub_14084CD18.c)
 *     sub_14084D204 @ 0x14084D204 (sub_14084D204.c)
 *     sub_140857300 @ 0x140857300 (sub_140857300.c)
 *     sub_14090E880 @ 0x14090E880 (sub_14090E880.c)
 *     sub_140934110 @ 0x140934110 (sub_140934110.c)
 *     sub_140987430 @ 0x140987430 (sub_140987430.c)
 *     sub_140987E44 @ 0x140987E44 (sub_140987E44.c)
 *     sub_1409AEFF0 @ 0x1409AEFF0 (sub_1409AEFF0.c)
 *     sub_1409AF200 @ 0x1409AF200 (sub_1409AF200.c)
 *     sub_1409BB4D8 @ 0x1409BB4D8 (sub_1409BB4D8.c)
 *     sub_1409F3EC0 @ 0x1409F3EC0 (sub_1409F3EC0.c)
 *     sub_1409F8680 @ 0x1409F8680 (sub_1409F8680.c)
 *     sub_140AF24B4 @ 0x140AF24B4 (sub_140AF24B4.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 *     sub_140B219F0 @ 0x140B219F0 (sub_140B219F0.c)
 *     sub_140B22004 @ 0x140B22004 (sub_140B22004.c)
 *     sub_140B25D38 @ 0x140B25D38 (sub_140B25D38.c)
 *     sub_140B28EB0 @ 0x140B28EB0 (sub_140B28EB0.c)
 *     sub_140B2B2EC @ 0x140B2B2EC (sub_140B2B2EC.c)
 *     sub_140B2F684 @ 0x140B2F684 (sub_140B2F684.c)
 *     sub_140B4B918 @ 0x140B4B918 (sub_140B4B918.c)
 *     sub_140B4F514 @ 0x140B4F514 (sub_140B4F514.c)
 * Callees:
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_140A9466C @ 0x140A9466C (sub_140A9466C.c)
 */

NTSTATUS __stdcall NtClose(HANDLE Handle)
{
  char v2; // di
  ULONG_PTR v4; // rcx

  v2 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( (dword_140C29FC0 & 0x100) != 0 && !v2 && !sub_1402F3558((unsigned __int64)Handle, 0) )
    sub_140A9466C(v4);
  return sub_140734160((ULONG_PTR)Handle);
}
