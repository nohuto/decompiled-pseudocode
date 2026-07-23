/*
 * XREFs of sub_1403B69DC @ 0x1403B69DC
 * Callers:
 *     sub_1407F32E0 @ 0x1407F32E0 (sub_1407F32E0.c)
 *     sub_1408088B0 @ 0x1408088B0 (sub_1408088B0.c)
 *     sub_1408654A0 @ 0x1408654A0 (sub_1408654A0.c)
 *     sub_140997EE0 @ 0x140997EE0 (sub_140997EE0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 */

struct _KTHREAD *__fastcall sub_1403B69DC(int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax
  __int64 v3; // r8
  int *v4; // r9
  int v5; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v6[0] = a1;
  v6[1] = 0;
  v7 = a2;
  if ( byte_140C5AE3C )
  {
    v3 = 1LL;
    if ( a1 == 1 )
    {
      v5 = 0;
      v4 = &v5;
    }
    else
    {
      v4 = 0LL;
      if ( a1 == 10 )
        v3 = 0LL;
      else
        v3 = 2LL;
    }
    ((void (__fastcall *)(__int64, _DWORD *, __int64, int *, int))sub_1407F2AD0)(3LL, v6, v3, v4, v5);
    result = KeGetCurrentThread();
    if ( *((_DWORD *)result + 121) )
      __fastfail(0x20u);
  }
  return result;
}
