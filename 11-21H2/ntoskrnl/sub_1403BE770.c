/*
 * XREFs of sub_1403BE770 @ 0x1403BE770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 */

__int64 __fastcall sub_1403BE770(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  unsigned int v4; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = qword_140C4A1C8;
  v2 = 0;
  if ( qword_140C4A1C8 || (qword_140C4A1C8 = sub_1403BE7F0(qword_140C4A1D0, 1024LL, 0LL), (v1 = qword_140C4A1C8) != 0) )
  {
    if ( byte_140C4A1D8 )
      v4 = *(_DWORD *)(v1 + 16) | 3;
    else
      v4 = *(_DWORD *)(v1 + 16) & 0xFFFFFFFC | 1;
    *(_DWORD *)(v1 + 16) = v4;
    _InterlockedOr(v6, 0);
    *(_DWORD *)(v1 + 16) = v4;
    _InterlockedOr(v6, 0);
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
