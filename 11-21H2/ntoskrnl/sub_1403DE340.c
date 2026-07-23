/*
 * XREFs of sub_1403DE340 @ 0x1403DE340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DE340(int a1)
{
  unsigned int v1; // r8d
  __int64 *v3; // r10
  __int64 v4; // r11
  __int64 v5; // rax
  unsigned int v6; // edx

  if ( a1 == -1 )
  {
    return (unsigned int)dword_140C4A0DC;
  }
  else
  {
    v1 = 0;
    if ( (_DWORD)dword_140C4A0DC )
    {
      v3 = (__int64 *)qword_140C4ABF0;
      v4 = (unsigned int)dword_140C4A0DC;
      do
      {
        v5 = *v3;
        v6 = v1 + 1;
        ++v3;
        if ( a1 != *(_DWORD *)(v5 + 24) )
          v6 = v1;
        v1 = v6;
        --v4;
      }
      while ( v4 );
    }
  }
  return v1;
}
