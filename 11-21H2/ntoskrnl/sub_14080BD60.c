/*
 * XREFs of sub_14080BD60 @ 0x14080BD60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14080BDD0 @ 0x14080BDD0 (sub_14080BDD0.c)
 */

__int64 __fastcall sub_14080BD60(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  __int64 v4; // rbx
  int v5; // edi
  bool v6; // si
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    return 3221266435LL;
  v5 = *a4;
  v6 = a3 == 10;
  LOBYTE(a2) = a3 == 10;
  result = sub_14080BDD0(*a4, a2, &v8);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v4 + 28) = v8;
    result = 0LL;
    *(_DWORD *)v4 = 4;
    *(_BYTE *)(v4 + 24) = v6;
    *(_DWORD *)(v4 + 32) = v5;
  }
  return result;
}
