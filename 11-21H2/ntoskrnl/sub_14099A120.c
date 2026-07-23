/*
 * XREFs of sub_14099A120 @ 0x14099A120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_1407EEF9C @ 0x1407EEF9C (sub_1407EEF9C.c)
 */

__int64 __fastcall sub_14099A120(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4[0] = 4;
  if ( (int)ExQueryWnfStateData(a1, &v5, &v3, v4) >= 0 )
  {
    v1 = v3;
    if ( v3 <= 2 )
    {
      sub_1402D66A8((ULONG_PTR)&qword_140C1F5C0);
      dword_140C0C650 = v1;
      sub_1402935D0((ULONG_PTR)&qword_140C1F5C0);
      sub_1407EEF9C(2);
    }
  }
  return 0LL;
}
