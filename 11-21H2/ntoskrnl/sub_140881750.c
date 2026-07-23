/*
 * XREFs of sub_140881750 @ 0x140881750
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     sub_140881BB6 @ 0x140881BB6 (sub_140881BB6.c)
 */

bool __fastcall sub_140881750(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rsi
  bool v6; // bl
  unsigned __int64 v8; // rcx
  struct _OBJECT_TYPE *v9; // rax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *a4;
  v6 = 0;
  v8 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = (struct _OBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v8 + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)];
  if ( v9 == (struct _OBJECT_TYPE *)IoFileObjectType )
  {
    if ( v4 == v8 + 48 )
      v6 = *((_BYTE *)a4 + 8) == 0;
    else
      v6 = *(_QWORD *)(v4 + 24) == *(_QWORD *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x48);
  }
  else if ( v9 == MmSectionObjectType && *(_QWORD *)(v4 + 40) )
  {
    v6 = sub_140881BB6(v8 + 48) == *(_QWORD *)(v4 + 40);
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v11, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v6;
}
