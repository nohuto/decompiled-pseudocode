/*
 * XREFs of sub_14040B65C @ 0x14040B65C
 * Callers:
 *     sub_14040AF54 @ 0x14040AF54 (sub_14040AF54.c)
 *     sub_14040B064 @ 0x14040B064 (sub_14040B064.c)
 *     sub_14040C7CC @ 0x14040C7CC (sub_14040C7CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040B65C(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r9d
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // rcx

  v4 = 16 * a4;
  result = a2;
  if ( v4 )
  {
    v6 = a1 - (_QWORD)a3;
    v7 = v4;
    do
    {
      v8 = *(unsigned int *)((char *)a3 + v6) - result;
      *a3++ = v8;
      result = BYTE4(v8) & 1;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
