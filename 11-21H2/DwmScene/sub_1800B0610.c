/*
 * XREFs of sub_1800B0610 @ 0x1800B0610
 * Callers:
 *     sub_1800B1CA0 @ 0x1800B1CA0 (sub_1800B1CA0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B0610(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbx
  _QWORD *v5; // rbp
  unsigned int v6; // r14d
  __int64 *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = (unsigned int *)(a1 + 908);
  v5 = (_QWORD *)(a1 + 248);
  v6 = 0;
  v7 = (__int64 *)(a1 + 256);
  do
  {
    if ( *(_BYTE *)(a1 + 1088)
      || sub_1800122D0(v5, v5 - 30)
      || *(v3 - 30) != *(v3 - 45)
      || (result = *v3, v3[15] != (_DWORD)result) )
    {
      v9 = *(v7 - 30);
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v9 = *(v7 - 30);
      }
      v11[0] = *(v7 - 1);
      *(v7 - 1) = *(v7 - 31);
      v10 = *v7;
      *v7 = v9;
      v11[1] = v10;
      sub_180010910((__int64)v11);
      *(v3 - 30) = *(v3 - 45);
      v3[15] = *v3;
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a2 + 144LL))(a2, v5, v6);
    }
    ++v6;
    v5 += 2;
    ++v3;
    v7 += 2;
  }
  while ( v6 < 0xF );
  *(_BYTE *)(a1 + 1088) = 0;
  return result;
}
