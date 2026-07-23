/*
 * XREFs of sub_140A8C08C @ 0x140A8C08C
 * Callers:
 *     sub_140A805EC @ 0x140A805EC (sub_140A805EC.c)
 * Callees:
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_140A8B6B8 @ 0x140A8B6B8 (sub_140A8B6B8.c)
 *     sub_140A90EA0 @ 0x140A90EA0 (sub_140A90EA0.c)
 *     sub_140A9120C @ 0x140A9120C (sub_140A9120C.c)
 *     sub_140AA5A48 @ 0x140AA5A48 (sub_140AA5A48.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A8C08C(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r12
  int v12; // r10d
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  result = sub_140AA5A48(a1);
  v8 = result;
  if ( result )
  {
    *(_BYTE *)(result + 61) = CurrentIrql;
    v9 = 0LL;
    *(_BYTE *)(result + 60) = CurrentIrql;
    v10 = *(_QWORD *)(result + 240);
    *(_QWORD *)a3 = v10;
    *(_QWORD *)(a3 + 8) = result;
    v11 = *(_QWORD *)(a1 + 184);
    if ( v10 )
    {
      if ( (*(_DWORD *)(result + 56) & 0x10) != 0 )
        sub_1405FFB44(0x209u, *(const void **)(a3 + 32), (const void *)a1);
      *(_BYTE *)(v8 + 185) = a2;
      if ( *(_QWORD *)(v8 + 216) && *(int *)(v8 + 56) >= 0 )
      {
        v9 = sub_140A9120C(a1);
        *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
      }
      *(_QWORD *)(v10 + 48) = 0LL;
      v12 = *(unsigned __int8 *)(v8 + 186) - *(char *)(a1 + 67);
      *(_DWORD *)(a3 + 20) = v12;
      sub_140A8B6B8(v10 + 80, *(_BYTE *)(a1 + 67), v11, v11 + 72LL * v12, v12, 0, 0, &v13);
      result = sub_140AA5BCC(v8);
      if ( v9 )
        return sub_140A90EA0(v9);
    }
    else
    {
      return sub_140AA5BCC(result);
    }
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
  }
  return result;
}
