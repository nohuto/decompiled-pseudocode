/*
 * XREFs of sub_1406815C0 @ 0x1406815C0
 * Callers:
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     CmCallbackGetKeyObjectID @ 0x1408812B0 (CmCallbackGetKeyObjectID.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 */

__int64 __fastcall sub_1406815C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  int v5; // ebx
  bool v7; // cf
  signed __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(a1 + 296);
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( !v3 )
  {
    v5 = sub_1407C0690(a1, &v8);
    if ( v5 < 0 )
      goto LABEL_7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 296), v8, 0LL) != 0;
    v3 = *(_QWORD *)(a1 + 296);
    v8 &= -(__int64)v7;
    if ( (v3 & 1) != 0 )
      v3 &= ~1uLL;
  }
  if ( a2 )
    *a2 = v3;
  v5 = 0;
LABEL_7:
  if ( v8 )
    sub_140346D64((void *)v8, 0x624E4D43u);
  return (unsigned int)v5;
}
