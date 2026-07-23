/*
 * XREFs of sub_14035F5E8 @ 0x14035F5E8
 * Callers:
 *     sub_140260BE0 @ 0x140260BE0 (sub_140260BE0.c)
 *     sub_14035F344 @ 0x14035F344 (sub_14035F344.c)
 *     sub_14035F464 @ 0x14035F464 (sub_14035F464.c)
 *     sub_14035F4C8 @ 0x14035F4C8 (sub_14035F4C8.c)
 *     sub_14035F5AC @ 0x14035F5AC (sub_14035F5AC.c)
 *     sub_140376B48 @ 0x140376B48 (sub_140376B48.c)
 *     sub_14037A04C @ 0x14037A04C (sub_14037A04C.c)
 *     sub_14037AA7C @ 0x14037AA7C (sub_14037AA7C.c)
 *     sub_14037BC58 @ 0x14037BC58 (sub_14037BC58.c)
 *     sub_14037BD80 @ 0x14037BD80 (sub_14037BD80.c)
 *     sub_14037C6BC @ 0x14037C6BC (sub_14037C6BC.c)
 *     sub_14037CFB8 @ 0x14037CFB8 (sub_14037CFB8.c)
 *     sub_14037D8B8 @ 0x14037D8B8 (sub_14037D8B8.c)
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_140393778 @ 0x140393778 (sub_140393778.c)
 *     sub_14045F5F6 @ 0x14045F5F6 (sub_14045F5F6.c)
 *     sub_1405F7090 @ 0x1405F7090 (sub_1405F7090.c)
 *     sub_1405FBB0C @ 0x1405FBB0C (sub_1405FBB0C.c)
 *     sub_1405FCF84 @ 0x1405FCF84 (sub_1405FCF84.c)
 *     sub_1405FD170 @ 0x1405FD170 (sub_1405FD170.c)
 *     sub_1405FD250 @ 0x1405FD250 (sub_1405FD250.c)
 *     sub_1405FD31C @ 0x1405FD31C (sub_1405FD31C.c)
 *     sub_1406E5B58 @ 0x1406E5B58 (sub_1406E5B58.c)
 *     sub_1406EBF2C @ 0x1406EBF2C (sub_1406EBF2C.c)
 *     sub_1406ECC60 @ 0x1406ECC60 (sub_1406ECC60.c)
 *     sub_1406ED260 @ 0x1406ED260 (sub_1406ED260.c)
 *     sub_1406ED528 @ 0x1406ED528 (sub_1406ED528.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 *     sub_1407F575C @ 0x1407F575C (sub_1407F575C.c)
 *     sub_1407FA72C @ 0x1407FA72C (sub_1407FA72C.c)
 *     sub_140847F98 @ 0x140847F98 (sub_140847F98.c)
 *     sub_1409D4090 @ 0x1409D4090 (sub_1409D4090.c)
 *     sub_1409D4698 @ 0x1409D4698 (sub_1409D4698.c)
 *     sub_1409D5ADC @ 0x1409D5ADC (sub_1409D5ADC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14035F5E8(__int64 a1, unsigned int a2)
{
  char v2; // r8
  __int64 v3; // rdx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)a2 >> 5));
  if ( v3 )
    return v3 + 40LL * (v2 & 0x1F);
  else
    return 0LL;
}
