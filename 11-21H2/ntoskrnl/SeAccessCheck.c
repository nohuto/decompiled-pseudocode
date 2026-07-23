/*
 * XREFs of SeAccessCheck @ 0x1402F9C80
 * Callers:
 *     sub_14024B8BC @ 0x14024B8BC (sub_14024B8BC.c)
 *     sub_1402AC350 @ 0x1402AC350 (sub_1402AC350.c)
 *     sub_14053EFBC @ 0x14053EFBC (sub_14053EFBC.c)
 *     sub_1405F5174 @ 0x1405F5174 (sub_1405F5174.c)
 *     sub_14062C598 @ 0x14062C598 (sub_14062C598.c)
 *     sub_140668294 @ 0x140668294 (sub_140668294.c)
 *     sub_140668AEC @ 0x140668AEC (sub_140668AEC.c)
 *     ObCheckObjectAccess @ 0x1406698A0 (ObCheckObjectAccess.c)
 *     sub_1406B5158 @ 0x1406B5158 (sub_1406B5158.c)
 *     ObCheckCreateObjectAccess @ 0x1406B6C50 (ObCheckCreateObjectAccess.c)
 *     sub_1406BC164 @ 0x1406BC164 (sub_1406BC164.c)
 *     sub_1406C5900 @ 0x1406C5900 (sub_1406C5900.c)
 *     sub_1406CDC5C @ 0x1406CDC5C (sub_1406CDC5C.c)
 *     sub_1406D6C24 @ 0x1406D6C24 (sub_1406D6C24.c)
 *     sub_14072266C @ 0x14072266C (sub_14072266C.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_14078A644 @ 0x14078A644 (sub_14078A644.c)
 *     sub_140794404 @ 0x140794404 (sub_140794404.c)
 *     sub_140794654 @ 0x140794654 (sub_140794654.c)
 *     sub_140796798 @ 0x140796798 (sub_140796798.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     sub_1407EF848 @ 0x1407EF848 (sub_1407EF848.c)
 *     sub_1407F7AD0 @ 0x1407F7AD0 (sub_1407F7AD0.c)
 *     sub_140855FA0 @ 0x140855FA0 (sub_140855FA0.c)
 *     sub_1409113B4 @ 0x1409113B4 (sub_1409113B4.c)
 *     sub_140911544 @ 0x140911544 (sub_140911544.c)
 *     sub_140949950 @ 0x140949950 (sub_140949950.c)
 *     sub_1409B0030 @ 0x1409B0030 (sub_1409B0030.c)
 *     sub_1409B3230 @ 0x1409B3230 (sub_1409B3230.c)
 *     sub_140A03FB4 @ 0x140A03FB4 (sub_140A03FB4.c)
 *     sub_140A81DB4 @ 0x140A81DB4 (sub_140A81DB4.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 */

BOOLEAN __stdcall SeAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN SubjectContextLocked,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
