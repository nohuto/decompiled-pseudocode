/*
 * XREFs of sub_1407ED7E0 @ 0x1407ED7E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 */

_BOOL8 __fastcall sub_1407ED7E0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  bool v4; // bl
  __int64 v6; // r11
  _DWORD *v7; // rax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !*a4 || *a4 == ((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v6 = a4[1];
    if ( !v6
      || ((unsigned __int8)dword_140D06C0C ^ (unsigned __int8)(*(_BYTE *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                        + 0x18) ^ ((unsigned __int16)(WORD1(*(_QWORD *)a2) & 0xFFF0) >> 8))) == *(_BYTE *)(v6 + 40) )
    {
      v7 = (_DWORD *)a4[2];
      v4 = !v7 || *v7 == ((*(__int64 *)a2 >> 17) & 7) && v7[1] == (*(_DWORD *)(a2 + 8) & 0x1FFFFFF);
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = 0;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)a2, 1uLL);
  _InterlockedOr(v8, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v4;
}
