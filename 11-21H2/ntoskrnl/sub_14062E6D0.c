/*
 * XREFs of sub_14062E6D0 @ 0x14062E6D0
 * Callers:
 *     sub_1402F8870 @ 0x1402F8870 (sub_1402F8870.c)
 *     sub_14033CBF0 @ 0x14033CBF0 (sub_14033CBF0.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403EB000 @ 0x1403EB000 (sub_1403EB000.c)
 */

void __fastcall sub_14062E6D0(struct _KTHREAD *(__fastcall *a1)(__int64 a1), unsigned __int16 a2)
{
  struct _KTHREAD *(__fastcall *v3)(__int64); // [rsp+30h] [rbp-28h] BYREF
  struct _KTHREAD *(__fastcall **v4)(__int64); // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v3 = a1;
  if ( a1 != sub_1402F8870 && !sub_1403EB000((__int64 (__fastcall *)())a1) )
  {
    v6 = 0;
    v4 = &v3;
    v5 = 8;
    sub_14035EDE4((__int64)&v4, 1u, 0x48000000u, a2, 0x11501902u);
  }
}
