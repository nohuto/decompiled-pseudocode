/*
 * XREFs of sub_140851DAC @ 0x140851DAC
 * Callers:
 *     sub_140851D88 @ 0x140851D88 (sub_140851D88.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403D4F3C @ 0x1403D4F3C (sub_1403D4F3C.c)
 *     sub_1408520BC @ 0x1408520BC (sub_1408520BC.c)
 */

__int64 __fastcall sub_140851DAC(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  bool v6; // zf
  unsigned int v7; // ecx
  unsigned int v8; // esi
  _WORD *v9; // r14
  __int64 result; // rax
  unsigned __int16 v11; // bp
  __int64 v12; // [rsp+70h] [rbp+8h]
  signed int v13; // [rsp+80h] [rbp+18h]

  do
  {
    v6 = !_BitScanForward(&v7, *(_DWORD *)(a1 + 24));
    v13 = v7;
    if ( v6 )
      return 3221225495LL;
  }
  while ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), v7) );
  v8 = v7;
  v9 = (_WORD *)sub_1403D4F3C();
  if ( (_UNKNOWN *)qword_140D31700[(unsigned __int16)*v9] == (_UNKNOWN *)((char *)&unk_140D3DDC0
                                                                        + 280 * (unsigned __int16)*v9) )
    v9 = 0LL;
  result = sub_1408520BC(a1, 1, 16, (_DWORD)v9, v13);
  if ( (int)result >= 0 )
  {
    v11 = 0;
    if ( word_140D05000 )
    {
      v12 = (2 * ((unsigned __int16)*v9 & 0x7Fu)) | 1LL;
      do
      {
        if ( v11 != *v9 )
        {
          v8 = v13;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v11) + 8LL * v13) = v12;
          KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v11) + 16LL), 0, 0);
        }
        ++v11;
      }
      while ( v11 < (unsigned __int16)word_140D05000 );
    }
    *a4 = v8;
    result = 0LL;
    v8 = 8;
  }
  if ( v8 != 8 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 24), v8);
  return result;
}
