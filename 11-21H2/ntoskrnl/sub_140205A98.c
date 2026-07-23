/*
 * XREFs of sub_140205A98 @ 0x140205A98
 * Callers:
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_140847260 @ 0x140847260 (sub_140847260.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     sub_1402F9578 @ 0x1402F9578 (sub_1402F9578.c)
 *     sub_1407259B0 @ 0x1407259B0 (sub_1407259B0.c)
 */

__int64 __fastcall sub_140205A98(__int64 a1, __int64 a2, _BYTE *a3)
{
  void *v5; // rax
  void *v6; // rcx
  void *v7; // rbx
  __int64 result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = *(_BYTE *)(a2 + 2170);
  *a3 = 0;
  v5 = (void *)sub_1402F9578(&v9);
  v6 = *(void **)(a1 + 1104);
  v7 = v5;
  if ( v6 )
  {
    if ( v5 && RtlEqualSid(v6, v5) )
      return 0LL;
  }
  else if ( !v5 )
  {
    return 0LL;
  }
  result = sub_1407259B0(a1, v7);
  if ( (int)result >= 0 )
    *a3 = 1;
  return result;
}
