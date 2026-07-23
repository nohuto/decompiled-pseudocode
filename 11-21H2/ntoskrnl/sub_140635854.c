/*
 * XREFs of sub_140635854 @ 0x140635854
 * Callers:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     sub_1403AB658 @ 0x1403AB658 (sub_1403AB658.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

struct _KPRCB *__fastcall sub_140635854(__int64 a1, _QWORD *a2, struct _KTHREAD *a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r10
  struct _KPRCB *result; // rax
  _QWORD *v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+34h] [rbp-34h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]

  v13 = 0;
  v11 = 0LL;
  CurrentThread = KeGetCurrentThread();
  result = KeGetCurrentPrcb();
  if ( *((struct _KTHREAD **)result + 3) != CurrentThread && (a4 & 0x1800) != 0 )
  {
    v7[0] = a1;
    v6 = *(_QWORD **)(a1 + 1032);
    v12 = a4;
    if ( !a3 )
      a3 = CurrentThread;
    v8 = *((_DWORD *)a3 + 306);
    v9 = *((_DWORD *)a3 + 308);
    v7[1] = *a2;
    v10 = v6[1];
    return (struct _KPRCB *)sub_14042A5E0(*v6, v7);
  }
  return result;
}
