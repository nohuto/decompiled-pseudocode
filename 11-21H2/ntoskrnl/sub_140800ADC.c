/*
 * XREFs of sub_140800ADC @ 0x140800ADC
 * Callers:
 *     sub_140800A38 @ 0x140800A38 (sub_140800A38.c)
 *     sub_140A1CC78 @ 0x140A1CC78 (sub_140A1CC78.c)
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 *     sub_140A20648 @ 0x140A20648 (sub_140A20648.c)
 * Callees:
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140800ADC(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  _DWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v3 = 0LL;
  v10 = 0LL;
  v4 = sub_140813164(a1, L"Description", 131097LL, v8);
  if ( v4 >= 0 )
  {
    v5 = v8[0];
    v9 = 0;
    *a2 = 1;
    v6 = sub_140812F84(v5, L"Type", 0LL, 4LL, &v10, &v9);
    v3 = v10;
    v4 = v6;
    if ( v6 >= 0 )
    {
      if ( v9 == 4 )
        a2[1] = *v10;
      else
        v4 = -1073741788;
    }
  }
  if ( v8[0] )
    sub_1408132F0(v8[0]);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)v4;
}
