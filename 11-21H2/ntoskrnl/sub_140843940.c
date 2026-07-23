/*
 * XREFs of sub_140843940 @ 0x140843940
 * Callers:
 *     sub_14084388C @ 0x14084388C (sub_14084388C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_1408439C0 @ 0x1408439C0 (sub_1408439C0.c)
 *     sub_140A14E4C @ 0x140A14E4C (sub_140A14E4C.c)
 */

__int64 __fastcall sub_140843940(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  bool v8; // zf
  int v10; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+54h] [rbp+Ch]
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v12 = HIDWORD(a1);
  v11 = 0;
  Handle = 0LL;
  v6 = sub_1408439C0(&Handle, L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags", 2147483904LL, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741772 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v10 = sub_140A14E4C(&v11, Handle, a2);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v7 = 0;
  }
  else if ( v10 != -1073741772 )
  {
LABEL_3:
    sub_1406E0C3C(1LL, (__int64)"SdbpQueryAppCompatFlagsByExeID");
  }
LABEL_4:
  v8 = Handle == 0LL;
  *a4 = v11;
  if ( !v8 )
    ZwClose(Handle);
  return v7;
}
