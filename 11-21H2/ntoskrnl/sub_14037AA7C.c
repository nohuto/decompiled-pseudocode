/*
 * XREFs of sub_14037AA7C @ 0x14037AA7C
 * Callers:
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_140391B70 @ 0x140391B70 (sub_140391B70.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037A5B0 @ 0x14037A5B0 (sub_14037A5B0.c)
 *     sub_14037AC18 @ 0x14037AC18 (sub_14037AC18.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14037AA7C(__int64 a1, __int64 a2, __int128 *a3, unsigned int *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  int v7; // esi
  __int128 v9; // xmm1
  _SLIST_HEADER *v10; // rcx
  BOOL v11; // ebx
  struct _EX_RUNDOWN_REF *v12; // rax
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+40h] [rbp-28h]

  v4 = *((_QWORD *)a3 + 4);
  v5 = *(_DWORD *)a3 & 7;
  v7 = 1;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( a4 )
  {
    v9 = a3[1];
    v14 = *a3;
    v16 = *((_QWORD *)a3 + 4);
    v15 = v9;
  }
  if ( v5 < 4 )
  {
    if ( v5 == 2 )
    {
      if ( (*((_DWORD *)a3 + 2) & 0x4000000) != 0 )
      {
        if ( LOWORD(stru_140D31EE0.Alignment) >= 0x1000u )
        {
          ExFreePoolWithTag(a3, 0);
          goto LABEL_9;
        }
        v10 = &stru_140D31EE0;
        goto LABEL_8;
      }
    }
    else if ( !v5 && *((int *)a3 + 2) < 0 )
    {
      *(_QWORD *)&v15 = **((_QWORD **)a3 + 2);
      v10 = &stru_140D31F80;
LABEL_8:
      ExpInterlockedPushEntrySList(v10, (PSLIST_ENTRY)a3);
LABEL_9:
      v11 = v5 == 1;
      goto LABEL_10;
    }
    sub_14037A5B0((__int64)&unk_140D31A00, a3, v4);
    goto LABEL_9;
  }
  v13 = *((_DWORD *)a3 + 2) & 7;
  if ( v5 == 5 )
  {
    if ( v13 )
    {
      v11 = 0;
      ExFreePoolWithTag(a3, 0);
      goto LABEL_10;
    }
LABEL_31:
    ExFreePoolWithTag(a3, 0);
LABEL_15:
    v12 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8((__int64)&unk_140D31A00, *(_DWORD *)(a2 + 6016) & 0x3FF);
    sub_1402AD030(v12 + 1);
    return;
  }
  v11 = 0;
  if ( !v13 )
  {
    *((_QWORD *)a3 + 4) = 0LL;
    goto LABEL_10;
  }
  if ( v13 == 3 )
    goto LABEL_31;
  if ( (unsigned int)(v13 - 1) <= 1 )
    v7 = 0;
LABEL_10:
  if ( !a4
    || (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, _QWORD))sub_14037AC18)(&v14, a2, a2, *a4) )
  {
    if ( v11 )
      sub_14037AE58(&unk_140D31F90, 0LL, v4, v4);
  }
  if ( v7 )
    goto LABEL_15;
}
