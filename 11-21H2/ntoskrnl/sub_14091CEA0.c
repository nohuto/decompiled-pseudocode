/*
 * XREFs of sub_14091CEA0 @ 0x14091CEA0
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_14090E310 @ 0x14090E310 (sub_14090E310.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14091D12C @ 0x14091D12C (sub_14091D12C.c)
 */

NTSTATUS __fastcall sub_14091CEA0(unsigned int a1)
{
  NTSTATUS result; // eax
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  result = _InterlockedIncrement(&dword_140C48E00[a1]);
  if ( result == 0x7FFFFFFF && _InterlockedExchange(&dword_140C48E00[a1], 0) )
    result = sub_14091D12C(a1);
  if ( (unsigned int)dword_140C03868 > 5 )
  {
    v7 = 0;
    v5 = (int *)&v3;
    v3 = a1;
    v6 = 4;
    return sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&byte_14002A00F, 0LL, 0LL, 3u, &v4);
  }
  return result;
}
