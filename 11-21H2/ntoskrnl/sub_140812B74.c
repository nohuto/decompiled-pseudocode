/*
 * XREFs of sub_140812B74 @ 0x140812B74
 * Callers:
 *     sub_140644D30 @ 0x140644D30 (sub_140644D30.c)
 *     sub_140800680 @ 0x140800680 (sub_140800680.c)
 *     sub_140800808 @ 0x140800808 (sub_140800808.c)
 *     sub_140800968 @ 0x140800968 (sub_140800968.c)
 *     sub_14099C7F4 @ 0x14099C7F4 (sub_14099C7F4.c)
 *     sub_14099C9CC @ 0x14099C9CC (sub_14099C9CC.c)
 *     sub_1409CDCC8 @ 0x1409CDCC8 (sub_1409CDCC8.c)
 *     sub_140A1D134 @ 0x140A1D134 (sub_140A1D134.c)
 *     sub_140A1E118 @ 0x140A1E118 (sub_140A1E118.c)
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 *     sub_140A1E590 @ 0x140A1E590 (sub_140A1E590.c)
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 *     sub_140A1F234 @ 0x140A1F234 (sub_140A1F234.c)
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 *     sub_140A210D4 @ 0x140A210D4 (sub_140A210D4.c)
 *     sub_140AF3434 @ 0x140AF3434 (sub_140AF3434.c)
 * Callees:
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813904 @ 0x140813904 (sub_140813904.c)
 *     sub_14081413C @ 0x14081413C (sub_14081413C.c)
 *     sub_140A1D134 @ 0x140A1D134 (sub_140A1D134.c)
 */

__int64 __fastcall sub_140812B74(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char v7; // r12
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // ebx
  wchar_t *Buffer; // rdi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  const wchar_t *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v19[6]; // [rsp+38h] [rbp-18h] BYREF
  int v20; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v20 = 0;
  *(_OWORD *)v19 = 0LL;
  LOBYTE(v6) = sub_1403A7864(a1);
  v7 = v6;
  result = sub_14081369C(v6);
  if ( (int)result < 0 )
    return result;
  *a3 = 0LL;
  v17 = 0LL;
  UnicodeString.Buffer = 0LL;
  v9 = sub_1407454A8(a2, (__int64)&UnicodeString, 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    sub_1408138F0(4LL, L"Failed to get object identifier. Status: %x", (unsigned int)v9);
LABEL_19:
    Buffer = UnicodeString.Buffer;
    goto LABEL_6;
  }
  Buffer = UnicodeString.Buffer;
  sub_1408138F0(2LL, L"Opening object %s", UnicodeString.Buffer);
  v12 = sub_140813164(a1, L"Objects", 131097LL, &v17);
  v10 = v12;
  if ( v12 < 0 )
  {
    v15 = L"Failed to open key for all objects. Status: %x";
LABEL_23:
    v16 = 4LL;
LABEL_28:
    sub_1408138F0(v16, v15, (unsigned int)v12);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)sub_140813904(a2, &v20) )
    goto LABEL_5;
  if ( v20 == 1 )
  {
    v12 = sub_14081413C(v19);
  }
  else
  {
    if ( v20 != 2 )
    {
      v10 = -1073741811;
      v12 = -1073741811;
      goto LABEL_22;
    }
    v12 = sub_140A1D134(a1, v19);
  }
  v10 = v12;
  if ( v12 < 0 )
  {
LABEL_22:
    v15 = L"Failed to get aliased identifier. Status: %x";
    goto LABEL_23;
  }
  RtlFreeUnicodeString(&UnicodeString);
  UnicodeString.Buffer = 0LL;
  v14 = sub_1407454A8(v19, (__int64)&UnicodeString, 1);
  v10 = v14;
  if ( v14 < 0 )
  {
    sub_1408138F0(4LL, L"Failed to update object GUID string. Status: %x", (unsigned int)v14);
    goto LABEL_19;
  }
  Buffer = UnicodeString.Buffer;
  sub_1408138F0(2LL, L"Object alias resolves to %s", UnicodeString.Buffer);
LABEL_5:
  v12 = sub_140813164(v17, Buffer, 983103LL, a3);
  v10 = v12;
  if ( v12 < 0 )
  {
    v15 = L"Failed to open object's key. Status: %x";
    v16 = 4LL;
    if ( v12 == -1073741772 )
      v16 = 2LL;
    goto LABEL_28;
  }
LABEL_6:
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  v13 = v17;
  if ( v17 )
    sub_1408132F0(v17);
  LOBYTE(v13) = v7;
  sub_1408134D8(v13);
  return v10;
}
