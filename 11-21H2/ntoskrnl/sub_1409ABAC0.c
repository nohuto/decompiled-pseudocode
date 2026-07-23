/*
 * XREFs of sub_1409ABAC0 @ 0x1409ABAC0
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x140251C40 (PsDereferenceSiloContext.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PsInsertSiloContext @ 0x140692A50 (PsInsertSiloContext.c)
 *     PsCreateSiloContext @ 0x140692CD0 (PsCreateSiloContext.c)
 */

__int64 __fastcall sub_1409ABAC0(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // r9
  _WORD *v5; // rdx
  __int64 result; // rax
  _WORD *v7; // rdi
  void *v8; // rcx
  unsigned int inserted; // ebx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v3 = *a2;
  if ( (unsigned int)v3 < 8 )
    return 3221225485LL;
  if ( (unsigned __int64)(v3 - 2) > 0x208 )
    return 3221225485LL;
  v5 = (_WORD *)*((_QWORD *)a2 + 1);
  if ( (unsigned __int16)(*v5 - 65) > 0x19u
    || v5[1] != 58
    || v5[2] != 92
    || v5[((unsigned __int64)(unsigned int)v3 >> 1) - 1] == 92 )
  {
    return 3221225485LL;
  }
  result = PsCreateSiloContext(a1, (unsigned int)(v3 + 16), 1, 0LL, &v10);
  if ( (int)result >= 0 )
  {
    v7 = (_WORD *)v10;
    v8 = (void *)(v10 + 16);
    *(_QWORD *)(v10 + 8) = v10 + 16;
    *v7 = *a2;
    v7[1] = *a2;
    memmove(v8, *((const void **)a2 + 1), *a2);
    inserted = PsInsertSiloContext(a1, dword_140D05140, (__int64)v7);
    PsDereferenceSiloContext(v7);
    return inserted;
  }
  return result;
}
