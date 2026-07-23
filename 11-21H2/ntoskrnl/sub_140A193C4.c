/*
 * XREFs of sub_140A193C4 @ 0x140A193C4
 * Callers:
 *     sub_140A1530C @ 0x140A1530C (sub_140A1530C.c)
 *     sub_140A188C8 @ 0x140A188C8 (sub_140A188C8.c)
 *     sub_140A18CD0 @ 0x140A18CD0 (sub_140A18CD0.c)
 *     sub_140A194A0 @ 0x140A194A0 (sub_140A194A0.c)
 *     sub_140A19B28 @ 0x140A19B28 (sub_140A19B28.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_140A193C4(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rax

  if ( *(_DWORD *)(a2 + 64) == 6 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = v5 + v4;
    v7 = v5 + 264;
    if ( *(_QWORD *)(a2 + 24) < v7 || *(_QWORD *)(a2 + 40) < v7 )
    {
      v3 = -1073741701;
      sub_1406E0C3C(1LL, (__int64)"AslpFileGetImageNtHeader");
    }
    else
    {
      *a1 = v6;
      return 0;
    }
  }
  else
  {
    v3 = -1073741637;
    sub_1406E0C3C(1LL, (__int64)"AslpFileGetImageNtHeader");
  }
  return v3;
}
