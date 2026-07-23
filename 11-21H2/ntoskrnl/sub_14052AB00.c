/*
 * XREFs of sub_14052AB00 @ 0x14052AB00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14041B0A0 @ 0x14041B0A0 (sub_14041B0A0.c)
 *     sub_14050A55C @ 0x14050A55C (sub_14050A55C.c)
 *     sub_14052AC24 @ 0x14052AC24 (sub_14052AC24.c)
 */

__int64 __fastcall sub_14052AB00(_DWORD *a1, __int64 a2, __int64 a3)
{
  bool v6; // bl
  int v7; // edi
  unsigned __int16 v8; // ax
  int v9; // edx
  int v10; // ebx
  int v11; // edx
  int v12; // ecx

  if ( *(_BYTE *)(a3 + 4) )
    return 3221225659LL;
  v6 = 0;
  if ( *a1 == 45056 )
  {
    v6 = *(_DWORD *)(a2 + 4) == 2;
    v7 = 0;
  }
  else
  {
    v7 = 8;
  }
  v8 = sub_14052AC24(1232LL, 1233LL);
  if ( *(_DWORD *)(a3 + 8) || v6 )
    v9 = v8 & ~(1 << (v7 + *(_BYTE *)(a2 + 4)));
  else
    v9 = v8 | (1 << (v7 + *(_BYTE *)(a2 + 4)));
  sub_14050A55C(0x4D0u, 0x4D1u, v9);
  v10 = (unsigned __int16)sub_14052AC24(33LL, 161LL);
  sub_14041B0A0();
  v11 = v7 + *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(a3 + 12) & 1) != 0 )
    v12 = v10 & ~(1 << v11);
  else
    v12 = v10 | (1 << v11);
  sub_14050A55C(0x21u, 0xA1u, v12);
  sub_14041B0A0();
  return 0LL;
}
