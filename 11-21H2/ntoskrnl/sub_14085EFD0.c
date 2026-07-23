/*
 * XREFs of sub_14085EFD0 @ 0x14085EFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DB4A4 @ 0x1403DB4A4 (sub_1403DB4A4.c)
 */

__int64 __fastcall sub_14085EFD0(int a1, char a2)
{
  ULONG_PTR *v2; // rcx
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( !a1 )
  {
    v2 = &qword_140C1C920;
    return sub_1403DB4A4((ULONG_PTR)v2, a2);
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    v2 = (ULONG_PTR *)&unk_140C1C860;
    return sub_1403DB4A4((ULONG_PTR)v2, a2);
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v2 = (ULONG_PTR *)&unk_140C1C880;
    return sub_1403DB4A4((ULONG_PTR)v2, a2);
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v2 = (ULONG_PTR *)&unk_140C1C8A0;
    return sub_1403DB4A4((ULONG_PTR)v2, a2);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v2 = (ULONG_PTR *)&unk_140C1C8C0;
    return sub_1403DB4A4((ULONG_PTR)v2, a2);
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v2 = (ULONG_PTR *)&unk_140C1C8E0;
    return sub_1403DB4A4((ULONG_PTR)v2, a2);
  }
  if ( v8 == 3 )
  {
    v2 = (ULONG_PTR *)&unk_140C1C900;
    return sub_1403DB4A4((ULONG_PTR)v2, a2);
  }
  return result;
}
