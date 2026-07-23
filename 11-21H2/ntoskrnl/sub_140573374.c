/*
 * XREFs of sub_140573374 @ 0x140573374
 * Callers:
 *     sub_1405730E0 @ 0x1405730E0 (sub_1405730E0.c)
 *     KeSetTracepoint @ 0x140962320 (KeSetTracepoint.c)
 * Callees:
 *     sub_140573408 @ 0x140573408 (sub_140573408.c)
 *     sub_1405A40C4 @ 0x1405A40C4 (sub_1405A40C4.c)
 */

__int64 __fastcall sub_140573374(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  int *v7; // r9
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *(_BYTE *)(a1 + 50) || !byte_140D06888 )
    goto LABEL_8;
  result = sub_1405A40C4(*(_QWORD *)(a1 + 8));
  if ( !*(_BYTE *)(a1 + 49) && (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 49) = 1;
    return result;
  }
  if ( (_DWORD)result == -1073741637 || (_DWORD)result == -1073741667 )
  {
LABEL_8:
    v5 = *(_QWORD *)(a1 + 8);
    LOBYTE(a2) = *(_BYTE *)(a1 + 50);
    v6 = *(_QWORD *)(a1 + 16);
    if ( v2 )
    {
      v8 = 204;
      v7 = &v8;
    }
    else
    {
      v7 = (int *)(a1 + 51);
    }
    return sub_140573408(v6, a2, v5, v7);
  }
  return result;
}
