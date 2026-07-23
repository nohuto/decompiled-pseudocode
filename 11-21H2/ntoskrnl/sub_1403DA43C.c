/*
 * XREFs of sub_1403DA43C @ 0x1403DA43C
 * Callers:
 *     sub_1403DA420 @ 0x1403DA420 (sub_1403DA420.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

__int64 sub_1403DA43C()
{
  __int64 result; // rax
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rcx
  _WORD *Pool3; // rax
  __int128 v5; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v6[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+52h] [rbp-Eh]
  __int16 v9; // [rsp+56h] [rbp-Ah]
  unsigned int v10; // [rsp+70h] [rbp+10h] BYREF

  v6[1] = (unsigned __int16 *)qword_140D06E48[0];
  v8 = 0;
  v6[0] = (unsigned __int16 *)dword_140D06E40;
  v9 = 0;
  v5 = 0LL;
  v10 = 0;
  v7 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v6);
    if ( (_DWORD)result )
      break;
    v1 = sub_140348800(v10);
    v2 = v1;
    if ( !*(_QWORD *)(v1 + 13264) )
    {
      v3 = *(_QWORD *)(v1 + 192);
      LOBYTE(v5) = 3;
      DWORD2(v5) = *(unsigned __int16 *)(v3 + 138);
      Pool3 = (_WORD *)ExAllocatePool3(64, 80, 1883466059, (unsigned int)&v5, 1);
      if ( Pool3 )
      {
        *(_BYTE *)Pool3 = 19;
        Pool3[1] = 0;
        *((_QWORD *)Pool3 + 3) = sub_1405689D0;
        *((_QWORD *)Pool3 + 4) = v2;
        *((_QWORD *)Pool3 + 7) = 0LL;
        *((_QWORD *)Pool3 + 2) = 0LL;
        *((_BYTE *)Pool3 + 1) = 2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 13264), (signed __int64)Pool3, 0LL) )
          ExFreePoolWithTag(Pool3, 0x7043694Bu);
      }
    }
  }
  return result;
}
