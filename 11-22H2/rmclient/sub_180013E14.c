/*
 * XREFs of sub_180013E14 @ 0x180013E14
 * Callers:
 *     sub_180013640 @ 0x180013640 (sub_180013640.c)
 *     sub_180013980 @ 0x180013980 (sub_180013980.c)
 * Callees:
 *     sub_1800011EC @ 0x1800011EC (sub_1800011EC.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_180013578 @ 0x180013578 (sub_180013578.c)
 */

int __fastcall sub_180013E14(__int64 a1, int a2)
{
  void *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  int v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+44h] [rbp-34h] BYREF
  int v13; // [rsp+48h] [rbp-30h] BYREF
  __int128 JobInformation; // [rsp+50h] [rbp-28h] BYREF

  JobInformation = 0LL;
  LODWORD(JobInformation) = 1;
  v4 = *(void **)(a1 + 48);
  BYTE4(JobInformation) = a2 & 1;
  LODWORD(v5) = NtSetInformationJobObject(v4, (JOBOBJECTINFOCLASS)18, &JobInformation, 0x10u);
  v9 = v5;
  if ( (a2 & 2) != 0 )
    LODWORD(v5) = sub_180013578(a1);
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 2) != 0 )
  {
    v5 = qword_180032018 & 2;
    if ( v5 == qword_180032018 )
    {
      v13 = *(_DWORD *)(a1 + 80);
      v11 = v9;
      v12 = a2;
      LODWORD(v5) = sub_1800011EC(v6, byte_18002A741, v7, v8, (__int64)&v13, (__int64)&v12, (__int64)&v11);
    }
  }
  return v5;
}
