/*
 * XREFs of sub_1406329AC @ 0x1406329AC
 * Callers:
 *     sub_14021A7D0 @ 0x14021A7D0 (sub_14021A7D0.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406324DC @ 0x1406324DC (sub_1406324DC.c)
 */

struct _KTHREAD *__fastcall sub_1406329AC(int a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KTHREAD *result; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+48h] [rbp-38h]
  int v8; // [rsp+4Ch] [rbp-34h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+5Ch] [rbp-24h]
  _QWORD v12[2]; // [rsp+60h] [rbp-20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  ++*((_DWORD *)CurrentPrcb + 8796);
  v10 = a1;
  v9 = a2;
  memset(v6, 0, sizeof(v6));
  v7 = 0;
  v11 = 0;
  v12[1] = 48LL;
  v8 = *((_DWORD *)KeGetCurrentThread() + 308);
  v12[0] = v6;
  sub_14035EDE4((__int64)v12, 1u, 0x20020000u, 0x52Bu, 0x1501802u);
  result = KeGetCurrentThread();
  if ( *((_QWORD *)result + 188) )
  {
    result = (struct _KTHREAD *)sub_1406324DC(a2, a1 & 0xFFFF0000);
    if ( result )
    {
      if ( *((_DWORD *)result + 8) )
      {
        ++*((_DWORD *)CurrentPrcb + 8797);
        *((_QWORD *)result + 2) = 0LL;
        *(_QWORD *)((char *)result + 28) = 0LL;
        *((_DWORD *)result + 9) = 0;
        *(_QWORD *)result = 0LL;
        *((_QWORD *)result + 1) = 0LL;
        *((_DWORD *)result + 6) = 0;
        *((_DWORD *)result + 11) = 0;
      }
      else
      {
        *((_DWORD *)result + 7) = 0;
      }
    }
  }
  return result;
}
