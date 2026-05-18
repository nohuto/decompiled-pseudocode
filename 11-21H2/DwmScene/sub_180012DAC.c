/*
 * XREFs of sub_180012DAC @ 0x180012DAC
 * Callers:
 *     sub_180017788 @ 0x180017788 (sub_180017788.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122E4 @ 0x1800122E4 (sub_1800122E4.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180040B98 @ 0x180040B98 (sub_180040B98.c)
 *     sub_18004883C @ 0x18004883C (sub_18004883C.c)
 *     sub_180048848 @ 0x180048848 (sub_180048848.c)
 *     sub_180048858 @ 0x180048858 (sub_180048858.c)
 *     sub_180048864 @ 0x180048864 (sub_180048864.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180012DAC(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rcx
  char v5; // di
  __int64 v8; // rax
  int v9; // ebx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  _QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v22[3]; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 48) = a2;
  v4 = a3[1];
  v5 = 0;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a3[1];
  }
  v20[0] = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *a3;
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  v20[1] = v8;
  sub_180010910((__int64)v20);
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 != 1 )
        v10 = 0;
    }
    else
    {
      v10 = 2;
    }
    v11 = sub_180040B98(*a3);
    v12 = sub_180036808(v11, 1LL);
    v13 = sub_1800122E4(*(_QWORD *)(a1 + 16), v22);
    v14 = *v13;
    v15 = v13[1];
    *v13 = 0LL;
    v13[1] = 0LL;
    v16 = *(_QWORD *)(a1 + 40);
    v21[0] = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v14;
    v21[1] = v16;
    *(_QWORD *)(a1 + 40) = v15;
    sub_180010910((__int64)v21);
    sub_180010910((__int64)v22);
    sub_180048864(*(_QWORD *)(a1 + 32), v10);
    sub_180048848(*(_QWORD *)(a1 + 32), 1000LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 72LL) = 1;
    sub_18004883C(*(_QWORD *)(a1 + 32), 3LL);
    v17 = *(_QWORD *)(a1 + 32);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v12 + 64LL))(
           v12,
           &qword_1801F8CF8,
           0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v12 + 64LL))(
           v12,
           &qword_1801F90B8,
           0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v12 + 64LL))(
           v12,
           &qword_1801F9478,
           0LL) )
    {
      v5 = 1;
    }
    LOBYTE(v18) = v5;
    sub_180048858(v17, v18);
  }
  return 0LL;
}
