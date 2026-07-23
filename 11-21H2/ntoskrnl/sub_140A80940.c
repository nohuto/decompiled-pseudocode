/*
 * XREFs of sub_140A80940 @ 0x140A80940
 * Callers:
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14041BDE0 @ 0x14041BDE0 (sub_14041BDE0.c)
 *     sub_1409848D4 @ 0x1409848D4 (sub_1409848D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A81078 @ 0x140A81078 (sub_140A81078.c)
 */

__int64 sub_140A80940()
{
  PVOID *v1; // rbx
  unsigned int v2; // ebp
  PVOID *v3; // rdi
  char v4; // dl
  PVOID *v5; // rdi
  PVOID *v6; // rsi
  _DWORD *v7; // rcx
  PVOID *v8; // rdi
  PVOID v9; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]

  if ( !dword_140C23508 )
    return 3221225473LL;
  qword_140C46C00 = 0LL;
  v1 = 0LL;
  v2 = sub_1409848D4();
  while ( 1 )
  {
    v3 = (PVOID *)qword_140C46C00;
    if ( !qword_140C46C00 )
      break;
    qword_140C46C00 = *(PVOID *)qword_140C46C00;
    if ( (unsigned int)sub_140A81078(v3[1]) == 259 )
    {
      *v3 = v1;
      v1 = v3;
    }
    else
    {
      ObfDereferenceObject(v3[1]);
      ExFreePoolWithTag(v3, 0);
    }
  }
  while ( 1 )
  {
    v4 = 0;
    v5 = 0LL;
    while ( 1 )
    {
      v6 = v1;
      if ( !v1 )
        break;
      v7 = v1[1];
      v1 = (PVOID *)*v1;
      if ( (v7[4] & 1) != 0 )
      {
        ObfDereferenceObject(v7);
        ExFreePoolWithTag(v6, 0);
        v4 = 1;
      }
      else
      {
        *v6 = v5;
        v5 = v6;
      }
    }
    if ( !v4 )
      break;
    v11 = -1;
    v10 = -100000000;
    sub_14041BDE0(0LL, (__int64)&v10);
    v1 = v5;
    if ( !v5 )
      goto LABEL_17;
  }
  v1 = v5;
LABEL_17:
  while ( 1 )
  {
    v8 = v1;
    if ( !v1 )
      break;
    v9 = v1[1];
    v1 = (PVOID *)*v1;
    ObfDereferenceObject(v9);
    ExFreePoolWithTag(v8, 0);
  }
  return v2;
}
