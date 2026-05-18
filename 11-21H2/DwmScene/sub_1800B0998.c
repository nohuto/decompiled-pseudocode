/*
 * XREFs of sub_1800B0998 @ 0x1800B0998
 * Callers:
 *     sub_18003D9EC @ 0x18003D9EC (sub_18003D9EC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180048D74 @ 0x180048D74 (sub_180048D74.c)
 */

void __fastcall sub_1800B0998(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 *v3; // r10
  __int64 v4; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 != *a2 )
  {
    v6 = *(_QWORD *)(v4 + 112);
    v7 = *(_QWORD *)(v2 + 112);
    if ( v6 != v7 && (!v6 || !v7 || !sub_180048D74(v6, v7)) )
    {
      v8 = v3[1];
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v2 = *v3;
        v8 = v3[1];
        v4 = *(_QWORD *)(a1 + 24);
      }
      v9 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v8;
      v10[0] = v4;
      *(_QWORD *)(a1 + 24) = v2;
      v10[1] = v9;
      sub_180010910((__int64)v10);
      *(_BYTE *)(a1 + 61) = 1;
    }
  }
}
