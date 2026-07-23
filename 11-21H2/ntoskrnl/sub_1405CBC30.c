/*
 * XREFs of sub_1405CBC30 @ 0x1405CBC30
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_1405CBF00 @ 0x1405CBF00 (sub_1405CBF00.c)
 *     sub_1405CCAC0 @ 0x1405CCAC0 (sub_1405CCAC0.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405D2B0C @ 0x1405D2B0C (sub_1405D2B0C.c)
 *     sub_1405D2C00 @ 0x1405D2C00 (sub_1405D2C00.c)
 */

__int64 __fastcall sub_1405CBC30(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v8; // ebx
  unsigned int i; // r8d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx

  v8 = _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
  for ( i = 0; i < *(_DWORD *)(a3 + 56); *(_QWORD *)(v11 + 8) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v10 + 8) )
  {
    v10 = i++;
    v10 *= 2LL;
    v11 = *(_QWORD *)(a3 + 152) + 32LL * *(unsigned int *)(*(_QWORD *)(a3 + 48) + 8 * v10);
    *(_QWORD *)(v11 + 16) = *(_QWORD *)(a3 + 64);
    *(_BYTE *)(v11 + 24) = 0;
  }
  sub_1405D2C00(a3, v8 & 7);
  if ( v8 >= 0 )
  {
    v8 = _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
    if ( (v8 & 0x8000000) == 0 )
      sub_140355058(*(_QWORD *)(a1 + 48), a2, 15, 1LL);
  }
  sub_14042A5E0(*(_QWORD *)(a1 + 192), a2);
  if ( v8 < 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a3 + 40));
    KeSetEvent((PRKEVENT)(a3 + 8), 0, 0);
  }
  LOBYTE(v12) = a4;
  return sub_1405D2B0C(a3, v12);
}
