/*
 * XREFs of ?RmpActivityHostQueryOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180085130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemoryCommitSaveCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int128 ProcessInformation; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h]

  ProcessInformation = 0LL;
  LODWORD(ProcessInformation) = 3;
  v7 = 0LL;
  NtQueryInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u, 0LL);
  *a4 += v7;
  return 0LL;
}
