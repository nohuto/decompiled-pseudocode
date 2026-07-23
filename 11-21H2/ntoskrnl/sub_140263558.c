/*
 * XREFs of sub_140263558 @ 0x140263558
 * Callers:
 *     sub_140265D40 @ 0x140265D40 (sub_140265D40.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 *     sub_140982F64 @ 0x140982F64 (sub_140982F64.c)
 * Callees:
 *     sub_140263644 @ 0x140263644 (sub_140263644.c)
 *     sub_14026367C @ 0x14026367C (sub_14026367C.c)
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

__int64 __fastcall sub_140263558(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  int v4; // edi
  USHORT v5; // ax
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 result; // rax
  _QWORD *v10; // rcx
  _GROUP_AFFINITY v11; // xmm0
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF
  USHORT Count; // [rsp+60h] [rbp+18h] BYREF

  Affinity = 0LL;
  v3 = 0;
  Count = 0;
  v4 = 0;
  if ( word_140D05000 )
  {
    while ( 1 )
    {
      v3 = sub_14026367C();
      KeQueryNodeActiveAffinity(v3, &Affinity, &Count);
      v5 = Count;
      if ( Count )
        break;
      if ( ++v4 >= (unsigned int)(unsigned __int16)word_140D05000 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v5 = 2;
    Count = 2;
  }
  v6 = v5;
  v7 = sub_140263644(v3);
  if ( (unsigned int)v6 > v7 )
    v6 = v7;
  v8 = (unsigned int)v6;
  result = sub_1402828F0(64LL, 48 * v6 + 88, 1834641741LL);
  if ( result )
  {
    if ( (_DWORD)v6 )
    {
      v10 = (_QWORD *)(result + 120);
      do
      {
        v10[1] = v10;
        *v10 = v10;
        v10 += 6;
        --v8;
      }
      while ( v8 );
    }
    v11 = Affinity;
    *(_DWORD *)(result + 8) = v6;
    *(_DWORD *)(result + 24) = v3;
    *(_GROUP_AFFINITY *)(result + 32) = v11;
    *(_DWORD *)(result + 4) = a2;
    *(_DWORD *)(result + 56) = 1;
  }
  return result;
}
