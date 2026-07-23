/*
 * XREFs of sub_140A61640 @ 0x140A61640
 * Callers:
 *     sub_140A53718 @ 0x140A53718 (sub_140A53718.c)
 * Callees:
 *     sub_14051BC80 @ 0x14051BC80 (sub_14051BC80.c)
 */

char sub_140A61640()
{
  __int64 i; // rdi
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned int v3; // ebp
  int v4; // esi
  __int64 v5; // rax

  for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; ; i = *(_QWORD *)(i + 184) )
  {
    if ( !i )
      return 0;
    v1 = *(_QWORD *)(i + 172);
    if ( !byte_140C549B0 )
    {
      v2 = __readmsr(0x179u);
      byte_140C549B0 = v2;
    }
    v3 = (unsigned __int8)byte_140C549B0;
    v4 = 0;
    if ( byte_140C549B0 )
      break;
LABEL_8:
    ;
  }
  while ( 1 )
  {
    v5 = sub_14051BC80(v1, v4);
    if ( v5 < 0 && (v5 & 0x6000000000000000LL) == 0x4000000000000000LL )
      return 1;
    if ( ++v4 >= v3 )
      goto LABEL_8;
  }
}
