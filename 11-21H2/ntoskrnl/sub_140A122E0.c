/*
 * XREFs of sub_140A122E0 @ 0x140A122E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140A12B34 @ 0x140A12B34 (sub_140A12B34.c)
 */

__int64 __fastcall sub_140A122E0(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v13 = 0;
  v9 = 0;
  v10 = sub_140792CCC(a3, a5, 24577);
  if ( v10 )
  {
    v11 = sub_140842A24(a3, v10);
    if ( v11 )
    {
      sub_140A12B34(&v13, a2, v11);
      v9 = v13;
      v8 = 1;
    }
    else
    {
      sub_1406E0C3C(1LL, (__int64)"SdbpCheckSdbCapability");
    }
  }
  result = v8;
  *a1 = v9;
  return result;
}
