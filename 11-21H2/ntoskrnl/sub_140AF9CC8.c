/*
 * XREFs of sub_140AF9CC8 @ 0x140AF9CC8
 * Callers:
 *     sub_140B1D7D0 @ 0x140B1D7D0 (sub_140B1D7D0.c)
 * Callees:
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 */

__int64 __fastcall sub_140AF9CC8(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  qword_140C4E2F0 = 0LL;
  qword_140C4E2E8 = (__int64)&qword_140C4E2E0;
  qword_140C4E2E0 = (__int64)&qword_140C4E2E0;
  LOWORD(stru_140C4BD00.Header.Lock) = 1;
  stru_140C4BD00.Header.Size = 6;
  stru_140C4BD00.Header.SignalState = 1;
  stru_140C4BD00.Header.WaitListHead.Blink = &stru_140C4BD00.Header.WaitListHead;
  stru_140C4BD00.Header.WaitListHead.Flink = &stru_140C4BD00.Header.WaitListHead;
  v8 = 0x1000000LL;
  qword_140C4DF40 = sub_140AF9E94(a1, &v8, 16LL, 0x10000LL);
  dword_140C4DF38 = qword_140C4DF40 != 0 ? 0x10000 : 0;
  qword_140C4E100 = sub_140AF9E94(a1, &v8, 16LL, 0x10000LL);
  v2 = 32;
  dword_140C4E0F8 = qword_140C4E100 != 0 ? 0x10000 : 0;
  v3 = (unsigned __int64)qword_140C4E038 < 0x100000000LL ? 0x10000 : 196608;
  v4 = v3 >> 12;
  do
  {
    v8 = (1LL << v2) - 1;
    v5 = sub_140AF9E94(a1, &v8, v4, 0x10000LL);
    if ( v5 )
      break;
    ++v2;
  }
  while ( v2 <= 0x20 );
  qword_140C4E020 = v5;
  dword_140C4E018 = v5 != 0 ? v3 : 0;
  if ( v2 >= 0x40 )
    qword_140C4DFE8 = -1LL;
  else
    qword_140C4DFE8 = (1LL << v2) - 1;
  v6 = 32;
  while ( 1 )
  {
    v8 = (1LL << v6) - 1;
    result = sub_140AF9E94(a1, &v8, v4, 0x10000LL);
    if ( result )
      break;
    if ( ++v6 > 0x20 )
    {
      v3 = 0;
      break;
    }
  }
  qword_140C4E1E0 = result;
  dword_140C4E1D8 = v3;
  if ( v6 >= 0x40 )
  {
    qword_140C4E1A8 = -1LL;
  }
  else
  {
    result = (1LL << v6) - 1;
    qword_140C4E1A8 = result;
  }
  return result;
}
