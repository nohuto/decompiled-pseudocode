/*
 * XREFs of sub_140B4F8C4 @ 0x140B4F8C4
 * Callers:
 *     sub_140B28AB0 @ 0x140B28AB0 (sub_140B28AB0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14082EB54 @ 0x14082EB54 (sub_14082EB54.c)
 *     sub_14082EBA4 @ 0x14082EBA4 (sub_14082EBA4.c)
 *     sub_14082EBE0 @ 0x14082EBE0 (sub_14082EBE0.c)
 */

char __fastcall sub_140B4F8C4(void *a1, int a2)
{
  ULONG v2; // edi
  char v3; // bl
  int v6; // eax
  unsigned int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v12[528]; // [rsp+58h] [rbp-B0h] BYREF

  Handle[0] = 0LL;
  v2 = 0;
  LODWORD(v10) = 0;
  v3 = 0;
  v9 = 0;
  do
  {
    v8 = 260;
    v6 = sub_14082EBE0((__int64)a1, a1, v2++, v12, &v8);
    if ( v6 < 0 )
      break;
    if ( (int)sub_14082EBA4(0LL, (__int64)a1, (__int64)v12, 0, 1u, (__int64)Handle) >= 0 )
    {
      v8 = 4;
      if ( (int)sub_14082EB54((__int64)a1, Handle[0], L"Id", &v9, &v10, &v8) >= 0
        && v9 == 4
        && v8 == 4
        && (_DWORD)v10 == a2 )
      {
        v3 = 1;
      }
      ZwClose(Handle[0]);
      Handle[0] = 0LL;
    }
  }
  while ( !v3 );
  return v3;
}
