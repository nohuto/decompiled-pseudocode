/*
 * XREFs of sub_1408127B8 @ 0x1408127B8
 * Callers:
 *     sub_1408072C0 @ 0x1408072C0 (sub_1408072C0.c)
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 *     sub_140811FE0 @ 0x140811FE0 (sub_140811FE0.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 * Callees:
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall sub_1408127B8(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v4; // ebx
  PVOID v6[5]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v1 = 0;
  v6[0] = 0LL;
  v8 = 0;
  P = 0LL;
  v7 = 0;
  if ( (int)sub_140812F84(a1, L"System", L"Description", 4LL, &P, &v7) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    if ( v3 )
    {
      if ( (int)sub_140812F84(a1, L"TreatAsSystem", L"Description", 4LL, v6, &v8) >= 0 )
      {
        v4 = *(_DWORD *)v6[0];
        ExFreePoolWithTag(v6[0], 0x4B444342u);
        return v4 != 0;
      }
    }
  }
  return v1;
}
