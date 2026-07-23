/*
 * XREFs of sub_140B0EFD8 @ 0x140B0EFD8
 * Callers:
 *     sub_140B10CAC @ 0x140B10CAC (sub_140B10CAC.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     sub_14082E228 @ 0x14082E228 (sub_14082E228.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 */

void __fastcall sub_140B0EFD8(UNICODE_STRING *a1, __int64 a2)
{
  UNICODE_STRING *v2; // r14
  UNICODE_STRING *v3; // rbx
  UNICODE_STRING *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  NTSTATUS v8; // esi
  int v9; // [rsp+38h] [rbp-28h]
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  v12 = 0LL;
  v2 = a1 + 4;
  Handle = 0LL;
  v3 = *(UNICODE_STRING **)&a1[4].Length;
  *(_OWORD *)P = 0LL;
  while ( v3 != v2 )
  {
    v5 = v3;
    v3 = *(UNICODE_STRING **)&v3->Length;
    if ( SLODWORD(v5[3].Buffer) >= 0 )
    {
      v6 = *(_QWORD *)&v5[3].Length;
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 48);
        if ( v7 )
          sub_14082E228(v7, a2, 0);
      }
      P[1] = 0LL;
      Handle = 0LL;
      v8 = sub_14082EF44(&Handle, 0LL, v5 + 2, 0x20019u);
      if ( v8 >= 0 )
      {
        v8 = sub_14067B694(Handle, (PUNICODE_STRING)P);
        if ( v8 >= 0 )
          v8 = sub_140B11D58(
                 (unsigned int)P,
                 (int)v5 + 32,
                 *(_QWORD *)(*(_QWORD *)&v5[3].Length + 56LL),
                 *(_QWORD *)&v5[3].Length,
                 (__int64)&a1[1],
                 0,
                 0,
                 v9,
                 (__int64)&v12);
      }
      if ( Handle )
        ZwClose(Handle);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
      if ( v8 < 0 )
        *(_DWORD *)(*(_QWORD *)&v5[3].Length + 104LL) |= 0x20000u;
    }
  }
}
