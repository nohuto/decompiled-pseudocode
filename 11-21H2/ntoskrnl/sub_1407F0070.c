/*
 * XREFs of sub_1407F0070 @ 0x1407F0070
 * Callers:
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 *     sub_1407F015C @ 0x1407F015C (sub_1407F015C.c)
 *     sub_1407F0C38 @ 0x1407F0C38 (sub_1407F0C38.c)
 *     sub_1407F10C4 @ 0x1407F10C4 (sub_1407F10C4.c)
 *     sub_1407F10FC @ 0x1407F10FC (sub_1407F10FC.c)
 *     sub_1407F1308 @ 0x1407F1308 (sub_1407F1308.c)
 */

__int64 __fastcall sub_1407F0070(__int64 a1)
{
  _DWORD *inserted; // rax
  __int64 v3; // rdx
  __int128 Buffer; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+58h] [rbp+18h] BYREF

  Buffer = 0LL;
  v6 = 0LL;
  if ( qword_140C1CFC8 && (int)sub_1407F0C38(a1, (char *)&Buffer + 8) >= 0 )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C1CFD0);
    inserted = RtlLookupElementGenericTableAvl(&stru_140C1CF60, &Buffer);
    if ( !inserted )
    {
      if ( (int)sub_1407F1308(*((_QWORD *)&Buffer + 1), v3, &v6) < 0 )
        goto LABEL_6;
      sub_1407F10C4(*((PVOID *)&Buffer + 1));
      *((_QWORD *)&Buffer + 1) = 0LL;
      if ( (int)sub_1407F10FC(v6, (char *)&Buffer + 8) < 0 )
        goto LABEL_6;
      LODWORD(Buffer) = 1;
      inserted = RtlInsertElementGenericTableAvl(&stru_140C1CF60, &Buffer, 0x18u, &NewElement);
      if ( !inserted )
      {
LABEL_5:
        *(_QWORD *)(a1 + 160) = inserted;
LABEL_6:
        sub_1402935D0((ULONG_PTR)&qword_140C1CFD0);
        return sub_1407F015C(&Buffer);
      }
      Buffer = 0LL;
      v6 = 0LL;
    }
    ++*inserted;
    goto LABEL_5;
  }
  return sub_1407F015C(&Buffer);
}
