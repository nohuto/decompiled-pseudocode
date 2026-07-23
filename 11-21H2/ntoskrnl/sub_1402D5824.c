/*
 * XREFs of sub_1402D5824 @ 0x1402D5824
 * Callers:
 *     sub_14025D390 @ 0x14025D390 (sub_14025D390.c)
 *     sub_1402D5800 @ 0x1402D5800 (sub_1402D5800.c)
 *     sub_1402D6200 @ 0x1402D6200 (sub_1402D6200.c)
 * Callees:
 *     sub_1402D594C @ 0x1402D594C (sub_1402D594C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1402D5824(HANDLE Handle, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rcx
  KPROCESSOR_MODE v6; // r9
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h]

  v9 = 0LL;
  if ( a2 )
  {
    if ( *((_BYTE *)KeGetCurrentThread() + 562) )
    {
      v5 = 0x7FFFFFFF0000LL;
      if ( a4 )
      {
        if ( a4 < 0x7FFFFFFF0000LL )
          v5 = a4;
        v9 = *(_OWORD *)v5;
      }
    }
  }
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 2u, qword_140D06C78, v6, &Object, 0LL);
  if ( result >= 0 )
    return sub_1402D594C(Object);
  return result;
}
