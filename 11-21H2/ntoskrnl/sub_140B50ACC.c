/*
 * XREFs of sub_140B50ACC @ 0x140B50ACC
 * Callers:
 *     sub_140B4FF80 @ 0x140B4FF80 (sub_140B4FF80.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14080B4F0 @ 0x14080B4F0 (sub_14080B4F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140B50ACC(UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  UNICODE_STRING *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+28h] [rbp-D8h]
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  char FileInformation[1024]; // [rsp+50h] [rbp-B0h] BYREF

  P[1] = P;
  P[0] = P;
  v5 = sub_14080B4F0(a1, 13, (__int64)sub_140B4FEB0, a4, FileInformation, v10, (__int64)P);
  while ( 1 )
  {
    v6 = (UNICODE_STRING *)P[0];
    if ( P[0] == P )
      break;
    if ( v5 < 0 )
      goto LABEL_8;
    if ( *((PVOID **)P[0] + 1) != P || (v7 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_12:
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v7 + 8) = P;
    v5 = sub_14080B4F0(v6 + 1, 13, (__int64)sub_140B4FEB0, a4, FileInformation, v11, (__int64)P);
    ExFreePoolWithTag(v6, 0);
  }
  if ( v5 < 0 )
  {
LABEL_8:
    while ( v6 != (UNICODE_STRING *)P )
    {
      if ( (PVOID *)v6->Buffer != P )
        goto LABEL_12;
      v8 = *(_QWORD *)&v6->Length;
      if ( *(UNICODE_STRING **)(*(_QWORD *)&v6->Length + 8LL) != v6 )
        goto LABEL_12;
      P[0] = *(PVOID *)&v6->Length;
      *(_QWORD *)(v8 + 8) = P;
      ExFreePoolWithTag(v6, 0);
      v6 = (UNICODE_STRING *)P[0];
    }
  }
  return (unsigned int)v5;
}
