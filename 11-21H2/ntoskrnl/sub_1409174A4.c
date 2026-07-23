/*
 * XREFs of sub_1409174A4 @ 0x1409174A4
 * Callers:
 *     sub_1406B656C @ 0x1406B656C (sub_1406B656C.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     ExConvertExclusiveToSharedLite @ 0x140239790 (ExConvertExclusiveToSharedLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14063D2FC @ 0x14063D2FC (sub_14063D2FC.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077CB98 @ 0x14077CB98 (sub_14077CB98.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_1409165A8 @ 0x1409165A8 (sub_1409165A8.c)
 *     sub_140916720 @ 0x140916720 (sub_140916720.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_140917348 @ 0x140917348 (sub_140917348.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

__int64 __fastcall sub_1409174A4(__int64 a1, __int64 a2, char a3, ULONG_PTR *a4)
{
  char v7; // r15
  int v8; // ebx
  UNICODE_STRING *v9; // rcx
  _DWORD *v10; // rsi
  ULONG_PTR v11; // rcx
  ULONG_PTR v12; // r8
  unsigned int v13; // edx
  UNICODE_STRING *p_DestinationString; // rcx
  unsigned int v16; // [rsp+40h] [rbp-39h] BYREF
  int v17; // [rsp+44h] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+58h] [rbp-21h] BYREF
  ULONG_PTR v20; // [rsp+60h] [rbp-19h] BYREF
  ULONG_PTR v21; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR *v22; // [rsp+70h] [rbp-9h]
  _OWORD v23[2]; // [rsp+78h] [rbp-1h] BYREF

  v22 = a4;
  v17 = 0;
  DestinationString = 0LL;
  memset(v23, 0, sizeof(v23));
  if ( qword_140D3B008 )
    sub_140223A20((unsigned __int64)v23, 0x20000uLL);
  v20 = 0LL;
  P = 0LL;
  v16 = 0;
  v7 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v21 = 0LL;
  if ( !a3 )
  {
    v7 = sub_14063D2FC();
    if ( !v7 )
    {
      v8 = -1073741739;
LABEL_19:
      if ( qword_140D3B008 )
      {
        p_DestinationString = &DestinationString;
        LOBYTE(p_DestinationString) = 26;
        sub_14042A5E0(p_DestinationString, v23);
      }
      if ( DestinationString.Buffer )
        RtlFreeUnicodeString(&DestinationString);
      return (unsigned int)v8;
    }
  }
  sub_140AB4300(a1);
  v8 = sub_14077CB98(a1, 0LL, a2, &DestinationString);
  if ( v8 >= 0 )
  {
    if ( (int)sub_1409165A8(a1, (__int64)&DestinationString, &v16, &P) >= 0 )
    {
      v10 = P;
      if ( v16 )
      {
        v8 = sub_140917348(a2, (__int64 *)&v20, &v17, &v21);
        if ( v8 >= 0 )
        {
          v11 = v21;
          v12 = v20;
          v13 = v16;
          *v22 = v20;
          v10[8] = *(_DWORD *)(v11 + 40);
          *((_QWORD *)v10 + 2) = v11;
          v8 = sub_140916918((__int64)v10, v13, v12, a1, a2);
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v10 )
      {
        sub_140916720((__int64)v10, v16);
        ExFreePoolWithTag(v10, 0);
      }
    }
    else
    {
      v8 = -1073741670;
    }
    sub_1407C0854(a1);
    if ( v7 )
      ExConvertExclusiveToSharedLite((PERESOURCE)&stru_140D31980);
    goto LABEL_19;
  }
  if ( qword_140D3B008 )
  {
    v9 = &DestinationString;
    LOBYTE(v9) = 26;
    sub_14042A5E0(v9, v23);
  }
  return (unsigned int)v8;
}
