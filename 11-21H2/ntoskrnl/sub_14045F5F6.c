/*
 * XREFs of sub_14045F5F6 @ 0x14045F5F6
 * Callers:
 *     sub_1405FAA30 @ 0x1405FAA30 (sub_1405FAA30.c)
 *     sub_140882DDC @ 0x140882DDC (sub_140882DDC.c)
 * Callees:
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_1403865AC @ 0x1403865AC (sub_1403865AC.c)
 */

__int64 __fastcall sub_14045F5F6(PVOID a1)
{
  __int64 v1; // rax
  int v3; // edx
  __int64 *v4; // rax
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( a1 == qword_140D32198 )
  {
    v3 = dword_140D321F0;
  }
  else
  {
    v5 = a1;
    v1 = sub_1402A1124((ULONG_PTR)&qword_140D321C8, &v5, 0LL, 0);
    if ( !v1 )
      return 3221226021LL;
    v3 = *(unsigned __int16 *)(v1 + 16);
  }
  if ( v3 == -1 )
    return 3221226021LL;
  v4 = (__int64 *)sub_14035F5E8((__int64)&unk_140D31A00, v3 & 0x3FF);
  return sub_1403865AC(*v4);
}
