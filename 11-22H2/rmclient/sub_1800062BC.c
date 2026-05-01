/*
 * XREFs of sub_1800062BC @ 0x1800062BC
 * Callers:
 *     sub_1800061F0 @ 0x1800061F0 (sub_1800061F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800062BC(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  result = NtQueryWnfStateData(a1, 0LL, 0LL, &v6, 0LL, &v5);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741789 )
  {
    result = RtlSubscribeWnfStateChangeNotification(a2, *a1, v6, sub_180006AA0, a2, 0LL, 0, 0);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
