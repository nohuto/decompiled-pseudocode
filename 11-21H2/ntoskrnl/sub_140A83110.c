/*
 * XREFs of sub_140A83110 @ 0x140A83110
 * Callers:
 *     sub_140A83400 @ 0x140A83400 (sub_140A83400.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140A83110(int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  __int64 v5; // rdx

  if ( a2 )
  {
    *(_DWORD *)(a2 + 16) = 1;
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 44) = 0;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_OWORD *)(a2 + 24) = xmmword_140A760E8;
  }
  result = 56LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a2 + 8) = 56;
      *(_WORD *)(a2 + 56) = stru_140D58B40.Length;
      *(_WORD *)(a2 + 58) = stru_140D58B40.Length;
      *(_QWORD *)(a2 + 64) = a2 + 72;
      memmove((void *)(a2 + 72), stru_140D58B40.Buffer, stru_140D58B40.Length);
    }
    v4 = (stru_140D58B40.Length + 73) & 0xFFFFFFFE;
    if ( a2 )
    {
      *(_DWORD *)(a2 + 12) = v4;
      v5 = a2 + v4;
      *(_WORD *)v5 = stru_140D58B50.Length;
      *(_WORD *)(v5 + 2) = stru_140D58B50.Length;
      *(_QWORD *)(v5 + 8) = v5 + 16;
      memmove((void *)(v5 + 16), stru_140D58B50.Buffer, stru_140D58B50.Length);
    }
    result = v4 + stru_140D58B50.Length + 16;
  }
  if ( a2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = result;
  }
  return result;
}
