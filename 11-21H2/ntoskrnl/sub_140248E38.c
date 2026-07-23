/*
 * XREFs of sub_140248E38 @ 0x140248E38
 * Callers:
 *     sub_1402FF4D0 @ 0x1402FF4D0 (sub_1402FF4D0.c)
 *     sub_1403AEC40 @ 0x1403AEC40 (sub_1403AEC40.c)
 *     sub_1403AFA58 @ 0x1403AFA58 (sub_1403AFA58.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 __fastcall sub_140248E38(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+32h] [rbp-16h]
  __int16 v10; // [rsp+36h] [rbp-12h]
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+64h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v8 = *(_WORD *)(a1 + 8);
  v7[1] = *(_QWORD *)a1;
  v7[0] = 0LL;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v11, v7);
    if ( (_DWORD)result )
      break;
    v5 = sub_140348800(v11);
    if ( a2 )
    {
      if ( a2 == 1 && (*(_DWORD *)(v5 + 11672))-- == 1 )
        _interlockedbittestandset64(
          (volatile signed __int32 *)(*(_QWORD *)(v5 + 192) + 96LL),
          *(unsigned __int8 *)(v5 + 209));
    }
    else if ( ++*(_DWORD *)(v5 + 11672) == 1 )
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(v5 + 192) + 96LL),
        *(unsigned __int8 *)(v5 + 209));
    }
  }
  return result;
}
