/*
 * XREFs of sub_1408630F0 @ 0x1408630F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_140753094 @ 0x140753094 (sub_140753094.c)
 *     sub_1407EE888 @ 0x1407EE888 (sub_1407EE888.c)
 *     sub_14086318C @ 0x14086318C (sub_14086318C.c)
 */

__int64 __fastcall sub_1408630F0(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9

  v6 = -1073741811;
  sub_140753094(1);
  v7 = 0x4E037E983166BC41LL - *a1;
  if ( *a1 == 0x4E037E983166BC41LL )
    v7 = 0x8E212B5F0FEC4EB3uLL - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    KeCancelTimer2((__int64)&unk_140C242C0);
    dword_140D3B0A0 = *a2;
    sub_14086318C();
    sub_1407EE888();
    v6 = 0;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C24280);
  return v6;
}
