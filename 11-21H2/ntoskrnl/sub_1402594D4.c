/*
 * XREFs of sub_1402594D4 @ 0x1402594D4
 * Callers:
 *     sub_140259480 @ 0x140259480 (sub_140259480.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void __fastcall sub_1402594D4(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int *v3; // rax
  bool v4; // zf

  v2 = (unsigned int)(dword_140E00020[0] - 1);
  if ( dword_140E00020[0] == 1 )
  {
LABEL_5:
    if ( !(_DWORD)v2 )
      return;
  }
  else
  {
    v3 = &dword_140E00020[6 * v2 + 6];
    while ( a2 != *(_QWORD *)v3 )
    {
      v3 -= 6;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
      if ( v4 )
        goto LABEL_5;
    }
  }
  _InterlockedIncrement(&dword_140E00028);
  if ( dword_140E00020[0] != 2 )
    memmove(
      &dword_140E00020[4 * v2 + 4 + 2 * v2],
      &dword_140E00020[4 * (unsigned int)(v2 + 1) + 4 + 2 * (unsigned int)(v2 + 1)],
      24LL * (unsigned int)(dword_140E00020[0] - v2 - 1));
  --dword_140E00020[0];
  _InterlockedIncrement(&dword_140E00028);
}
