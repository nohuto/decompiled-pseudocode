/*
 * XREFs of SeAccessCheckFromState @ 0x1402286B0
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1406C03D4 (EtwpAccessCheckFromState.c)
 *     CmpCheckAdminAccess @ 0x140A18EA0 (CmpCheckAdminAccess.c)
 * Callees:
 *     SepTokenFromAccessInformation @ 0x14022824C (SepTokenFromAccessInformation.c)
 *     SeAccessCheckFromStateEx @ 0x1402287B0 (SeAccessCheckFromStateEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

BOOLEAN __stdcall SeAccessCheckFromState(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation,
        PTOKEN_ACCESS_INFORMATION ClientTokenInformation,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  int v12; // esi
  _BYTE *v14; // r8
  _BYTE v16[1184]; // [rsp+50h] [rbp-998h] BYREF
  _BYTE v17[1184]; // [rsp+4F0h] [rbp-4F8h] BYREF

  v12 = (int)SecurityDescriptor;
  memset(v17, 0, 0x498uLL);
  memset(v16, 0, 0x498uLL);
  SepTokenFromAccessInformation((__int64)PrimaryTokenInformation, (__int64)v17);
  LODWORD(v14) = 0;
  if ( ClientTokenInformation )
  {
    SepTokenFromAccessInformation((__int64)ClientTokenInformation, (__int64)v16);
    v14 = v16;
  }
  return SeAccessCheckFromStateEx(
           v12,
           (unsigned int)v17,
           (_DWORD)v14,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
