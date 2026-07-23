/*
 * XREFs of sub_140709200 @ 0x140709200
 * Callers:
 *     sub_1407091D8 @ 0x1407091D8 (sub_1407091D8.c)
 * Callees:
 *     sub_140700A40 @ 0x140700A40 (sub_140700A40.c)
 */

__int64 __fastcall sub_140709200(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v5; // rbp
  ULONG64 v6; // r14
  int v7; // ebx
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // edx

  v3 = *a1;
  v5 = 2 * (a2 >> 4);
  v6 = 2 * ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(*a1 + 24), -1LL, -1LL) >> 4);
  v7 = 0;
  do
  {
    v8 = qword_140C4F3D8;
    if ( !v7 && (*(_BYTE *)(v3 + 14) & 0x40) != 0 )
    {
      v10 = 0;
      if ( *(_WORD *)(*(_QWORD *)(v3 + 56) + 48LL) != 332 )
        v10 = -1;
      v8 = qword_140C4F370[8 * (unsigned __int64)v10];
    }
    result = sub_140700A40(v8, a3, v5, v6);
    if ( (int)result < 0 )
      break;
    ++v7;
    if ( !a3 )
      break;
  }
  while ( v7 < 1 );
  return result;
}
