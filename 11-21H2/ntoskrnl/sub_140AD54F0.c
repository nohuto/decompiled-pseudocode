/*
 * XREFs of sub_140AD54F0 @ 0x140AD54F0
 * Callers:
 *     sub_140AD3010 @ 0x140AD3010 (sub_140AD3010.c)
 * Callees:
 *     <none>
 */

unsigned __int64 sub_140AD54F0()
{
  unsigned __int64 v0; // rax
  unsigned int v1; // ecx
  __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v0 = __readmsr(0x179u);
  if ( (_BYTE)v0 )
  {
    v1 = 1025;
    v2 = (unsigned __int8)v0;
    do
    {
      __writemsr(v1, 0LL);
      v1 += 4;
      --v2;
    }
    while ( v2 );
  }
  v3 = __readcr4();
  result = v3 | 0x40;
  __writecr4(result);
  return result;
}
