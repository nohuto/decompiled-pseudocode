/*
 * XREFs of sub_1402D43F4 @ 0x1402D43F4
 * Callers:
 *     sub_1402D4358 @ 0x1402D4358 (sub_1402D4358.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045FBE2 @ 0x14045FBE2 (sub_14045FBE2.c)
 */

void __fastcall sub_1402D43F4(unsigned __int64 a1)
{
  __int64 v1; // r12
  char v3; // r14
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  _QWORD v14[3]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v15[2]; // [rsp+48h] [rbp-50h] BYREF

  v1 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 96);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v4 = qword_140D06CC8;
  v5 = 0LL;
  v6 = qword_140D06E28 ^ _byteswap_uint64(a1 ^ __ROL8__(*(_QWORD *)(a1 + 112) ^ qword_140D06CC8, qword_140D06CC8));
  if ( v6 )
  {
    v5 = qword_140D06E28 ^ _byteswap_uint64(a1 ^ __ROL8__(*(_QWORD *)(a1 + 120) ^ qword_140D06CC8, qword_140D06CC8));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
      *(_DWORD *)(v8 + 20) |= v4;
    }
    if ( v3 )
      sub_140223A20((unsigned __int64)v15, 0x40020000uLL);
    sub_14042A5E0(v5, v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v3 )
  {
    v14[1] = v6;
    v14[2] = 0x7E35C6C7F3DD7277LL
           * (qword_140D06CC8 ^ __ROR8__(a1 ^ _byteswap_uint64(v5 ^ qword_140D06E28), qword_140D06CC8));
    v14[0] = 0x7E35C6C7F3DD7277LL
           * (qword_140D06CC8 ^ __ROR8__(
                                  qword_140D06E28 ^ _byteswap_uint64(a1 ^ qword_140D06E28) ^ _byteswap_uint64(a1 ^ __ROL8__(v1 ^ qword_140D06CC8, qword_140D06CC8)),
                                  qword_140D06CC8));
    if ( !v6 )
      sub_140223A20((unsigned __int64)v15, 0x40020000uLL);
    sub_14045FBE2(3948, 1073872896, (unsigned int)v14, 24, 4197890, (__int64)v15);
  }
}
