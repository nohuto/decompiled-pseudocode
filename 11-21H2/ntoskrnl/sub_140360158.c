/*
 * XREFs of sub_140360158 @ 0x140360158
 * Callers:
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 * Callees:
 *     sub_14036053C @ 0x14036053C (sub_14036053C.c)
 *     sub_140360618 @ 0x140360618 (sub_140360618.c)
 */

__int64 __fastcall sub_140360158(char a1, __int64 a2, int a3, int a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  _SLIST_ENTRY *v10; // rcx
  __int64 v11; // rax
  _SLIST_ENTRY *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  PSLIST_ENTRY ListEntry[2]; // [rsp+28h] [rbp-10h] BYREF

  ListEntry[0] = 0LL;
  v14 = 0LL;
  v8 = sub_14036053C(&unk_140C4EA40, ListEntry, &v14, 32LL);
  if ( v8 < 0 )
  {
    v12 = ListEntry[0];
  }
  else
  {
    v9 = v14;
    *(_DWORD *)(v14 + 16) = (4 * a4) | a1 & 3;
    *(_QWORD *)(v9 + 24) = a2;
    *(_DWORD *)v9 = *(_DWORD *)v9 & 0x80000000 | 0x103;
    v10 = ListEntry[0];
    v11 = v14;
    *(_DWORD *)(v14 + 4) = dword_140C5451C
                         + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                           + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
    *(_DWORD *)(v11 + 8) = a3;
    sub_140360618(v10);
    v12 = 0LL;
    v8 = 0;
  }
  if ( v12 )
    sub_140360618(v12);
  return (unsigned int)v8;
}
