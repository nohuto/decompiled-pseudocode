/*
 * XREFs of sub_1403426C8 @ 0x1403426C8
 * Callers:
 *     sub_140248720 @ 0x140248720 (sub_140248720.c)
 *     sub_140342694 @ 0x140342694 (sub_140342694.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403426C8(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 33968);
  v3 = *(_QWORD *)(a1 + 33976);
  if ( v2 && v3 )
  {
    if ( *(_BYTE *)(v3 + 100) )
    {
      v4 = *(_DWORD *)(v3 + 116);
      if ( !a2 )
        return v4;
    }
    else
    {
      v4 = *(_DWORD *)(v3 + 72);
    }
    if ( v4 >= *(_DWORD *)(v2 + 512) )
      return *(unsigned int *)(v2 + 512);
  }
  else
  {
    return 100;
  }
  return v4;
}
