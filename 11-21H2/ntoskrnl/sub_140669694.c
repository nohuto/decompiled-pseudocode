/*
 * XREFs of sub_140669694 @ 0x140669694
 * Callers:
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     ObAssignSecurity @ 0x1406EAA70 (ObAssignSecurity.c)
 * Callees:
 *     sub_1402A49D0 @ 0x1402A49D0 (sub_1402A49D0.c)
 *     sub_1402A4A60 @ 0x1402A4A60 (sub_1402A4A60.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     SeDeassignSecurity @ 0x1406BC2D0 (SeDeassignSecurity.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140669694(__int64 a1, __int64 a2, __int64 a3, POBJECT_TYPE a4, int a5, char a6)
{
  int v9; // r12d
  __int64 v10; // rdx
  __int64 result; // rax
  int v13; // ebx
  __int64 v14; // rdx
  int v15; // ebx
  PVOID P; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+A0h] [rbp+30h] BYREF

  v17 = 0LL;
  v19 = 0;
  SecurityDescriptor[0] = 0LL;
  v9 = a2;
  P = 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  LODWORD(v17) = 8;
  result = sub_1402A4A60((__int64)a4, v10, a2, &v19, &v17);
  if ( (int)result >= 0 )
  {
    v13 = a5 | v19;
    if ( !a6
      || (result = sub_1402A49D0(
                     0,
                     *(_QWORD *)(a1 + 64),
                     (int)&P,
                     0LL,
                     a4 == qword_140C24FB8,
                     0,
                     0LL,
                     a1 + 32,
                     (__int64)a4 + 76),
          (int)result >= 0) )
    {
      LODWORD(v14) = (_DWORD)P;
      if ( !P )
        v14 = *(_QWORD *)(a1 + 64);
      v15 = sub_1402A49D0(
              v9,
              v14,
              (int)SecurityDescriptor,
              0LL,
              a4 == qword_140C24FB8,
              v13,
              &v17,
              a1 + 32,
              (__int64)a4 + 76);
      if ( v15 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      else
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        v15 = sub_14042A5E0(a3, 3LL);
        if ( v15 < 0 )
          SeDeassignSecurity(SecurityDescriptor);
      }
      return (unsigned int)v15;
    }
  }
  return result;
}
