/*
 * XREFs of sub_1800C88CC @ 0x1800C88CC
 * Callers:
 *     sub_1800C891C @ 0x1800C891C (sub_1800C891C.c)
 *     sub_1800C8A10 @ 0x1800C8A10 (sub_1800C8A10.c)
 *     sub_1800CA060 @ 0x1800CA060 (sub_1800CA060.c)
 *     sub_1800CA57C @ 0x1800CA57C (sub_1800CA57C.c)
 *     sub_1800CB4F8 @ 0x1800CB4F8 (sub_1800CB4F8.c)
 *     sub_1800CB548 @ 0x1800CB548 (sub_1800CB548.c)
 *     sub_1800D8AEC @ 0x1800D8AEC (sub_1800D8AEC.c)
 *     sub_1800D971C @ 0x1800D971C (sub_1800D971C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C88CC(__int64 *a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned int v5; // r8d
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_DWORD *)v4 + 8) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
