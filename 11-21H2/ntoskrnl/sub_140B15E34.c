/*
 * XREFs of sub_140B15E34 @ 0x140B15E34
 * Callers:
 *     sub_140B15C50 @ 0x140B15C50 (sub_140B15C50.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406AD650 @ 0x1406AD650 (sub_1406AD650.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079B8C0 @ 0x14079B8C0 (sub_14079B8C0.c)
 *     sub_14079C8A4 @ 0x14079C8A4 (sub_14079C8A4.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 */

__int64 __fastcall sub_140B15E34(__int64 a1, __int64 a2, int *a3)
{
  ULONG_PTR v3; // rdi
  unsigned __int16 v5; // ax
  int v6; // esi
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int16 v9; // ax
  int v10; // ecx
  __int64 v11; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  int v15; // [rsp+88h] [rbp+48h] BYREF
  int v16; // [rsp+8Ch] [rbp+4Ch]
  __int64 v17; // [rsp+98h] [rbp+58h] BYREF

  v16 = HIDWORD(a2);
  v3 = qword_140D3CA28;
  v17 = 0LL;
  DestinationString = 0LL;
  v15 = -1;
  v14 = 0LL;
  sub_1407C97FC(&v17);
  RtlInitUnicodeString(&DestinationString, L"REGISTRY");
  v5 = sub_1406AD650(&DestinationString.Length);
  v6 = sub_14079C8A4(v3, (unsigned int)v5 + 76, 0LL, &v15, (__int64)&v14, (__int64)&v17);
  if ( v6 < 0 )
  {
    v8 = v14;
  }
  else
  {
    v7 = v14;
    *(_DWORD *)v14 = 813934;
    v8 = v14;
    *(_QWORD *)(v14 + 4) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v8 + 16) = -1;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_DWORD *)(v8 + 28) = -1;
    *(_DWORD *)(v8 + 32) = -1;
    *(_DWORD *)(v8 + 36) = 0;
    *(_DWORD *)(v8 + 40) = -1;
    *(_DWORD *)(v8 + 44) = -1;
    *(_DWORD *)(v8 + 48) = -1;
    *(_WORD *)(v8 + 74) = 0;
    *(_QWORD *)(v8 + 60) = 0LL;
    *(_WORD *)(v8 + 52) = 0;
    *(_DWORD *)(v8 + 52) &= 0xFF00FFFF;
    *(_BYTE *)(v8 + 55) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    v9 = sub_14079B8C0((_BYTE *)(v8 + 76), &DestinationString);
    *(_WORD *)(v8 + 72) = v9;
    if ( v9 < DestinationString.Length )
      *(_WORD *)(v7 + 2) |= 0x20u;
    v10 = v15;
    v6 = 0;
    v11 = *(_QWORD *)(v3 + 64);
    *a3 = v15;
    *(_DWORD *)(v11 + 36) = v10;
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
      sub_1406BF450(v3, &v17);
    else
      sub_1407C97C0(v3, (unsigned int *)&v17);
  }
  return (unsigned int)v6;
}
