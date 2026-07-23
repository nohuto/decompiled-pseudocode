/*
 * XREFs of FsRtlSetDriverBacking @ 0x14080F640
 * Callers:
 *     IoRegisterFileSystem @ 0x14080F4B0 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     sub_14080F66C @ 0x14080F66C (sub_14080F66C.c)
 */

__int64 __fastcall FsRtlSetDriverBacking(__int64 a1, char a2)
{
  __int64 result; // rax
  ULONG_PTR v3; // rcx

  result = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
      return sub_14080F66C(v3);
    else
      return 3221226083LL;
  }
  return result;
}
