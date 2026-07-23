/*
 * XREFs of sub_140883086 @ 0x140883086
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     sub_1409E4C24 @ 0x1409E4C24 (sub_1409E4C24.c)
 * Callees:
 *     sub_1407969D0 @ 0x1407969D0 (sub_1407969D0.c)
 */

__int64 __fastcall sub_140883086(__int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v7; // ebx
  unsigned int v10; // edi
  signed __int64 *v11; // r10
  __int64 v12; // rax
  unsigned int v13; // eax

  v7 = 0;
  v10 = 0;
  v11 = sub_1407969D0(a1, 0LL, a2);
  if ( v11 )
  {
    while ( 1 )
    {
      if ( a2 )
        goto LABEL_6;
      v12 = v11[5] - 0x4C8E042A3595AB5CLL;
      if ( v11[5] == 0x4C8E042A3595AB5CLL )
        v12 = v11[6] + 0x4E4E0164FAD2BD47LL;
      if ( v12 )
      {
LABEL_6:
        if ( ++v10 > 0xFFFFFFF )
        {
          v7 = -2147483643;
          *a5 = v10;
          return v7;
        }
        if ( v10 <= a4 )
          *(_OWORD *)(a3 + 16LL * (v10 - 1)) = *(_OWORD *)(v11 + 5);
      }
      v11 = sub_1407969D0(a1, (signed __int64 **)v11, a2);
      if ( !v11 )
      {
        v13 = v10;
        goto LABEL_13;
      }
    }
  }
  v13 = 0;
LABEL_13:
  *a5 = v13;
  if ( v10 > a4 )
    return (unsigned int)-1073741789;
  return v7;
}
