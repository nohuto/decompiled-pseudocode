/*
 * XREFs of sub_140217454 @ 0x140217454
 * Callers:
 *     sub_140202010 @ 0x140202010 (sub_140202010.c)
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 *     sub_1402172E4 @ 0x1402172E4 (sub_1402172E4.c)
 *     sub_140218288 @ 0x140218288 (sub_140218288.c)
 *     sub_14022CA54 @ 0x14022CA54 (sub_14022CA54.c)
 *     sub_14023EA5C @ 0x14023EA5C (sub_14023EA5C.c)
 *     sub_14026446C @ 0x14026446C (sub_14026446C.c)
 *     sub_140270228 @ 0x140270228 (sub_140270228.c)
 *     sub_140287450 @ 0x140287450 (sub_140287450.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1403872A4 @ 0x1403872A4 (sub_1403872A4.c)
 *     sub_140389084 @ 0x140389084 (sub_140389084.c)
 *     sub_1403B7CB0 @ 0x1403B7CB0 (sub_1403B7CB0.c)
 *     sub_1403C5160 @ 0x1403C5160 (sub_1403C5160.c)
 *     sub_1403CB9F0 @ 0x1403CB9F0 (sub_1403CB9F0.c)
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 *     sub_1403D9D30 @ 0x1403D9D30 (sub_1403D9D30.c)
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 *     sub_14057B194 @ 0x14057B194 (sub_14057B194.c)
 *     sub_14059D69C @ 0x14059D69C (sub_14059D69C.c)
 *     sub_14059F23C @ 0x14059F23C (sub_14059F23C.c)
 *     sub_1405A1AE8 @ 0x1405A1AE8 (sub_1405A1AE8.c)
 *     sub_1405AB148 @ 0x1405AB148 (sub_1405AB148.c)
 *     sub_140983C8C @ 0x140983C8C (sub_140983C8C.c)
 *     sub_1409AE584 @ 0x1409AE584 (sub_1409AE584.c)
 * Callees:
 *     sub_140217CA0 @ 0x140217CA0 (sub_140217CA0.c)
 *     sub_1402946B8 @ 0x1402946B8 (sub_1402946B8.c)
 *     sub_1402B5240 @ 0x1402B5240 (sub_1402B5240.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 */

__int64 __fastcall sub_140217454(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v5; // rdi
  unsigned __int8 CurrentIrql; // r10
  unsigned int v7; // ebp
  _QWORD *v8; // rcx
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = (_QWORD *)((char *)CurrentThread + 320);
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    *((_BYTE *)CurrentThread + 390) = CurrentIrql;
    v7 = sub_140217CA0(CurrentThread, 0LL, a2, 0LL);
    if ( v7 )
      break;
    *((_BYTE *)CurrentThread + 336) = 1;
    *((_BYTE *)CurrentThread + 337) = 4;
    *((_WORD *)CurrentThread + 169) = 0;
    *((_QWORD *)CurrentThread + 44) = a1;
    sub_1402F3290(a1);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      sub_1402946B8(KeGetCurrentPrcb(), CurrentThread, 0LL);
      return v7;
    }
    v8 = *(_QWORD **)(a1 + 16);
    if ( *v8 != a1 + 8 )
      __fastfail(3u);
    *v5 = a1 + 8;
    *((_QWORD *)CurrentThread + 41) = v8;
    *v8 = v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    *((_BYTE *)CurrentThread + 587) = 1;
    v7 = sub_1402B5240((_DWORD)CurrentThread, (int)CurrentThread + 320, 0, 0, 0LL);
  }
  while ( v7 == 256 );
  return v7;
}
