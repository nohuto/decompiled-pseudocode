/*
 * XREFs of sub_1C00A0174 @ 0x1C00A0174
 * Callers:
 *     sub_1C00A0330 @ 0x1C00A0330 (sub_1C00A0330.c)
 *     sub_1C00B5078 @ 0x1C00B5078 (sub_1C00B5078.c)
 * Callees:
 *     sub_1C0024588 @ 0x1C0024588 (sub_1C0024588.c)
 *     sub_1C00A0228 @ 0x1C00A0228 (sub_1C00A0228.c)
 */

_QWORD *sub_1C00A0174()
{
  int **v0; // rdx
  int v1; // r9d
  int v2; // r8d
  int v3; // eax
  int **i; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // rbx

  v0 = (int **)sub_1C0024588(&off_1C0092D18);
  if ( v0 )
  {
    v1 = 0;
    do
    {
      v2 = **v0;
      if ( (v2 & 0x200) != 0 )
      {
        if ( (v2 & 0x180) != 0 )
          v3 = (**v0 & 0x180) == 256;
        else
          v3 = *((_BYTE *)v0 + 31) != 0;
        _InterlockedXor(*v0, v1 & 0xFFFFFFBF | (v3 << 6) ^ **v0 & 0x40);
      }
      v0 = (int **)sub_1C0024588(v0 + 7);
    }
    while ( v0 );
  }
  for ( i = &off_1C0092D18; ; i = (int **)(v6 + 7) )
  {
    result = sub_1C0024588(i);
    v6 = result;
    if ( !result )
      break;
    sub_1C00A0228(*result, result);
  }
  return result;
}
