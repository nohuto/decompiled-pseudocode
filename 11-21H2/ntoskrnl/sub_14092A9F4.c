/*
 * XREFs of sub_14092A9F4 @ 0x14092A9F4
 * Callers:
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 */

struct _KTHREAD *__fastcall sub_14092A9F4(int a1)
{
  _QWORD *v2; // rcx
  struct _KTHREAD *result; // rax
  int v4; // edx
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = (_QWORD *)*((_QWORD *)KeGetCurrentThread() + 23);
  result = KeGetCurrentThread();
  v4 = *((_DWORD *)result + 344);
  if ( (v4 & 4) == 0 && v2[175] && (v4 & 2) != 0 )
  {
    v5[12] = a1;
    v5[0] = 3407884;
    v5[1] = 8;
    v5[10] = 3;
    return (struct _KTHREAD *)sub_14092A070(v2, 1, (__int64)v5);
  }
  return result;
}
