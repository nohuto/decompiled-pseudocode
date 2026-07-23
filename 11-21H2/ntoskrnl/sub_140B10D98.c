/*
 * XREFs of sub_140B10D98 @ 0x140B10D98
 * Callers:
 *     sub_140B10CAC @ 0x140B10CAC (sub_140B10CAC.c)
 * Callees:
 *     sub_140253DD4 @ 0x140253DD4 (sub_140253DD4.c)
 *     sub_140253E78 @ 0x140253E78 (sub_140253E78.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     sub_14082EF8C @ 0x14082EF8C (sub_14082EF8C.c)
 *     sub_14082EFB8 @ 0x14082EFB8 (sub_14082EFB8.c)
 *     sub_140851A60 @ 0x140851A60 (sub_140851A60.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AA9A28 @ 0x140AA9A28 (sub_140AA9A28.c)
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 */

void __fastcall sub_140B10D98(int a1, __int64 a2)
{
  int v2; // r12d
  __int64 v4; // rax
  UNICODE_STRING **v5; // rdi
  UNICODE_STRING *v6; // rbx
  UNICODE_STRING *v7; // r14
  NTSTATUS v8; // esi
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // r9
  void *v13; // [rsp+20h] [rbp-40h]
  HANDLE v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+38h] [rbp-28h]
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+58h] BYREF

  v18 = 0LL;
  v2 = 0;
  Handle = 0LL;
  *(_OWORD *)P = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = 96LL;
      v2 = 1;
    }
    else
    {
      if ( a1 != 2 )
        return;
      v4 = 112LL;
    }
  }
  else
  {
    v4 = 80LL;
  }
  v5 = (UNICODE_STRING **)(v4 + a2);
  if ( v4 + a2 )
  {
    v6 = *v5;
    dword_140C46BF8 = a1;
    while ( v6 != (UNICODE_STRING *)v5 )
    {
      v7 = v6;
      v6 = *(UNICODE_STRING **)&v6->Length;
      if ( SLODWORD(v7[3].Buffer) >= 0 )
      {
        P[1] = 0LL;
        Handle = 0LL;
        v8 = sub_14082EF44(&Handle, 0LL, v7 + 2, 0x20019u);
        if ( v8 >= 0 )
        {
          v8 = sub_14067B694(Handle, (PUNICODE_STRING)P);
          if ( v8 >= 0 )
          {
            v8 = sub_140B11D58(
                   (unsigned int)P,
                   (int)v7 + 32,
                   *(_QWORD *)(*(_QWORD *)&v7[3].Length + 56LL),
                   *(_QWORD *)&v7[3].Length,
                   a2 + 16,
                   0,
                   v2,
                   v15,
                   (__int64)&v18);
            if ( v8 >= 0 )
            {
              v9 = v18;
              if ( v18 )
              {
                sub_140253E78();
                sub_140851A60(v10, (UNICODE_STRING *)(*(_QWORD *)(v9 + 48) + 24LL), v11, v12, v13, v9, v14);
                sub_140253DD4();
                sub_14082EFB8();
                sub_1402DCF44(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
                if ( sub_14082EF8C() < 0 && qword_140D01468 && qword_140D01468[1] )
                  sub_140AA9A28(0x12u, 0LL);
              }
            }
          }
        }
        if ( Handle )
          ZwClose(Handle);
        if ( P[1] )
          ExFreePoolWithTag(P[1], 0);
        if ( v8 < 0 )
          *(_DWORD *)(*(_QWORD *)&v7[3].Length + 104LL) |= 0x20000u;
      }
    }
  }
}
