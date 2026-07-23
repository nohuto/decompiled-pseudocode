/*
 * XREFs of sub_14081BAC8 @ 0x14081BAC8
 * Callers:
 *     sub_140749F30 @ 0x140749F30 (sub_140749F30.c)
 * Callees:
 *     sub_140772044 @ 0x140772044 (sub_140772044.c)
 */

void __fastcall sub_14081BAC8(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v1 + 600)) != 1 )
        break;
      v2 = *(_QWORD *)(v1 + 48);
      if ( v2 )
        sub_140772044(a1, v2, 11);
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( v1 );
  }
}
