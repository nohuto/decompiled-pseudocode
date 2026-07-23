/*
 * XREFs of sub_14040B17C @ 0x14040B17C
 * Callers:
 *     sub_14040C7CC @ 0x14040C7CC (sub_14040C7CC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14040B17C(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r9d
  unsigned __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v4 = 16 * a4;
  result = a2;
  if ( v4 )
  {
    v6 = a1 - (_QWORD)a3;
    v7 = v4;
    do
    {
      v8 = *(unsigned int *)((char *)a3 + v6) + result;
      *a3++ = v8;
      result = HIDWORD(v8);
      --v7;
    }
    while ( v7 );
  }
  return result;
}
