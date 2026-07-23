/*
 * XREFs of sub_140A03480 @ 0x140A03480
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A0318C @ 0x140A0318C (sub_140A0318C.c)
 *     sub_140A03A08 @ 0x140A03A08 (sub_140A03A08.c)
 */

__int64 __fastcall sub_140A03480(__int64 a1, __int64 a2)
{
  int v3; // esi
  unsigned int v4; // edi
  int v5; // edx
  unsigned int v6; // eax
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  v3 = a1;
  v4 = 0;
  if ( sub_140A0318C(a1, *(_DWORD *)(a2 + 48), a2 + 16, a2 + 32) == 1 )
  {
    LOBYTE(v5) = *(_BYTE *)(a2 + 12);
    v6 = sub_140A03A08(v3, v5, *(_DWORD *)(a2 + 8), *(_QWORD *)a2, a2 + 56, (__int64)&v8);
    v4 = v6;
    if ( !v6 || v6 == -1073741820 )
    {
      ++*(_DWORD *)(a2 + 52);
      if ( !v6 )
        *(_QWORD *)a2 += v8;
      return 0;
    }
  }
  return v4;
}
