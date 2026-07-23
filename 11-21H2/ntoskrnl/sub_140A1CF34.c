/*
 * XREFs of sub_140A1CF34 @ 0x140A1CF34
 * Callers:
 *     sub_140A1CB84 @ 0x140A1CB84 (sub_140A1CB84.c)
 *     sub_140A1E6EC @ 0x140A1E6EC (sub_140A1E6EC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_1408036C8 @ 0x1408036C8 (sub_1408036C8.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813904 @ 0x140813904 (sub_140813904.c)
 *     sub_140A1D274 @ 0x140A1D274 (sub_140A1D274.c)
 *     sub_140A1D308 @ 0x140A1D308 (sub_140A1D308.c)
 */

NTSTATUS __fastcall sub_140A1CF34(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r9
  __int64 v8; // r8
  void *v9; // rsi
  void *v10; // rdi
  unsigned int v11; // r10d
  __int64 v12; // r11
  _QWORD *v13; // r11
  int v14; // ebx
  UUID *p_Uuid; // r11
  NTSTATUS result; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  bool v20; // [rsp+30h] [rbp-50h] BYREF
  void *v21; // [rsp+38h] [rbp-48h] BYREF
  void *v22; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-38h] BYREF
  void *v24; // [rsp+58h] [rbp-28h] BYREF
  int v25; // [rsp+60h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  *a5 = 0LL;
  v6 = a3[1];
  v24 = 0LL;
  UnicodeString.Buffer = 0LL;
  v8 = *a3;
  v9 = 0LL;
  Uuid = 0LL;
  v10 = 0LL;
  sub_1408138F0(2LL, L"Creating object. Version: %d. Type: 0x%08x", v8, v6);
  if ( !(unsigned __int8)sub_140A1D274(a3, v12, v11) )
    return -1073741637;
  if ( v13 )
  {
    if ( sub_140813904(v13, &v25) )
      return -1073741773;
  }
  else
  {
    sub_1408138F0(2LL, L"Generating object GUID.");
    result = ExUuidCreate(&Uuid);
    if ( result < 0 )
      return result;
    p_Uuid = &Uuid;
  }
  v14 = sub_1407454A8(&p_Uuid->Data1, (__int64)&UnicodeString, 1);
  if ( v14 >= 0 )
  {
    sub_1408138F0(2LL, L"Object GUID: %s", UnicodeString.Buffer);
    v18 = sub_140813164(a1, L"Objects", v17 + 2, &v22);
    v9 = v22;
    v14 = v18;
    if ( v18 >= 0 )
    {
      v19 = sub_1408036C8((__int64)v22, UnicodeString.Buffer, 0xF003Fu, 0, &v21, &v20);
      v10 = v21;
      v14 = v19;
      if ( v19 >= 0 )
      {
        v14 = sub_140A1D308(v21, a3);
        if ( v14 >= 0 )
        {
          v14 = sub_1408036C8((__int64)v10, L"Elements", 0x20019u, 0, &v24, &v20);
          if ( v14 >= 0 )
          {
            *a5 = v10;
            v14 = 0;
          }
          if ( v24 )
            sub_1408132F0(v24);
        }
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v14 < 0 && v10 )
    sub_1408132F0(v10);
  if ( v9 )
    sub_1408132F0(v9);
  return v14;
}
