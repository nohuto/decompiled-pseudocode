/*
 * XREFs of sub_140A96CA8 @ 0x140A96CA8
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x140832620 (PsSetCreateProcessNotifyRoutine.c)
 *     sub_140A96EB4 @ 0x140A96EB4 (sub_140A96EB4.c)
 *     sub_140A96F60 @ 0x140A96F60 (sub_140A96F60.c)
 *     sub_140A97760 @ 0x140A97760 (sub_140A97760.c)
 *     sub_140A9782C @ 0x140A9782C (sub_140A9782C.c)
 *     sub_140A9C820 @ 0x140A9C820 (sub_140A9C820.c)
 */

__int64 __fastcall sub_140A96CA8(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a3) = 1;
  v9 = dword_140C29FC0 | 4;
  v4 = sub_140A9C820(&v9, 4LL, a3);
  if ( v4 >= 0 )
  {
    if ( !dword_140D575F8 )
    {
      PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)sub_14045F6A0, 0);
      dword_140D575F8 = 1;
    }
    if ( *(_DWORD *)(a1 + 4) )
      dword_140C0D8C0 = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)a1;
    if ( !*(_DWORD *)a1 )
    {
      dword_140C0D8C0 = 10000;
      v5 = 600;
    }
    dword_140C0C83C = v5;
    sub_140A9782C();
    sub_140A97760();
    v6 = *(unsigned __int16 *)(a1 + 24);
    if ( !(_WORD)v6 || (v4 = sub_140A96EB4(*(_QWORD *)(a1 + 32), v6 >> 1), v4 >= 0) )
    {
      v7 = *(unsigned __int16 *)(a1 + 8);
      if ( (_WORD)v7 )
        return (unsigned int)sub_140A96F60(*(_QWORD *)(a1 + 16), v7 >> 1);
    }
  }
  return (unsigned int)v4;
}
