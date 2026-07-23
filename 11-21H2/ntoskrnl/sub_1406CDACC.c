/*
 * XREFs of sub_1406CDACC @ 0x1406CDACC
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_1406CDB38 @ 0x1406CDB38 (sub_1406CDB38.c)
 *     sub_14093FBBC @ 0x14093FBBC (sub_14093FBBC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406CDACC(int a1)
{
  __int64 (__fastcall *v2)(); // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // ecx
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  P[0] = 0LL;
  switch ( a1 )
  {
    case 98:
      v2 = sub_1406CE780;
      break;
    case 99:
      v2 = sub_14080ADE0;
      break;
    case 200:
      v2 = sub_14081CB70;
      break;
    default:
      return 3221225475LL;
  }
  result = sub_1406CDB38(v2);
  v5 = result;
  if ( (_DWORD)result == -1073740718 && byte_140D018F1 )
  {
    if ( a1 == 99 )
    {
      return 3221226577LL;
    }
    else if ( a1 == 98 )
    {
      v6 = sub_14093FBBC(v4, P);
      if ( v6 < 0 )
      {
        if ( v6 == -1073740718 )
          return (unsigned int)-1073740719;
      }
      else
      {
        ExFreePoolWithTag(P[0], 0);
      }
      return v5;
    }
  }
  return result;
}
