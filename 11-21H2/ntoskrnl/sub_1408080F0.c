/*
 * XREFs of sub_1408080F0 @ 0x1408080F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_14039888C @ 0x14039888C (sub_14039888C.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_140A5179C @ 0x140A5179C (sub_140A5179C.c)
 */

__int64 __fastcall sub_1408080F0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v6; // ebx

  if ( *(_DWORD *)(a1 + 16) == 3 )
  {
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
    v6 = 0;
    if ( sub_1407F0F98() )
    {
      *(_DWORD *)a2 = 0;
    }
    else
    {
      if ( !sub_14039888C() || (unsigned __int8)sub_140A5179C() || dword_140C232CC || *a4 != 5 )
      {
        *(_DWORD *)a2 = 4;
        *(_DWORD *)(a2 + 28) = *a4;
      }
      else
      {
        *(_DWORD *)a2 = 1;
      }
      *(_BYTE *)(a2 + 24) = 1;
    }
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v6;
}
