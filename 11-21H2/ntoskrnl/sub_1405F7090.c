/*
 * XREFs of sub_1405F7090 @ 0x1405F7090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F5AC @ 0x14035F5AC (sub_14035F5AC.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     sub_1405F7344 @ 0x1405F7344 (sub_1405F7344.c)
 */

void __fastcall sub_1405F7090(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rcx
  unsigned int v4; // esi
  unsigned __int64 v5; // rax
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  unsigned __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v10[3]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]

  v1 = a1 - 1800;
  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  if ( ZwQuerySystemInformation(SystemMemoryUsageInformation, v10, 0x38u, 0LL) >= 0 )
  {
    v3 = 128000LL;
    v4 = 0;
    if ( *(_QWORD *)&v10[0] <= 0x51400000uLL )
      v3 = 15360LL;
    v5 = 3 * (*(_QWORD *)&v10[0] / 0x14000uLL);
    if ( v5 >= v3 )
      v5 = v3;
    v9 = v5;
    do
    {
      v6 = sub_14035F5AC(v1, v4);
      v7 = v6;
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 6023) != 1 )
          sub_1405F7344(v6, &v9);
        v8 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(v1, *(_DWORD *)(v7 + 6016) & 0x3FF);
        sub_1402AD030(v8 + 1);
      }
      ++v4;
    }
    while ( v4 < 0x400 );
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
}
