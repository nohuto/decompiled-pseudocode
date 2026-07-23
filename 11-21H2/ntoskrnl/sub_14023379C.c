/*
 * XREFs of sub_14023379C @ 0x14023379C
 * Callers:
 *     sub_1407A41E0 @ 0x1407A41E0 (sub_1407A41E0.c)
 * Callees:
 *     sub_1402338D4 @ 0x1402338D4 (sub_1402338D4.c)
 */

signed __int64 __fastcall sub_14023379C(__int64 a1)
{
  __int64 v1; // r10
  signed __int64 result; // rax
  __int64 v3; // r11
  _QWORD *v4; // r10
  __int64 v5; // r11
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 544);
  *(_DWORD *)(v1 + 892) += *(_DWORD *)(a1 + 652);
  *(_DWORD *)(v1 + 896) += *(_DWORD *)(a1 + 732);
  *(_DWORD *)(v1 + 900) += *(_DWORD *)(a1 + 132);
  *(_QWORD *)(v1 + 864) += *(_QWORD *)(a1 + 72);
  *(_QWORD *)(v1 + 1000) += *(_QWORD *)(a1 + 992);
  *(_QWORD *)(v1 + 1008) += *(_QWORD *)(a1 + 1000);
  *(_QWORD *)(v1 + 872) += *(unsigned int *)(a1 + 340);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1552), *(_QWORD *)(a1 + 896));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1560), *(_QWORD *)(a1 + 904));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1568), *(_QWORD *)(a1 + 912));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1576), *(_QWORD *)(a1 + 920));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1584), *(_QWORD *)(a1 + 928));
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1592), *(_QWORD *)(a1 + 936));
  v3 = *(_QWORD *)(a1 + 1608);
  if ( v3 )
  {
    sub_1402338D4(*(_QWORD *)(v1 + 2280) + 272LL, v3 + 192);
    v6 = v5 - (_QWORD)v4;
    v7 = 4LL;
    do
    {
      v8 = 2LL;
      do
      {
        *v4 += *(_QWORD *)((char *)v4 + v6);
        v4[18] += *(_QWORD *)((char *)v4 + v6 + 64);
        result = *(_QWORD *)((char *)v4 + v6 + 128);
        v4[26] += result;
        ++v4;
        --v8;
      }
      while ( v8 );
      --v7;
    }
    while ( v7 );
  }
  return result;
}
