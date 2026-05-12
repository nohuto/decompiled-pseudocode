/*
 * XREFs of sub_1C004E5E0 @ 0x1C004E5E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0012E40 @ 0x1C0012E40 (sub_1C0012E40.c)
 *     sub_1C0044244 @ 0x1C0044244 (sub_1C0044244.c)
 *     sub_1C004C30C @ 0x1C004C30C (sub_1C004C30C.c)
 */

NTSTATUS __fastcall sub_1C004E5E0(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // esi
  _QWORD **v6; // rdi
  unsigned __int64 v7; // rcx
  bool v8; // zf
  _QWORD *v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v3 = a3;
  if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
    sub_1C0044244(a1, &stru_1C0089078, a3, **(_QWORD **)(a1 + 4896), *(_DWORD *)(a1 + 56), a2, a3);
  v6 = (_QWORD **)(a1 + 4896);
  if ( v3 )
  {
    v8 = (*(_BYTE *)(a1 + 108) & 1) == 0;
    v9 = *v6;
    *(_QWORD *)(a1 + 5200) = MEMORY[0xFFFFF78000000008];
    if ( v8 )
      *((_DWORD *)v9 + 5) &= ~0x10u;
    else
      *((_DWORD *)v9 + 5) |= 0x10u;
  }
  else
  {
    ++*(_DWORD *)(a1 + 5236);
    if ( *(_QWORD *)(a1 + 5200) )
    {
      if ( (*((_DWORD *)*v6 + 5) & 0x10) != 0 || (*(_BYTE *)(a1 + 108) & 1) != 0 )
      {
        v7 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 5200);
        *(_QWORD *)(a1 + 5208) += v7 / 0x2710;
        if ( v7 / 0x2710 >= 0x2710 )
          ++*(_DWORD *)(a1 + 5244);
      }
      *(_QWORD *)(a1 + 5200) = 0LL;
    }
  }
  *((_DWORD *)*v6 + 4) = v3;
  if ( (unsigned int)sub_1C0007798(a1, 9) )
  {
    if ( *(_DWORD *)(a1 + 96) && *(_QWORD *)(a1 + 4952) )
      sub_1C0012E40(a1);
    sub_1C004C30C(a1);
  }
  result = PoFxCompleteIdleState(**v6, a2);
  if ( byte_1C0093BE8 )
  {
    if ( (byte_1C0093A02 & 0x10) != 0 )
    {
      LODWORD(v15) = v3;
      LODWORD(v14) = a2;
      LODWORD(v13) = *(_DWORD *)(a1 + 56);
      return sub_1C0044244(v11, &stru_1C0088FD8, v12, **v6, v13, v14, v15);
    }
  }
  return result;
}
