/*
 * XREFs of sub_140281380 @ 0x140281380
 * Callers:
 *     sub_140280D70 @ 0x140280D70 (sub_140280D70.c)
 *     sub_140280F60 @ 0x140280F60 (sub_140280F60.c)
 *     sub_14045F8C2 @ 0x14045F8C2 (sub_14045F8C2.c)
 *     sub_14062D430 @ 0x14062D430 (sub_14062D430.c)
 *     sub_14062D4BC @ 0x14062D4BC (sub_14062D4BC.c)
 *     sub_14062D548 @ 0x14062D548 (sub_14062D548.c)
 *     sub_14062E258 @ 0x14062E258 (sub_14062E258.c)
 *     sub_14062F380 @ 0x14062F380 (sub_14062F380.c)
 *     sub_14062FB50 @ 0x14062FB50 (sub_14062FB50.c)
 *     sub_140630050 @ 0x140630050 (sub_140630050.c)
 *     sub_140630340 @ 0x140630340 (sub_140630340.c)
 *     sub_1406303E0 @ 0x1406303E0 (sub_1406303E0.c)
 *     sub_1406F653C @ 0x1406F653C (sub_1406F653C.c)
 *     sub_1406F7A68 @ 0x1406F7A68 (sub_1406F7A68.c)
 *     sub_14070AE08 @ 0x14070AE08 (sub_14070AE08.c)
 *     sub_1409E32A4 @ 0x1409E32A4 (sub_1409E32A4.c)
 *     sub_1409E3F78 @ 0x1409E3F78 (sub_1409E3F78.c)
 *     sub_1409E4084 @ 0x1409E4084 (sub_1409E4084.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 */

__int64 __fastcall sub_140281380(__int64 a1, int a2, int a3, unsigned int a4, __int16 a5, int a6)
{
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // esi
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx

  result = qword_140D05008;
  v10 = a4;
  v11 = *(_DWORD *)(qword_140D05008 + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    result = 32LL * (unsigned int)v13;
    v14 = result + qword_140D05008 + 4284;
    if ( v14 )
    {
      result = v10 >> 29;
      if ( ((unsigned int)v10 & *(_DWORD *)(v14 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
        result = sub_1402AB170(a2, qword_140D05008, *(unsigned __int8 *)(qword_140D05008 + 2 * v13 + 4232), a3, a5, a6);
    }
  }
  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 1464);
    v15 = *(_QWORD *)(result + 864);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 4248);
      for ( i = !_BitScanForward(&v17, v16); !i; i = !_BitScanForward(&v17, v16) )
      {
        v18 = v17;
        v16 &= v16 - 1;
        result = 32LL * v17;
        v19 = result + v15 + 4284;
        if ( v19 )
        {
          result = v10 >> 29;
          if ( ((unsigned int)v10 & *(_DWORD *)(v19 + 4 * (v10 >> 29)) & 0x1FFFFFFF) != 0 )
            result = sub_1402AB170(a2, v15, *(unsigned __int8 *)(v15 + 2 * v18 + 4232), a3, a5, a6);
        }
      }
    }
  }
  return result;
}
