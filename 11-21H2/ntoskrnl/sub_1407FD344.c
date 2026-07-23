/*
 * XREFs of sub_1407FD344 @ 0x1407FD344
 * Callers:
 *     sub_1407EFD2C @ 0x1407EFD2C (sub_1407EFD2C.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_14075140C @ 0x14075140C (sub_14075140C.c)
 *     sub_14075197C @ 0x14075197C (sub_14075197C.c)
 *     sub_1407FCE7C @ 0x1407FCE7C (sub_1407FCE7C.c)
 */

__int64 __fastcall sub_1407FD344(__int64 a1)
{
  GUID *v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // ebp
  unsigned int v6; // r15d
  unsigned int v8; // eax
  bool v9; // zf
  __int64 v10; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF

  v1 = (GUID *)(a1 + 20);
  v3 = 0;
  UnicodeString = 0LL;
  if ( (int)sub_1407454A8((unsigned int *)(a1 + 20), (__int64)&UnicodeString, 1) >= 0 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( !sub_14075197C(v1) )
  {
    v4 = *(_QWORD *)(a1 + 36) - 0x482482BE54533251LL;
    v5 = *(_DWORD *)(a1 + 52);
    v6 = *(_DWORD *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 36) == 0x482482BE54533251LL )
      v4 = *(_QWORD *)(a1 + 44) - 0xD740BB647C196LL;
    if ( v4 )
      return (unsigned int)sub_14075140C(v1, 0xFFFFFFFF, v5, v6, (void *)(a1 + 60));
    v8 = sub_1407FCE7C((__int64 *)(a1 + 4), v1, v5, a1 + 60, *(_DWORD *)(a1 + 56));
    v9 = v8 == -1073741275;
    v3 = v8;
    v10 = *(_QWORD *)(a1 + 4);
    if ( v9 )
      v3 = 0;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 12);
    if ( !v10 )
      return (unsigned int)sub_14075140C(v1, 0xFFFFFFFF, v5, v6, (void *)(a1 + 60));
  }
  return v3;
}
