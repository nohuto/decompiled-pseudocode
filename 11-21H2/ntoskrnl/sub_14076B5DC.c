/*
 * XREFs of sub_14076B5DC @ 0x14076B5DC
 * Callers:
 *     sub_14076B554 @ 0x14076B554 (sub_14076B554.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1407690BC @ 0x1407690BC (sub_1407690BC.c)
 *     sub_14076B788 @ 0x14076B788 (sub_14076B788.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14076B5DC(unsigned __int16 *a1, char a2, UNICODE_STRING *a3)
{
  void *Pool2; // r14
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+50h] BYREF
  int v14; // [rsp+A8h] [rbp+58h] BYREF

  v12 = 0LL;
  v14 = 0;
  v13 = 0;
  Pool2 = 0LL;
  DestinationString = 0LL;
  if ( a3 )
  {
    *(_DWORD *)&a3->Length = 0;
    a3->Buffer = 0LL;
  }
  if ( *a1 <= 2u )
  {
    v7 = -1073741811;
    goto LABEL_16;
  }
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2) == 92 )
    *a1 -= 2;
  v7 = sub_140779CA0(&v12, 0LL, a1);
  if ( v7 < 0 )
  {
LABEL_16:
    if ( !a3 )
      goto LABEL_19;
    goto LABEL_17;
  }
  v13 = 512;
  Pool2 = (void *)ExAllocatePool2(256LL, 512LL, 538996816LL);
  if ( !Pool2 )
  {
    v7 = -1073741670;
    goto LABEL_16;
  }
  v7 = sub_14077CD90(qword_140D00AC0, v12, 0, 5, (__int64)&v14, (__int64)Pool2, (__int64)&v13, 0);
  sub_14077BAB8(v12, a1);
  if ( v7 < 0 )
  {
    if ( v7 != -1073741275 )
      goto LABEL_16;
LABEL_13:
    LOBYTE(v12) = a2;
    v7 = sub_14076B788(a1, v8, &v12);
    if ( v7 >= 0 )
    {
LABEL_20:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v7;
    }
    if ( a2 )
    {
      LOBYTE(v12) = 0;
      sub_14076B788(a1, v9, &v12);
    }
    goto LABEL_16;
  }
  v7 = -1073741772;
  if ( v14 != 1 || v13 <= 2 )
    goto LABEL_16;
  RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
  if ( !a3 )
    goto LABEL_13;
  v7 = sub_1407690BC(a3, &DestinationString);
  if ( v7 >= 0 )
    goto LABEL_13;
LABEL_17:
  if ( a3->Length )
  {
    ExFreePoolWithTag(a3->Buffer, 0);
    a3->Buffer = 0LL;
    *(_DWORD *)&a3->Length = 0;
  }
LABEL_19:
  if ( Pool2 )
    goto LABEL_20;
  return (unsigned int)v7;
}
