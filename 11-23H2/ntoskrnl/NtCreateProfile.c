/*
 * XREFs of NtCreateProfile @ 0x140A04620
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryGroupAffinity @ 0x14032A520 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x140A03F08 (ExpProfileCreate.c)
 */

NTSTATUS __cdecl NtCreateProfile(
        PHANDLE ProfileHandle,
        HANDLE Process,
        PVOID ProfileBase,
        SIZE_T ProfileSize,
        ULONG BucketSize,
        PULONG Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        KAFFINITY Affinity)
{
  USHORT Group; // cx
  KAFFINITY GroupAffinity; // rax
  KAFFINITY v16; // [rsp+60h] [rbp-48h] BYREF
  __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = 0LL;
  Group = KeGetCurrentPrcb()->Group;
  GroupAffinity = Affinity;
  LOWORD(v17) = Group;
  if ( Affinity == -1LL )
    GroupAffinity = KeQueryGroupAffinity(Group);
  v16 = GroupAffinity;
  return ExpProfileCreate(
           (__int64 *)ProfileHandle,
           (ULONG_PTR)Process,
           (unsigned __int64)ProfileBase,
           ProfileSize,
           BucketSize,
           Buffer,
           BufferSize,
           ProfileSource,
           1u,
           (unsigned __int64)&v16,
           1);
}
