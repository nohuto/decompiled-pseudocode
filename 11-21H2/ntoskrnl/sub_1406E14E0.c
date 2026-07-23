/*
 * XREFs of sub_1406E14E0 @ 0x1406E14E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140258114 @ 0x140258114 (sub_140258114.c)
 *     sub_1402581BC @ 0x1402581BC (sub_1402581BC.c)
 *     sub_14053C3E4 @ 0x14053C3E4 (sub_14053C3E4.c)
 */

char __fastcall sub_1406E14E0(__int64 a1)
{
  __int64 v1; // r9

  ++qword_140C49908;
  qword_140C49928 += sub_1402581BC(*(_QWORD *)(a1 + 8));
  if ( byte_140C54C58 == 1 )
  {
    sub_14053C3E4(v1);
  }
  else
  {
    qword_140C49918 += *(unsigned int *)(v1 + 912);
    qword_140C49920 += *(_QWORD *)(v1 + 992);
    qword_140C49930 += *(unsigned int *)(v1 + 776);
    qword_140C49940 += *(_QWORD *)(v1 + 1080);
    qword_140C49948 += *(_QWORD *)(v1 + 1088);
    sub_140258114(v1, 0LL, &qword_140C49938);
  }
  return 1;
}
