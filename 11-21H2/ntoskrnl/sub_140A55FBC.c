/*
 * XREFs of sub_140A55FBC @ 0x140A55FBC
 * Callers:
 *     sub_140A55DCC @ 0x140A55DCC (sub_140A55DCC.c)
 * Callees:
 *     KeHwPolicyLocateResource @ 0x140AFAC30 (KeHwPolicyLocateResource.c)
 */

__int64 __fastcall sub_140A55FBC(int a1, _QWORD *a2, _QWORD *a3)
{
  int v4; // edi
  __int64 result; // rax

  *a2 = 0LL;
  *a3 = 0LL;
  v4 = (int)a2;
  result = KeHwPolicyLocateResource(a1, 101, qword_140C0C6D8, (_DWORD)a2, (__int64)a3);
  if ( (int)result < 0 && qword_140C0C6D8 != 1 )
  {
    qword_140C0C6D8 = 1LL;
    return KeHwPolicyLocateResource(a1, 101, 1, v4, (__int64)a3);
  }
  return result;
}
