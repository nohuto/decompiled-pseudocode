/*
 * XREFs of sub_140690C50 @ 0x140690C50
 * Callers:
 *     sub_140690914 @ 0x140690914 (sub_140690914.c)
 *     sub_140861E8C @ 0x140861E8C (sub_140861E8C.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140692980 @ 0x140692980 (sub_140692980.c)
 *     sub_140692C60 @ 0x140692C60 (sub_140692C60.c)
 */

__int64 __fastcall sub_140690C50(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  PVOID v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  unsigned __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v9 = 0LL;
  PsGetPermanentSiloContext(a1, dword_140C490B8, &v9);
  if ( v9 )
  {
    v6 = 0;
    *a2 = v9;
    return v6;
  }
  v4 = sub_140692C60(a1, &Object);
  v5 = Object;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = sub_140692980(a1, (unsigned int)dword_140C490B8, Object, 0LL);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
LABEL_5:
      v6 = 0;
      goto LABEL_7;
    }
    if ( v7 == -1073741637 )
    {
      v9 = 0LL;
      PsGetPermanentSiloContext(a1, dword_140C490B8, &v9);
      *a2 = v9;
      goto LABEL_5;
    }
  }
LABEL_7:
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x20314D43u);
  return v6;
}
