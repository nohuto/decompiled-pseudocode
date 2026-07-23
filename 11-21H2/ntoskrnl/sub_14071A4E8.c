/*
 * XREFs of sub_14071A4E8 @ 0x14071A4E8
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140718CA8 @ 0x140718CA8 (sub_140718CA8.c)
 *     sub_14071A6D4 @ 0x14071A6D4 (sub_14071A6D4.c)
 *     sub_14071A730 @ 0x14071A730 (sub_14071A730.c)
 *     sub_14071B99C @ 0x14071B99C (sub_14071B99C.c)
 *     sub_14071F2D8 @ 0x14071F2D8 (sub_14071F2D8.c)
 *     sub_14077CB98 @ 0x14077CB98 (sub_14077CB98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14071A4E8(__int64 a1, __int64 a2, _DWORD *a3, UNICODE_STRING *a4, __int64 a5)
{
  void *v6; // r14
  __int64 v7; // rsi
  ULONG_PTR v8; // rdi
  int v10; // r12d
  int v11; // ebx
  char v12; // al
  char v13; // r12
  __int64 v15; // rax
  wchar_t *Buffer; // rcx
  char v17[4]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD BugCheckParameter4[3]; // [rsp+34h] [rbp-2Ch] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  memset(BugCheckParameter4, 0, sizeof(BugCheckParameter4));
  DestinationString = 0LL;
  v17[0] = 0;
  v6 = 0LL;
  v7 = 0LL;
  BugCheckParameter3 = 0LL;
  v8 = 0LL;
  v10 = a2;
  sub_1407C97FC(&BugCheckParameter4[1]);
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (unsigned __int8)sub_14071A6D4(a1, 0LL) )
  {
    v13 = 0;
  }
  else
  {
    v11 = sub_14071B99C(*(_QWORD *)(a1 + 32), 0LL, 0LL);
    if ( v11 < 0 )
      goto LABEL_9;
    v6 = *(void **)(a1 + 32);
    v12 = sub_14071F2D8(a1, v10, 0, (unsigned int)BugCheckParameter4, (__int64)&BugCheckParameter3);
    v8 = BugCheckParameter3;
    v13 = v12;
    if ( v12 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v15 = sub_1406BF400(BugCheckParameter3, BugCheckParameter4[0], &BugCheckParameter4[1]);
      else
        v15 = sub_1407C9820(BugCheckParameter3);
      v7 = v15;
      if ( !v15 )
      {
        v11 = -1073741670;
        goto LABEL_9;
      }
      if ( (*(_DWORD *)(v15 + 52) & 0x200000) != 0 )
      {
LABEL_8:
        v11 = -1073741199;
        goto LABEL_9;
      }
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        sub_1406BF450(v8, &BugCheckParameter4[1]);
      else
        sub_1407C97C0(v8, &BugCheckParameter4[1]);
    }
    sub_14071A730(*(PVOID *)(a1 + 32));
  }
  v6 = 0LL;
  v7 = 0LL;
  v11 = sub_14077CB98(a1, a2, a5, &DestinationString);
  if ( v11 < 0 )
    goto LABEL_9;
  *a3 |= 8u;
  if ( !sub_140718CA8(0LL, &DestinationString, v17) && ((*a3 & 1) == 0 || v13 || !v17[0]) )
    goto LABEL_8;
  Buffer = a4->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  *a4 = DestinationString;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = 260;
LABEL_9:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
      sub_1406BF450(v8, &BugCheckParameter4[1]);
    else
      sub_1407C97C0(v8, &BugCheckParameter4[1]);
  }
  if ( v6 )
    sub_14071A730(v6);
  return (unsigned int)v11;
}
