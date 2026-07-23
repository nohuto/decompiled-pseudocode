/*
 * XREFs of sub_1405C8D78 @ 0x1405C8D78
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1405C7638 @ 0x1405C7638 (sub_1405C7638.c)
 *     sub_1405C7798 @ 0x1405C7798 (sub_1405C7798.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     sub_1405C81A8 @ 0x1405C81A8 (sub_1405C81A8.c)
 *     sub_1405C85B0 @ 0x1405C85B0 (sub_1405C85B0.c)
 */

__int64 __fastcall sub_1405C8D78(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int32 *v3; // r13
  unsigned __int32 v4; // eax
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  int LockArray_high; // ebp
  __int64 v13; // r15
  _QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int32 *)(a1 + 33672);
  v4 = *(_DWORD *)(a1 + 33672);
  v16 = 0LL;
  BYTE12(v16) = 1;
  v15[0] = 0LL;
  *(_QWORD *)&v16 = a1;
  v8 = 0LL;
  v15[1] = qword_140D06C58;
  while ( (v4 & 0xFF000000) == 0x2000000 )
  {
    sub_1405C85B0((__int64)v15);
    v4 = *v3;
  }
  v9 = -1073741782;
  if ( HIBYTE(v4) - 3 <= 2u )
  {
    if ( a3 )
    {
      v10 = *(_DWORD *)a3;
      v11 = 0LL;
      if ( *(_DWORD *)a3 )
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(a3 + 8) + 24 * v11;
          if ( *(_DWORD *)(v8 + 4) == *(_DWORD *)(a1 + 33660) )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v10 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        if ( (_DWORD)v11 == v10 )
          return v9;
      }
      if ( !*(_BYTE *)(v8 + 2) )
        return v9;
      if ( !*(_BYTE *)v8 )
        return 0;
    }
    if ( (unsigned int)KeCheckProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36)) )
      return 0;
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    v13 = *(_QWORD *)(a1 + 33600);
    KeInterlockedSetProcessorAffinityEx(v13 + 72, LockArray_high);
    v9 = sub_1405C81A8(v3);
    if ( (v9 & 0x80000000) != 0 )
    {
      KeInterlockedClearProcessorAffinityEx(v13 + 72, LockArray_high);
      return v9;
    }
    KeAddProcessorAffinityEx(a2, *(_DWORD *)(a1 + 36));
    if ( !a3 || *(_DWORD *)(v8 + 4) == *(_DWORD *)(a1 + 33660) )
      return 0;
  }
  return v9;
}
