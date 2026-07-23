/*
 * XREFs of sub_1402F61F8 @ 0x1402F61F8
 * Callers:
 *     sub_1406BCB64 @ 0x1406BCB64 (sub_1406BCB64.c)
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 *     sub_1409663D0 @ 0x1409663D0 (sub_1409663D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402F61F8(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = *(_DWORD *)(a1 + 1232);
  a2[1] = *(_DWORD *)(a1 + 1152);
  result = qword_140D3CD00;
  *(_QWORD *)a2 ^= qword_140D3CD00;
  return result;
}
