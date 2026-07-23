/*
 * XREFs of sub_1405081B8 @ 0x1405081B8
 * Callers:
 *     sub_140508270 @ 0x140508270 (sub_140508270.c)
 * Callees:
 *     sub_1405080D4 @ 0x1405080D4 (sub_1405080D4.c)
 */

__int64 __fastcall sub_1405081B8(unsigned int *a1, _DWORD *a2, ULONG_PTR **a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // eax
  _OWORD *v7; // rcx
  _OWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == 3 )
    {
      *(_OWORD *)a4 = 0LL;
      *(_OWORD *)(a4 + 16) = 0LL;
      *(_OWORD *)(a4 + 32) = 0LL;
      *(_QWORD *)(a4 + 48) = 0LL;
      *(_DWORD *)a4 = a2[3];
      v6 = a2[4];
      *(_DWORD *)(a4 + 16) = -1;
      *(_DWORD *)(a4 + 8) = v6;
      *(_DWORD *)(a4 + 12) = 16;
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 48) = a2[1];
      *a3 = (ULONG_PTR *)qword_140C54A88;
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  else
  {
    result = sub_1405080D4(*a1, a3, &v8);
    if ( (int)result >= 0 )
    {
      v7 = v8;
      *(_OWORD *)a4 = *v8;
      *(_OWORD *)(a4 + 16) = v7[1];
      *(_OWORD *)(a4 + 32) = v7[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v7 + 6);
      *(_DWORD *)(a4 + 12) |= 0x10u;
    }
  }
  return result;
}
