/*
 * XREFs of sub_140217B04 @ 0x140217B04
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_140693F00 @ 0x140693F00 (sub_140693F00.c)
 *     sub_1409BEBF8 @ 0x1409BEBF8 (sub_1409BEBF8.c)
 * Callees:
 *     sub_140217CA0 @ 0x140217CA0 (sub_140217CA0.c)
 *     sub_140217E70 @ 0x140217E70 (sub_140217E70.c)
 *     sub_140217FB0 @ 0x140217FB0 (sub_140217FB0.c)
 *     sub_1402946B8 @ 0x1402946B8 (sub_1402946B8.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 */

__int64 __fastcall sub_140217B04(char a1, _QWORD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rdx
  char v7; // si
  __int64 result; // rax
  __int64 v9; // r8
  int v10; // ecx
  int v11; // r9d
  unsigned int v12; // r8d
  unsigned __int8 CurrentIrql; // r10
  unsigned int v14; // edi
  __int64 v15; // r9
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v17 = 0;
  if ( _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 30, 4u) )
    return 257LL;
  if ( !a2 || *a2 )
  {
    v7 = sub_140217E70((_DWORD)CurrentThread, (_DWORD)a2, 0, (unsigned int)&v16, (__int64)&v17);
    while ( 1 )
    {
      LOBYTE(v6) = a1;
      result = sub_140217CA0(CurrentThread, v6, 37LL, 0LL);
      if ( (_DWORD)result )
        return result;
      if ( _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 30, 4u) )
        break;
      if ( (unsigned int)sub_140217FB0(CurrentThread, v17, v16) )
      {
        v14 = 258;
        goto LABEL_15;
      }
      v12 = v17;
      *((_QWORD *)CurrentThread + 44) = a3;
      *((_BYTE *)CurrentThread + 337) = 5;
      *((_BYTE *)CurrentThread + 587) = 1;
      result = sub_1402B5240(v10, (int)CurrentThread + 320, v12, v11, 0LL);
      *((_BYTE *)CurrentThread + 643) = 0;
      if ( (_DWORD)result != 256 )
        return result;
      v7 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v15 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v6 = *(_DWORD *)(v15 + 20) | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4u;
        *(_DWORD *)(v15 + 20) = v6;
      }
      *((_BYTE *)CurrentThread + 390) = CurrentIrql;
    }
    v14 = 257;
LABEL_15:
    *((_BYTE *)CurrentThread + 643) = 0;
    LOBYTE(v9) = v7;
    sub_1402946B8(KeGetCurrentPrcb(), CurrentThread, v9);
    return v14;
  }
  return 258LL;
}
