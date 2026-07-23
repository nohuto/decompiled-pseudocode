/*
 * XREFs of sub_140B311E0 @ 0x140B311E0
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140B311E0(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 35000) )
    goto LABEL_2;
  if ( dword_140D06C18 == 1 )
  {
    dword_140D06BA0 = 1;
LABEL_9:
    _interlockedbittestandset(*(volatile signed __int32 **)(a1 + 24), 0x16u);
    goto LABEL_3;
  }
  v1 = 1;
  if ( dword_140D06C18 != 2 )
  {
LABEL_2:
    dword_140D06BA0 = v1;
    if ( !v1 )
      goto LABEL_3;
    goto LABEL_9;
  }
  dword_140D06BA0 = 0;
LABEL_3:
  result = (unsigned int)(dword_140D0504C - 1);
  if ( (unsigned int)result > 0x1E )
    dword_140D0504C = 1;
  if ( *(_QWORD *)(a1 + 35000) )
    dword_140D06B08 |= 1u;
  return result;
}
