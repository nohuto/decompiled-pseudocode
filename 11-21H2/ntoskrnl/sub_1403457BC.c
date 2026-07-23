/*
 * XREFs of sub_1403457BC @ 0x1403457BC
 * Callers:
 *     sub_1402F332C @ 0x1402F332C (sub_1402F332C.c)
 *     sub_1403000B0 @ 0x1403000B0 (sub_1403000B0.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140344A30 @ 0x140344A30 (sub_140344A30.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_14035CAD8 @ 0x14035CAD8 (sub_14035CAD8.c)
 * Callees:
 *     sub_14062E848 @ 0x14062E848 (sub_14062E848.c)
 */

unsigned __int64 __fastcall sub_1403457BC(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  int v5; // edx
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rbx

  result = (unsigned int)dword_140D068EC;
  if ( (dword_140D068EC & 2) != 0 )
  {
    result = *(_QWORD *)(a2 + 35000);
    if ( result )
    {
      if ( *(_QWORD *)(a1 + 35000) )
      {
        if ( a1 != a2 )
        {
          v5 = *(_DWORD *)result;
          result = *(_DWORD *)result & 0x40000;
          if ( (v5 & 0x100000) != 0 || (_DWORD)result && (result = (unsigned __int8)v5, (unsigned __int8)v5 < a3) )
          {
            v6 = byte_140D05016 == 0;
            v7 = *(_QWORD *)(a1 + 35000);
            *(_DWORD *)(v7 + 12) = 2;
            v8 = *(unsigned int *)(a2 + 36);
            if ( v6 )
              LODWORD(v8) = (unsigned __int8)byte_140D0CBD0[2 * (unsigned int)v8 + 1] | ((unsigned __int8)byte_140D0CBD0[2 * v8] << 6);
            *(_DWORD *)(v7 + 8) = v8;
            if ( (BYTE4(xmmword_140D06910) & 0x20) != 0 )
              sub_14062E848(*(unsigned int *)(a2 + 36), 2LL);
            result = (unsigned int)v8;
            __writemsr(0x400000C2u, (unsigned int)v8);
          }
        }
      }
    }
  }
  return result;
}
