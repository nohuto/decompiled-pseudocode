/*
 * XREFs of NtCreateProfileEx @ 0x140A04700
 * Callers:
 *     <none>
 * Callees:
 *     ExpProfileCreate @ 0x140A03F08 (ExpProfileCreate.c)
 */

NTSTATUS __cdecl NtCreateProfileEx(
        PHANDLE ProfileHandle,
        HANDLE Process,
        PVOID ProfileBase,
        SIZE_T ProfileSize,
        ULONG BucketSize,
        PULONG Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        USHORT GroupCount,
        PGROUP_AFFINITY GroupAffinity)
{
  return ExpProfileCreate(
           (__int64 *)ProfileHandle,
           (ULONG_PTR)Process,
           (unsigned __int64)ProfileBase,
           ProfileSize,
           BucketSize,
           Buffer,
           BufferSize,
           ProfileSource,
           GroupCount,
           (unsigned __int64)GroupAffinity,
           0);
}
