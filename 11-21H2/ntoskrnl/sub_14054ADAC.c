/*
 * XREFs of sub_14054ADAC @ 0x14054ADAC
 * Callers:
 *     sub_14054A610 @ 0x14054A610 (sub_14054A610.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14054ADAC(__int64 a1, char a2)
{
  char v2; // r8
  __int64 v3; // rax

  v2 = 0;
  if ( (!a2 || (dword_140D0688C & 2) != 0) && byte_140D0194C )
  {
    v2 = 1;
    if ( a2 )
    {
      *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140C48920 >> 12;
      v3 = (unsigned int)dword_140C4891C;
      *(_DWORD *)(a1 + 8) |= 0x80000022;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = (unsigned __int64)qword_140C48910 >> 12;
      v3 = (unsigned int)dword_140C48918;
      *(_DWORD *)(a1 + 8) |= 0x80000002;
    }
    *(_QWORD *)(a1 + 24) = v3;
  }
  return v2;
}
