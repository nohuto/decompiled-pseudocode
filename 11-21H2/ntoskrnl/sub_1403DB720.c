/*
 * XREFs of sub_1403DB720 @ 0x1403DB720
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_1403DB834 @ 0x1403DB834 (sub_1403DB834.c)
 *     sub_14055EBC8 @ 0x14055EBC8 (sub_14055EBC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403DB720(__int64 a1, _BYTE *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v8[2]; // [rsp+50h] [rbp-10h] BYREF
  char v9; // [rsp+80h] [rbp+20h] BYREF
  PVOID P; // [rsp+90h] [rbp+30h] BYREF

  v7[0] = 13238472LL;
  P = 0LL;
  v7[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\EncryptionCertificates\\Certificate.1";
  v6[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  v8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\ForceDumpsDisabled";
  v6[0] = 8388734LL;
  v3 = 2;
  v8[0] = 10879140LL;
  byte_140D00A88 = 1;
  if ( !a2 )
    return;
  *a2 = 0;
  xmmword_140C4EFD8 = 0LL;
  xmmword_140C4EFE8 = 0LL;
  v4 = sub_1403DB834((unsigned int)v8, (unsigned int)L"GuardedHost", 4, (unsigned int)&P, (__int64)&v9);
  if ( v4 >= 0 )
  {
    LODWORD(xmmword_140C4EFD8) = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( (_DWORD)xmmword_140C4EFD8 )
      goto LABEL_7;
  }
  else if ( v4 != -1073741772 )
  {
    goto LABEL_8;
  }
  v5 = sub_1403DB834((unsigned int)v6, (unsigned int)L"DumpEncryptionEnabled", 4, (unsigned int)&P, (__int64)&v9);
  if ( v5 >= 0 )
  {
    DWORD1(xmmword_140C4EFD8) = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    if ( !DWORD1(xmmword_140C4EFD8) )
      goto LABEL_19;
    *a2 = 1;
    if ( (int)sub_1403DB834(
                (unsigned int)v6,
                (unsigned int)L"ProvisionDumpKeyWithCertificate",
                4,
                (unsigned int)&P,
                (__int64)&v9) >= 0 )
    {
      byte_140D01504 = *(_DWORD *)P != 0;
      ExFreePoolWithTag(P, 0);
    }
    if ( byte_140D01504
      || (int)sub_1403DB834(
                (unsigned int)v7,
                (unsigned int)L"PublicKey",
                3,
                (unsigned int)&xmmword_140C4EFD8 + 8,
                (__int64)&xmmword_140C4EFE8) >= 0
      && (int)sub_1403DB834(
                (unsigned int)v7,
                (unsigned int)L"Thumbprint",
                1,
                (unsigned int)&xmmword_140C4EFE8 + 8,
                (__int64)&xmmword_140C4EFE8 + 4) >= 0 )
    {
LABEL_19:
      byte_140D00A88 = 0;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  if ( v5 == -1073741772 )
  {
    byte_140D00A88 = 0;
LABEL_7:
    v3 = 0;
  }
LABEL_8:
  if ( byte_140D00A88 != 1 )
  {
LABEL_9:
    dword_140C4EFD0 = 1;
    return;
  }
  if ( *((_QWORD *)&xmmword_140C4EFD8 + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&xmmword_140C4EFD8 + 1), 0);
    *((_QWORD *)&xmmword_140C4EFD8 + 1) = 0LL;
  }
  if ( *((_QWORD *)&xmmword_140C4EFE8 + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&xmmword_140C4EFE8 + 1), 0);
    *((_QWORD *)&xmmword_140C4EFE8 + 1) = 0LL;
  }
  if ( v3 )
  {
    dword_140C4EFD0 = 3;
    sub_14055EBC8(v3);
  }
}
