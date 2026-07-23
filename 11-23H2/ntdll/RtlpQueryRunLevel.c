/*
 * XREFs of RtlpQueryRunLevel @ 0x18007B0A8
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180033520 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x18007B25C (RtlpLocateActivationContextSectionForQuery.c)
 */

__int64 __fastcall RtlpQueryRunLevel(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+D0h] [rbp+8h] BYREF
  int v15; // [rsp+E8h] [rbp+20h] BYREF

  v14 = -1073741595;
  v3 = 0;
  v15 = 0;
  RtlpLocateActivationContextSectionForQuery(&v15, &v14, &v13);
  if ( v15 != 1 )
    return v14;
  v6 = *(unsigned int *)(a2 + 24);
  v7 = *(_DWORD *)(v6 + a2 + 8);
  v8 = a2 + *(unsigned int *)(v6 + a2 + 12);
  v9 = 1LL;
  if ( v7 > 1 )
  {
    v10 = (_BYTE *)(v8 + 24);
    do
    {
      if ( (*v10 & 2) != 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      v10 += 24;
    }
    while ( (unsigned int)v9 < v7 );
  }
  if ( (_DWORD)v9 == v7 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() found activation context data at %p with assembly roster that has no root\n",
      "RtlpQueryRunLevel",
      a2);
    return (unsigned int)-1072365565;
  }
  v11 = *(unsigned int *)(v8 + 24 * v9 + 16);
  if ( *(_DWORD *)(v11 + a2) != 108 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() found activation context data at %p with wrong format\n", "RtlpQueryRunLevel", a2);
    return (unsigned int)-1072365565;
  }
  *a3 = 0;
  a3[1] = *(_DWORD *)(v11 + a2 + 100);
  a3[2] = *(_DWORD *)(v11 + a2 + 104);
  return v3;
}
