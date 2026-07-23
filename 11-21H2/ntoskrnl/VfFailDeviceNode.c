/*
 * XREFs of VfFailDeviceNode @ 0x1403B6480
 * Callers:
 *     <none>
 * Callees:
 *     VfIsVerificationEnabled @ 0x1403B64C0 (VfIsVerificationEnabled.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall VfFailDeviceNode(ULONG_PTR BugCheckParameter2, ULONG BugCheckCode, ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v4; // rdi
  __int64 result; // rax

  v4 = (unsigned int)BugCheckParameter1;
  result = VfIsVerificationEnabled(1LL, BugCheckParameter2);
  if ( (_DWORD)result )
    return sub_140A8C924(BugCheckCode, v4, BugCheckParameter2, 0LL, 0LL);
  return result;
}
