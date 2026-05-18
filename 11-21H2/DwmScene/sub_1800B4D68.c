/*
 * XREFs of sub_1800B4D68 @ 0x1800B4D68
 * Callers:
 *     sub_1800B4E58 @ 0x1800B4E58 (sub_1800B4E58.c)
 *     sub_1800B5738 @ 0x1800B5738 (sub_1800B5738.c)
 * Callees:
 *     sub_18002CCFC @ 0x18002CCFC (sub_18002CCFC.c)
 */

__int64 __fastcall sub_1800B4D68(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = (_QWORD *)(a2 + 136);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  if ( a1 + 136 != a2 + 136 )
  {
    v5 = (_QWORD *)*v3;
    sub_18002CCFC((__int64)v3, (__int64)v3, *(char **)(*v3 + 8LL));
    v5[1] = v5;
    *v5 = v5;
    v5[2] = v5;
    v3[1] = 0LL;
    v6 = *v3;
    *v3 = *v2;
    v7 = v2[1];
    *v2 = v6;
    v8 = v3[1];
    v3[1] = v7;
    v2[1] = v8;
  }
  return a1;
}
