/*
 * XREFs of sub_140A8CDBC @ 0x140A8CDBC
 * Callers:
 *     sub_140A7FE00 @ 0x140A7FE00 (sub_140A7FE00.c)
 * Callees:
 *     sub_140A8D338 @ 0x140A8D338 (sub_140A8D338.c)
 *     sub_140AA5BCC @ 0x140AA5BCC (sub_140AA5BCC.c)
 */

__int64 __fastcall sub_140A8CDBC(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax

  v4 = 0LL;
  if ( !dword_140D4E000 )
  {
    v6 = sub_140A8D338();
    if ( v6 )
    {
      v4 = *(_QWORD *)v6;
      if ( a4 )
      {
        *(_OWORD *)(v6 + 120) = *a4;
        *(_OWORD *)(v6 + 136) = a4[1];
        *(_OWORD *)(v6 + 152) = a4[2];
        *(_OWORD *)(v6 + 168) = a4[3];
      }
      else
      {
        *(_QWORD *)(v6 + 120) = 0LL;
      }
      sub_140AA5BCC(v6);
    }
  }
  return v4;
}
