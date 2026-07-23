/*
 * XREFs of sub_14077D670 @ 0x14077D670
 * Callers:
 *     sub_14077D2F8 @ 0x14077D2F8 (sub_14077D2F8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     sub_14078A644 @ 0x14078A644 (sub_14078A644.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14077D670(__int64 a1, __int64 a2, __int64 a3, struct _SECURITY_SUBJECT_CONTEXT *a4, _BYTE *a5)
{
  int v6; // eax
  int v7; // ebx
  int v9; // [rsp+68h] [rbp+Fh] BYREF
  PVOID P; // [rsp+70h] [rbp+17h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+78h] [rbp+1Fh] BYREF

  v9 = 0;
  P = 0LL;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericAll = 983041;
  *a5 = 0;
  v6 = sub_14077D91C(0x47706E50u, a3, 0LL, (__int64)&qword_140010B08, (__int64)&v9, (__int64)&P, 0LL, 0);
  v7 = v6;
  if ( v6 == -1073741275 )
    goto LABEL_2;
  if ( v6 >= 0 )
  {
    if ( v9 != 19 )
      goto LABEL_3;
    v7 = sub_14078A644(1u, P, &GenericMapping, a4, (__int64)a5);
    if ( v7 < 0 )
    {
LABEL_2:
      v7 = 0;
LABEL_3:
      *a5 = 1;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)v7;
}
