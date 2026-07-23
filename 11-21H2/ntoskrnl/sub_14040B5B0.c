/*
 * XREFs of sub_14040B5B0 @ 0x14040B5B0
 * Callers:
 *     sub_14040AEDC @ 0x14040AEDC (sub_14040AEDC.c)
 *     sub_14040AF54 @ 0x14040AF54 (sub_14040AF54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040B5B0(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
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
      v8 = -(result + *(unsigned int *)((char *)a3 + v6));
      *a3++ = v8;
      result = BYTE4(v8) & 1;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
