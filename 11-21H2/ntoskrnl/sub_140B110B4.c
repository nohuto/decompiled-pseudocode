/*
 * XREFs of sub_140B110B4 @ 0x140B110B4
 * Callers:
 *     sub_140B21B40 @ 0x140B21B40 (sub_140B21B40.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D21B8 @ 0x1402D21B8 (sub_1402D21B8.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ExIsManufacturingModeEnabled @ 0x14067AFA0 (ExIsManufacturingModeEnabled.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_14067BCBC @ 0x14067BCBC (sub_14067BCBC.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_14082EF44 @ 0x14082EF44 (sub_14082EF44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B10D78 @ 0x140B10D78 (sub_140B10D78.c)
 *     sub_140B12340 @ 0x140B12340 (sub_140B12340.c)
 *     sub_140B12560 @ 0x140B12560 (sub_140B12560.c)
 *     sub_140B125BC @ 0x140B125BC (sub_140B125BC.c)
 *     sub_140B12AA0 @ 0x140B12AA0 (sub_140B12AA0.c)
 *     sub_140B12C84 @ 0x140B12C84 (sub_140B12C84.c)
 */

__int64 sub_140B110B4()
{
  char IsManufacturingModeEnabled; // al
  void **v1; // rax
  void **v2; // rbx
  void **v3; // r14
  void *v4; // rax
  PVOID v5; // rdi
  PVOID v6; // rsi
  __int64 v7; // rdi
  int v8; // eax
  void *v9; // rcx
  int v11; // edi
  UNICODE_STRING v12; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF

  v15 = 0;
  Handle = 0LL;
  P = 0LL;
  String1 = 0LL;
  v12 = 0LL;
  UnicodeString = 0LL;
  sub_1402D21B8((PCEVENT_DESCRIPTOR)nullsub_2, 0, 0LL);
  IsManufacturingModeEnabled = ExIsManufacturingModeEnabled();
  v1 = (void **)sub_140B12C84((unsigned __int64)Data & -(__int64)(IsManufacturingModeEnabled != 0));
  v2 = v1;
  if ( v1 )
  {
    v3 = v1;
    v4 = *v1;
    if ( v4 )
    {
      do
      {
        if ( (int)sub_14067B694(v4, &UnicodeString) >= 0
          && (v5 = sub_14067BCBC(&UnicodeString), RtlFreeUnicodeString(&UnicodeString), v5) )
        {
          ObfDereferenceObjectWithTag(v5, 0x746C6644u);
        }
        else
        {
          *(_DWORD *)&v12.Length = 655368;
          v12.Buffer = L"Enum";
          if ( sub_14082EF44(&Handle, *v2, &v12, 0x20019u) < 0 )
            goto LABEL_6;
          v11 = 0;
          if ( sub_14067B838(Handle, L"INITSTARTFAILED", 0, &P) >= 0 )
          {
            if ( *((_DWORD *)P + 3) == 4 )
              v11 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
          ZwClose(Handle);
          if ( !v11 )
          {
LABEL_6:
            if ( sub_14067B838(*v2, L"Group", 0, &P) < 0 )
            {
              v7 = 0LL;
            }
            else
            {
              v6 = P;
              if ( *((_DWORD *)P + 3) )
              {
                String1.Length = *((_WORD *)P + 6);
                String1.MaximumLength = String1.Length;
                String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
                v7 = sub_140B125BC(&String1);
              }
              else
              {
                v7 = 0LL;
              }
              ExFreePoolWithTag(v6, 0);
            }
            v8 = sub_140B12560(*v2);
            v9 = *v2;
            if ( v8 )
            {
              if ( (int)sub_14074A178(v9, 1, 0, &v15) >= 0 && v7 )
                ++*(_DWORD *)(v7 + 28);
            }
            else
            {
              ZwClose(v9);
            }
            sub_140B12340();
            goto LABEL_15;
          }
        }
        ZwClose(*v2);
LABEL_15:
        v4 = *++v2;
      }
      while ( *v2 );
    }
    ExFreePoolWithTag(v3, 0);
  }
  sub_1402DCF44(*((PVOID *)qword_140C46278 + 4), 17, 0, 0LL, 0LL, 0LL, 0LL);
  if ( !dword_140C0C6C4 )
    sub_140B10D78();
  sub_1402DCF44(*((PVOID *)qword_140C46278 + 4), 18, 0, 0LL, 0LL, 0LL, 0LL);
  if ( qword_140C46B48 )
    sub_140B12AA0();
  sub_1402D21B8((PCEVENT_DESCRIPTOR)nullsub_1, 0, 0LL);
  return 1LL;
}
